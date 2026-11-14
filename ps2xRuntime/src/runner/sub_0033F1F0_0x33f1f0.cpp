#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033F1F0
// Address: 0x33f1f0 - 0x33f278
void sub_0033F1F0_0x33f1f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033F1F0_0x33f1f0");
#endif

    switch (ctx->pc) {
        case 0x33f220u: goto label_33f220;
        case 0x33f238u: goto label_33f238;
        case 0x33f258u: goto label_33f258;
        default: break;
    }

    ctx->pc = 0x33f1f0u;

    // 0x33f1f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33f1f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33f1f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33f1f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33f1f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33f1f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33f1fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x33f1fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f200: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33f200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33f204: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33f204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33f208: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33f208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33f20c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x33f20cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f210: 0x34a50004  ori         $a1, $a1, 0x4
    ctx->pc = 0x33f210u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4);
    // 0x33f214: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x33f214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33f218: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33F218u;
    SET_GPR_U32(ctx, 31, 0x33F220u);
    ctx->pc = 0x33F21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F218u;
    // 0x33f21c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33F218u, 0x33F220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F220u;
label_33f220:
    // 0x33f220: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x33F220u;
    {
        const bool branch_taken_0x33f220 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x33F224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F220u;
        // 0x33f224: 0x2228021  addu        $s0, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f220) {
            ctx->pc = 0x33F258u;
            goto label_33f258;
        }
    }
    ctx->pc = 0x33F228u;
    // 0x33f228: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x33f228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f22c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x33f22cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f230: 0xc103440  jal         func_40D100
    ctx->pc = 0x33F230u;
    SET_GPR_U32(ctx, 31, 0x33F238u);
    ctx->pc = 0x33F234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F230u;
    // 0x33f234: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x33F230u, 0x33F238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F238u;
label_33f238:
    // 0x33f238: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x33f238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33f23c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33F23Cu;
    {
        const bool branch_taken_0x33f23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33F240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F23Cu;
        // 0x33f240: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33f23c) {
            ctx->pc = 0x33F258u;
            goto label_33f258;
        }
    }
    ctx->pc = 0x33F244u;
    // 0x33f244: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x33f244u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x33f248: 0x460018  mult        $zero, $v0, $a2
    ctx->pc = 0x33f248u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x33f24c: 0x3012  mflo        $a2
    ctx->pc = 0x33f24cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x33f250: 0xc10341a  jal         func_40D068
    ctx->pc = 0x33F250u;
    SET_GPR_U32(ctx, 31, 0x33F258u);
    ctx->pc = 0x33F254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33F250u;
    // 0x33f254: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x33F250u, 0x33F258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33F258u;
label_33f258:
    // 0x33f258: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33f258u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33f25c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33f25cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33f260: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33f260u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33f264: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33f264u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33f268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33f268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33f26c: 0x3e00008  jr          $ra
    ctx->pc = 0x33F26Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33F270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33F26Cu;
        // 0x33f270: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33F26Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33F274u;
    // 0x33f274: 0x0  nop
    ctx->pc = 0x33f274u;
    // NOP
    ctx->pc = 0x33f278u;
}
