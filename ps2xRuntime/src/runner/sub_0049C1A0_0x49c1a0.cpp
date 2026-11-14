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

// Function: sub_0049C1A0
// Address: 0x49c1a0 - 0x49c270
void sub_0049C1A0_0x49c1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049C1A0_0x49c1a0");
#endif

    switch (ctx->pc) {
        case 0x49c260u: goto label_49c260;
        default: break;
    }

    ctx->pc = 0x49c1a0u;

    // 0x49c1a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x49c1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x49c1a4: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x49c1a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c1a8: 0x3c070fff  lui         $a3, 0xFFF
    ctx->pc = 0x49c1a8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4095 << 16));
    // 0x49c1ac: 0x8d030040  lw          $v1, 0x40($t0)
    ctx->pc = 0x49c1acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x49c1b0: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x49c1b0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c1b4: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x49c1b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x49c1b8: 0xc6480b  movn        $t1, $a2, $a2
    ctx->pc = 0x49c1b8u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 6));
    // 0x49c1bc: 0x671024  and         $v0, $v1, $a3
    ctx->pc = 0x49c1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x49c1c0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x49C1C0u;
    {
        const bool branch_taken_0x49c1c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C1C0u;
        // 0x49c1c4: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c1c0) {
            ctx->pc = 0x49C1F4u;
            goto label_49c1f4;
        }
    }
    ctx->pc = 0x49C1C8u;
    // 0x49c1c8: 0x31702  srl         $v0, $v1, 28
    ctx->pc = 0x49c1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 28));
    // 0x49c1cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x49c1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x49c1d0: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x49c1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x49c1d4: 0x32023  negu        $a0, $v1
    ctx->pc = 0x49c1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x49c1d8: 0x24630027  addiu       $v1, $v1, 0x27
    ctx->pc = 0x49c1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 39));
    // 0x49c1dc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x49c1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x49c1e0: 0xad230000  sw          $v1, 0x0($t1)
    ctx->pc = 0x49c1e0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 3));
    // 0x49c1e4: 0x8d020040  lw          $v0, 0x40($t0)
    ctx->pc = 0x49c1e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 64)));
    // 0x49c1e8: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x49c1e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x49c1ec: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x49C1ECu;
    {
        const bool branch_taken_0x49c1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C1ECu;
        // 0x49c1f0: 0x623021  addu        $a2, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c1ec) {
            ctx->pc = 0x49C1F8u;
            goto label_49c1f8;
        }
    }
    ctx->pc = 0x49C1F4u;
label_49c1f4:
    // 0x49c1f4: 0xad200000  sw          $zero, 0x0($t1)
    ctx->pc = 0x49c1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 0));
label_49c1f8:
    // 0x49c1f8: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x49c1f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
    // 0x49c1fc: 0x24c30004  addiu       $v1, $a2, 0x4
    ctx->pc = 0x49c1fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x49c200: 0x30a40001  andi        $a0, $a1, 0x1
    ctx->pc = 0x49c200u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x49c204: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x49C204u;
    {
        const bool branch_taken_0x49c204 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x49C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C204u;
        // 0x49c208: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49c204) {
            ctx->pc = 0x49C230u;
            goto label_49c230;
        }
    }
    ctx->pc = 0x49C20Cu;
    // 0x49c20c: 0x8d04004c  lw          $a0, 0x4C($t0)
    ctx->pc = 0x49c20cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 76)));
    // 0x49c210: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x49c210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x49c214: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x49c214u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x49c218: 0x9482000c  lhu         $v0, 0xC($a0)
    ctx->pc = 0x49c218u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x49c21c: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x49c21cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
    // 0x49c220: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x49c220u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x49c224: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x49c224u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x49c228: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x49c228u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x49c22c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x49c22cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_49c230:
    // 0x49c230: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x49c230u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c234: 0x3e00008  jr          $ra
    ctx->pc = 0x49C234u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C234u;
        // 0x49c238: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C234u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C23Cu;
    // 0x49c23c: 0x0  nop
    ctx->pc = 0x49c23cu;
    // NOP
    // 0x49c240: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49c240u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x49c244: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x49c244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x49c248: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x49c248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x49c24c: 0x3c04004a  lui         $a0, 0x4A
    ctx->pc = 0x49c24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)74 << 16));
    // 0x49c250: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49c250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x49c254: 0x2484c8f8  addiu       $a0, $a0, -0x3708
    ctx->pc = 0x49c254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953208));
    // 0x49c258: 0xc12709c  jal         func_49C270
    ctx->pc = 0x49C258u;
    SET_GPR_U32(ctx, 31, 0x49C260u);
    ctx->pc = 0x49C25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x49C258u;
    // 0x49c25c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49C270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49C270u, 0x49C258u, 0x49C260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x49C260u;
label_49c260:
    // 0x49c260: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x49c260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x49c264: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49c264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x49c268: 0x3e00008  jr          $ra
    ctx->pc = 0x49C268u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49C26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x49C268u;
        // 0x49c26c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x49C268u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x49C270u;
}
