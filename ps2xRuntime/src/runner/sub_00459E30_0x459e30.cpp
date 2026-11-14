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

// Function: sub_00459E30
// Address: 0x459e30 - 0x459f40
void sub_00459E30_0x459e30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00459E30_0x459e30");
#endif

    switch (ctx->pc) {
        case 0x459e64u: goto label_459e64;
        case 0x459e78u: goto label_459e78;
        case 0x459e9cu: goto label_459e9c;
        case 0x459eb8u: goto label_459eb8;
        case 0x459ed0u: goto label_459ed0;
        case 0x459ef8u: goto label_459ef8;
        case 0x459f08u: goto label_459f08;
        case 0x459f24u: goto label_459f24;
        default: break;
    }

    ctx->pc = 0x459e30u;

    // 0x459e30: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x459e30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x459e34: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x459e34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x459e38: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x459e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x459e3c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x459e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x459e40: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x459e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x459e44: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x459e44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x459e48: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x459e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x459e4c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x459e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x459e50: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x459e50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x459e54: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x459e54u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x459e58: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x459e58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x459e5c: 0xc116744  jal         func_459D10
    ctx->pc = 0x459E5Cu;
    SET_GPR_U32(ctx, 31, 0x459E64u);
    ctx->pc = 0x459D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459D10u, 0x459E5Cu, 0x459E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459E64u;
label_459e64:
    // 0x459e64: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x459e64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x459e68: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x459e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x459e6c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x459e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x459e70: 0xc041954  jal         func_106550
    ctx->pc = 0x459E70u;
    SET_GPR_U32(ctx, 31, 0x459E78u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x459E70u, 0x459E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459E78u;
label_459e78:
    // 0x459e78: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x459e78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x459e7c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x459e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x459e80: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x459e80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x459e84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x459e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x459e88: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x459e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x459e8c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x459e8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459e90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x459e90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459e94: 0xc116c04  jal         func_45B010
    ctx->pc = 0x459E94u;
    SET_GPR_U32(ctx, 31, 0x459E9Cu);
    ctx->pc = 0x45B010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45B010u, 0x459E94u, 0x459E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459E9Cu;
label_459e9c:
    // 0x459e9c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x459e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459ea0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x459ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x459ea4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x459ea4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x459ea8: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x459ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x459eac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x459eacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459eb0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x459EB0u;
    SET_GPR_U32(ctx, 31, 0x459EB8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x459EB0u, 0x459EB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459EB8u;
label_459eb8:
    // 0x459eb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x459eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459ebc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x459ebcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459ec0: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x459ec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x459ec4: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x459ec4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x459ec8: 0xc116804  jal         func_45A010
    ctx->pc = 0x459EC8u;
    SET_GPR_U32(ctx, 31, 0x459ED0u);
    ctx->pc = 0x45A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45A010u, 0x459EC8u, 0x459ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459ED0u;
label_459ed0:
    // 0x459ed0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x459ed0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459ed4: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x459ed4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x459ed8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x459ED8u;
    {
        const bool branch_taken_0x459ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x459ed8) {
            ctx->pc = 0x459EFCu;
            goto label_459efc;
        }
    }
    ctx->pc = 0x459EE0u;
    // 0x459ee0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x459ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x459ee4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x459ee4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x459ee8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x459ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x459eec: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x459eecu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459ef0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x459EF0u;
    SET_GPR_U32(ctx, 31, 0x459EF8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x459EF0u, 0x459EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459EF8u;
label_459ef8:
    // 0x459ef8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x459ef8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_459efc:
    // 0x459efc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x459efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x459f00: 0xc1167e4  jal         func_459F90
    ctx->pc = 0x459F00u;
    SET_GPR_U32(ctx, 31, 0x459F08u);
    ctx->pc = 0x459F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459F90u, 0x459F00u, 0x459F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459F08u;
label_459f08:
    // 0x459f08: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x459f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x459f0c: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x459f0cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x459f10: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x459f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x459f14: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x459f14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459f18: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x459f18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x459f1c: 0xc1167d0  jal         func_459F40
    ctx->pc = 0x459F1Cu;
    SET_GPR_U32(ctx, 31, 0x459F24u);
    ctx->pc = 0x459F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459F40u, 0x459F1Cu, 0x459F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x459F24u;
label_459f24:
    // 0x459f24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x459f24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x459f28: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x459f28u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x459f2c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x459f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x459f30: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x459f30u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x459f34: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x459f34u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x459f38: 0x3e00008  jr          $ra
    ctx->pc = 0x459F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x459F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x459F40u;
}
