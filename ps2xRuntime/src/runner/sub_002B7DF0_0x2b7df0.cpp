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

// Function: sub_002B7DF0
// Address: 0x2b7df0 - 0x2b7f00
void sub_002B7DF0_0x2b7df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B7DF0_0x2b7df0");
#endif

    switch (ctx->pc) {
        case 0x2b7e24u: goto label_2b7e24;
        case 0x2b7e38u: goto label_2b7e38;
        case 0x2b7e5cu: goto label_2b7e5c;
        case 0x2b7e78u: goto label_2b7e78;
        case 0x2b7e90u: goto label_2b7e90;
        case 0x2b7eb8u: goto label_2b7eb8;
        case 0x2b7ec8u: goto label_2b7ec8;
        case 0x2b7ee4u: goto label_2b7ee4;
        default: break;
    }

    ctx->pc = 0x2b7df0u;

    // 0x2b7df0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2b7df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2b7df4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2b7df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2b7df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2b7df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2b7dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b7dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b7e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b7e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b7e04: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2b7e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2b7e08: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2b7e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2b7e0c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2b7e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2b7e10: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2b7e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2b7e14: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2b7e14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2b7e18: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b7e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7e1c: 0xc0ae010  jal         func_2B8040
    ctx->pc = 0x2B7E1Cu;
    SET_GPR_U32(ctx, 31, 0x2B7E24u);
    ctx->pc = 0x2B8040u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8040u, 0x2B7E1Cu, 0x2B7E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E24u;
label_2b7e24:
    // 0x2b7e24: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2b7e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2b7e28: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2b7e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2b7e2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2b7e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2b7e30: 0xc041954  jal         func_106550
    ctx->pc = 0x2B7E30u;
    SET_GPR_U32(ctx, 31, 0x2B7E38u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2B7E30u, 0x2B7E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E38u;
label_2b7e38:
    // 0x2b7e38: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2b7e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2b7e3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b7e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7e40: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2b7e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b7e44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b7e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7e48: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2b7e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2b7e4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2b7e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2b7e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e54: 0xc0ae198  jal         func_2B8660
    ctx->pc = 0x2B7E54u;
    SET_GPR_U32(ctx, 31, 0x2B7E5Cu);
    ctx->pc = 0x2B8660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8660u, 0x2B7E54u, 0x2B7E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E5Cu;
label_2b7e5c:
    // 0x2b7e5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b7e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b7e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7e64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2b7e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b7e68: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2b7e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7e6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2b7e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e70: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2B7E70u;
    SET_GPR_U32(ctx, 31, 0x2B7E78u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2B7E70u, 0x2B7E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E78u;
label_2b7e78:
    // 0x2b7e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2b7e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e80: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2b7e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2b7e84: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2b7e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2b7e88: 0xc0adff4  jal         func_2B7FD0
    ctx->pc = 0x2B7E88u;
    SET_GPR_U32(ctx, 31, 0x2B7E90u);
    ctx->pc = 0x2B7FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7FD0u, 0x2B7E88u, 0x2B7E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7E90u;
label_2b7e90:
    // 0x2b7e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7e94: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2b7e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2b7e98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2B7E98u;
    {
        const bool branch_taken_0x2b7e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b7e98) {
            ctx->pc = 0x2B7EBCu;
            goto label_2b7ebc;
        }
    }
    ctx->pc = 0x2B7EA0u;
    // 0x2b7ea0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2b7ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7ea4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2b7ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2b7ea8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2b7ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2b7eac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b7eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7eb0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2B7EB0u;
    SET_GPR_U32(ctx, 31, 0x2B7EB8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2B7EB0u, 0x2B7EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EB8u;
label_2b7eb8:
    // 0x2b7eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b7eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b7ebc:
    // 0x2b7ebc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b7ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7ec0: 0xc0adfd4  jal         func_2B7F50
    ctx->pc = 0x2B7EC0u;
    SET_GPR_U32(ctx, 31, 0x2B7EC8u);
    ctx->pc = 0x2B7F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7F50u, 0x2B7EC0u, 0x2B7EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EC8u;
label_2b7ec8:
    // 0x2b7ec8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2b7ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2b7ecc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2b7eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2b7ed0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2b7ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2b7ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b7ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2b7ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b7edc: 0xc0adfc0  jal         func_2B7F00
    ctx->pc = 0x2B7EDCu;
    SET_GPR_U32(ctx, 31, 0x2B7EE4u);
    ctx->pc = 0x2B7F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B7F00u, 0x2B7EDCu, 0x2B7EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B7EE4u;
label_2b7ee4:
    // 0x2b7ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2b7ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2b7ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2b7ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b7eec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b7eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b7ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b7ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b7ef4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2b7ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2b7ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x2B7EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B7EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B7F00u;
}
