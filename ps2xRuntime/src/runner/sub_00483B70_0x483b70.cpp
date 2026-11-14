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

// Function: sub_00483B70
// Address: 0x483b70 - 0x483c80
void sub_00483B70_0x483b70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00483B70_0x483b70");
#endif

    switch (ctx->pc) {
        case 0x483ba4u: goto label_483ba4;
        case 0x483bb8u: goto label_483bb8;
        case 0x483bdcu: goto label_483bdc;
        case 0x483bf8u: goto label_483bf8;
        case 0x483c10u: goto label_483c10;
        case 0x483c38u: goto label_483c38;
        case 0x483c48u: goto label_483c48;
        case 0x483c64u: goto label_483c64;
        default: break;
    }

    ctx->pc = 0x483b70u;

    // 0x483b70: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x483b70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x483b74: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x483b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x483b78: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x483b78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x483b7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x483b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x483b80: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x483b80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x483b84: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x483b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x483b88: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x483b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x483b8c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x483b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x483b90: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x483b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x483b94: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x483b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x483b98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x483b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483b9c: 0xc120f88  jal         func_483E20
    ctx->pc = 0x483B9Cu;
    SET_GPR_U32(ctx, 31, 0x483BA4u);
    ctx->pc = 0x483E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483E20u, 0x483B9Cu, 0x483BA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483BA4u;
label_483ba4:
    // 0x483ba4: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x483ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x483ba8: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x483ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x483bac: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x483bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x483bb0: 0xc041954  jal         func_106550
    ctx->pc = 0x483BB0u;
    SET_GPR_U32(ctx, 31, 0x483BB8u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x483BB0u, 0x483BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483BB8u;
label_483bb8:
    // 0x483bb8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x483bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x483bbc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x483bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x483bc0: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x483bc0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x483bc4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x483bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483bc8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x483bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x483bcc: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x483bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483bd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x483bd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483bd4: 0xc120f70  jal         func_483DC0
    ctx->pc = 0x483BD4u;
    SET_GPR_U32(ctx, 31, 0x483BDCu);
    ctx->pc = 0x483DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483DC0u, 0x483BD4u, 0x483BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483BDCu;
label_483bdc:
    // 0x483bdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x483bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483be0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x483be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483be4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x483be4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x483be8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x483be8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x483bec: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x483becu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483bf0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x483BF0u;
    SET_GPR_U32(ctx, 31, 0x483BF8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x483BF0u, 0x483BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483BF8u;
label_483bf8:
    // 0x483bf8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483bf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483bfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x483bfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c00: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x483c00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x483c04: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x483c04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x483c08: 0xc120f54  jal         func_483D50
    ctx->pc = 0x483C08u;
    SET_GPR_U32(ctx, 31, 0x483C10u);
    ctx->pc = 0x483D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483D50u, 0x483C08u, 0x483C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483C10u;
label_483c10:
    // 0x483c10: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483c10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c14: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x483c14u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x483c18: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x483C18u;
    {
        const bool branch_taken_0x483c18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x483c18) {
            ctx->pc = 0x483C3Cu;
            goto label_483c3c;
        }
    }
    ctx->pc = 0x483C20u;
    // 0x483c20: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x483c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483c24: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x483c24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x483c28: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x483c28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x483c2c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x483c2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c30: 0xc041934  jal         func_1064D0
    ctx->pc = 0x483C30u;
    SET_GPR_U32(ctx, 31, 0x483C38u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x483C30u, 0x483C38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483C38u;
label_483c38:
    // 0x483c38: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x483c38u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_483c3c:
    // 0x483c3c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x483c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483c40: 0xc120f34  jal         func_483CD0
    ctx->pc = 0x483C40u;
    SET_GPR_U32(ctx, 31, 0x483C48u);
    ctx->pc = 0x483CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483CD0u, 0x483C40u, 0x483C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483C48u;
label_483c48:
    // 0x483c48: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x483c48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x483c4c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x483c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x483c50: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x483c50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x483c54: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x483c54u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c58: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x483c58u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x483c5c: 0xc120f20  jal         func_483C80
    ctx->pc = 0x483C5Cu;
    SET_GPR_U32(ctx, 31, 0x483C64u);
    ctx->pc = 0x483C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x483C80u, 0x483C5Cu, 0x483C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x483C64u;
label_483c64:
    // 0x483c64: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x483c64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x483c68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x483c68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x483c6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x483c6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x483c70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x483c70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x483c74: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x483c74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x483c78: 0x3e00008  jr          $ra
    ctx->pc = 0x483C78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x483C78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x483C80u;
}
