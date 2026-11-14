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

// Function: sub_00499190
// Address: 0x499190 - 0x499208
void sub_00499190_0x499190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499190_0x499190");
#endif

    switch (ctx->pc) {
        case 0x499190u: goto label_499190;
        case 0x499194u: goto label_499194;
        case 0x499198u: goto label_499198;
        case 0x49919cu: goto label_49919c;
        case 0x4991a0u: goto label_4991a0;
        case 0x4991a4u: goto label_4991a4;
        case 0x4991a8u: goto label_4991a8;
        case 0x4991acu: goto label_4991ac;
        case 0x4991b0u: goto label_4991b0;
        case 0x4991b4u: goto label_4991b4;
        case 0x4991b8u: goto label_4991b8;
        case 0x4991bcu: goto label_4991bc;
        case 0x4991c0u: goto label_4991c0;
        case 0x4991c4u: goto label_4991c4;
        case 0x4991c8u: goto label_4991c8;
        case 0x4991ccu: goto label_4991cc;
        case 0x4991d0u: goto label_4991d0;
        case 0x4991d4u: goto label_4991d4;
        case 0x4991d8u: goto label_4991d8;
        case 0x4991dcu: goto label_4991dc;
        case 0x4991e0u: goto label_4991e0;
        case 0x4991e4u: goto label_4991e4;
        case 0x4991e8u: goto label_4991e8;
        case 0x4991ecu: goto label_4991ec;
        case 0x4991f0u: goto label_4991f0;
        case 0x4991f4u: goto label_4991f4;
        case 0x4991f8u: goto label_4991f8;
        case 0x4991fcu: goto label_4991fc;
        case 0x499200u: goto label_499200;
        case 0x499204u: goto label_499204;
        default: break;
    }

    ctx->pc = 0x499190u;

label_499190:
    // 0x499190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x499190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_499194:
    // 0x499194: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x499194u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_499198:
    // 0x499198: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x499198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_49919c:
    // 0x49919c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49919cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4991a0:
    // 0x4991a0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4991a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4991a4:
    // 0x4991a4: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x4991a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_4991a8:
    // 0x4991a8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x4991a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_4991ac:
    // 0x4991ac: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4991acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_4991b0:
    // 0x4991b0: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x4991b0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_4991b4:
    // 0x4991b4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x4991b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_4991b8:
    // 0x4991b8: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x4991b8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4991bc:
    // 0x4991bc: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x4991bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_4991c0:
    // 0x4991c0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x4991c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_4991c4:
    // 0x4991c4: 0x40f809  jalr        $v0
label_4991c8:
    if (ctx->pc == 0x4991C8u) {
        ctx->pc = 0x4991C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991C4u;
        // 0x4991c8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4991CCu;
        goto label_4991cc;
    }
    ctx->pc = 0x4991C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4991CCu);
        ctx->pc = 0x4991C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991C4u;
        // 0x4991c8: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4991C4u, 0x4991CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4991CCu;
label_4991cc:
    // 0x4991cc: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x4991ccu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 0));
label_4991d0:
    // 0x4991d0: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_4991d4:
    if (ctx->pc == 0x4991D4u) {
        ctx->pc = 0x4991D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991D0u;
        // 0x4991d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4991D8u;
        goto label_4991d8;
    }
    ctx->pc = 0x4991D0u;
    {
        const bool branch_taken_0x4991d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4991D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991D0u;
        // 0x4991d4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4991d0) {
            ctx->pc = 0x4991ECu;
            goto label_4991ec;
        }
    }
    ctx->pc = 0x4991D8u;
label_4991d8:
    // 0x4991d8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4991dc:
    if (ctx->pc == 0x4991DCu) {
        ctx->pc = 0x4991DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991D8u;
        // 0x4991dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4991E0u;
        goto label_4991e0;
    }
    ctx->pc = 0x4991D8u;
    {
        const bool branch_taken_0x4991d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4991DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991D8u;
        // 0x4991dc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4991d8) {
            ctx->pc = 0x4991E8u;
            goto label_4991e8;
        }
    }
    ctx->pc = 0x4991E0u;
label_4991e0:
    // 0x4991e0: 0x10000002  b           . + 4 + (0x2 << 2)
label_4991e4:
    if (ctx->pc == 0x4991E4u) {
        ctx->pc = 0x4991E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991E0u;
        // 0x4991e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4991E8u;
        goto label_4991e8;
    }
    ctx->pc = 0x4991E0u;
    {
        const bool branch_taken_0x4991e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4991E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991E0u;
        // 0x4991e4: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4991e0) {
            ctx->pc = 0x4991ECu;
            goto label_4991ec;
        }
    }
    ctx->pc = 0x4991E8u;
label_4991e8:
    // 0x4991e8: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x4991e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_4991ec:
    // 0x4991ec: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4991ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_4991f0:
    // 0x4991f0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4991f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4991f4:
    // 0x4991f4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4991f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4991f8:
    // 0x4991f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4991f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4991fc:
    // 0x4991fc: 0x3e00008  jr          $ra
label_499200:
    if (ctx->pc == 0x499200u) {
        ctx->pc = 0x499200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991FCu;
        // 0x499200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x499204u;
        goto label_499204;
    }
    ctx->pc = 0x4991FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4991FCu;
        // 0x499200: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4991FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x499204u;
label_499204:
    // 0x499204: 0x0  nop
    ctx->pc = 0x499204u;
    // NOP
    ctx->pc = 0x499208u;
}
