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

// Function: sub_001C4DF0
// Address: 0x1c4df0 - 0x1c4f00
void sub_001C4DF0_0x1c4df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C4DF0_0x1c4df0");
#endif

    switch (ctx->pc) {
        case 0x1c4e24u: goto label_1c4e24;
        case 0x1c4e38u: goto label_1c4e38;
        case 0x1c4e5cu: goto label_1c4e5c;
        case 0x1c4e78u: goto label_1c4e78;
        case 0x1c4e90u: goto label_1c4e90;
        case 0x1c4eb8u: goto label_1c4eb8;
        case 0x1c4ec8u: goto label_1c4ec8;
        case 0x1c4ee4u: goto label_1c4ee4;
        default: break;
    }

    ctx->pc = 0x1c4df0u;

    // 0x1c4df0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x1c4df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x1c4df4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1c4df4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1c4df8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1c4df8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1c4dfc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1c4dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1c4e00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1c4e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1c4e04: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1c4e04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1c4e08: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1c4e08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1c4e0c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1c4e0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1c4e10: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x1c4e10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x1c4e14: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x1c4e14u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x1c4e18: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4e18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4e1c: 0xc06f98c  jal         func_1BE630
    ctx->pc = 0x1C4E1Cu;
    SET_GPR_U32(ctx, 31, 0x1C4E24u);
    ctx->pc = 0x1BE630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE630u, 0x1C4E1Cu, 0x1C4E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E24u;
label_1c4e24:
    // 0x1c4e24: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1c4e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1c4e28: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x1c4e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1c4e2c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x1c4e2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x1c4e30: 0xc041954  jal         func_106550
    ctx->pc = 0x1C4E30u;
    SET_GPR_U32(ctx, 31, 0x1C4E38u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x1C4E30u, 0x1C4E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E38u;
label_1c4e38:
    // 0x1c4e38: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x1c4e38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x1c4e3c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c4e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4e40: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x1c4e40u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c4e44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4e44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4e48: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1c4e48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1c4e4c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1c4e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c4e50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e54: 0xc0713f4  jal         func_1C4FD0
    ctx->pc = 0x1C4E54u;
    SET_GPR_U32(ctx, 31, 0x1C4E5Cu);
    ctx->pc = 0x1C4FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4FD0u, 0x1C4E54u, 0x1C4E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E5Cu;
label_1c4e5c:
    // 0x1c4e5c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1c4e5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e60: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4e64: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c4e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c4e68: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x1c4e68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4e6c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1c4e6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e70: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1C4E70u;
    SET_GPR_U32(ctx, 31, 0x1C4E78u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1C4E70u, 0x1C4E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E78u;
label_1c4e78:
    // 0x1c4e78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4e78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c4e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e80: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x1c4e80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x1c4e84: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x1c4e84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1c4e88: 0xc0561e8  jal         func_1587A0
    ctx->pc = 0x1C4E88u;
    SET_GPR_U32(ctx, 31, 0x1C4E90u);
    ctx->pc = 0x1587A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1587A0u, 0x1C4E88u, 0x1C4E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4E90u;
label_1c4e90:
    // 0x1c4e90: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4e90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4e94: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x1c4e94u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1c4e98: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x1C4E98u;
    {
        const bool branch_taken_0x1c4e98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c4e98) {
            ctx->pc = 0x1C4EBCu;
            goto label_1c4ebc;
        }
    }
    ctx->pc = 0x1C4EA0u;
    // 0x1c4ea0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1c4ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4ea4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1c4ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1c4ea8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1c4ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1c4eac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4eb0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x1C4EB0u;
    SET_GPR_U32(ctx, 31, 0x1C4EB8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x1C4EB0u, 0x1C4EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EB8u;
label_1c4eb8:
    // 0x1c4eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c4eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c4ebc:
    // 0x1c4ebc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4ec0: 0xc0713d4  jal         func_1C4F50
    ctx->pc = 0x1C4EC0u;
    SET_GPR_U32(ctx, 31, 0x1C4EC8u);
    ctx->pc = 0x1C4F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F50u, 0x1C4EC0u, 0x1C4EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EC8u;
label_1c4ec8:
    // 0x1c4ec8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x1c4ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x1c4ecc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x1c4eccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x1c4ed0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1c4ed0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1c4ed4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1c4ed4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4ed8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1c4ed8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1c4edc: 0xc0713c0  jal         func_1C4F00
    ctx->pc = 0x1C4EDCu;
    SET_GPR_U32(ctx, 31, 0x1C4EE4u);
    ctx->pc = 0x1C4F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C4F00u, 0x1C4EDCu, 0x1C4EE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C4EE4u;
label_1c4ee4:
    // 0x1c4ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1c4ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1c4ee8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1c4ee8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c4eec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1c4eecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c4ef0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1c4ef0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c4ef4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x1c4ef4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x1c4ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x1C4EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C4EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C4F00u;
}
