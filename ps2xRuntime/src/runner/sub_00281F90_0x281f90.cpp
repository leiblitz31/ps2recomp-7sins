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

// Function: sub_00281F90
// Address: 0x281f90 - 0x282040
void sub_00281F90_0x281f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281F90_0x281f90");
#endif

    switch (ctx->pc) {
        case 0x281f90u: goto label_281f90;
        case 0x281f94u: goto label_281f94;
        case 0x281f98u: goto label_281f98;
        case 0x281f9cu: goto label_281f9c;
        case 0x281fa0u: goto label_281fa0;
        case 0x281fa4u: goto label_281fa4;
        case 0x281fa8u: goto label_281fa8;
        case 0x281facu: goto label_281fac;
        case 0x281fb0u: goto label_281fb0;
        case 0x281fb4u: goto label_281fb4;
        case 0x281fb8u: goto label_281fb8;
        case 0x281fbcu: goto label_281fbc;
        case 0x281fc0u: goto label_281fc0;
        case 0x281fc4u: goto label_281fc4;
        case 0x281fc8u: goto label_281fc8;
        case 0x281fccu: goto label_281fcc;
        case 0x281fd0u: goto label_281fd0;
        case 0x281fd4u: goto label_281fd4;
        case 0x281fd8u: goto label_281fd8;
        case 0x281fdcu: goto label_281fdc;
        case 0x281fe0u: goto label_281fe0;
        case 0x281fe4u: goto label_281fe4;
        case 0x281fe8u: goto label_281fe8;
        case 0x281fecu: goto label_281fec;
        case 0x281ff0u: goto label_281ff0;
        case 0x281ff4u: goto label_281ff4;
        case 0x281ff8u: goto label_281ff8;
        case 0x281ffcu: goto label_281ffc;
        case 0x282000u: goto label_282000;
        case 0x282004u: goto label_282004;
        case 0x282008u: goto label_282008;
        case 0x28200cu: goto label_28200c;
        case 0x282010u: goto label_282010;
        case 0x282014u: goto label_282014;
        case 0x282018u: goto label_282018;
        case 0x28201cu: goto label_28201c;
        case 0x282020u: goto label_282020;
        case 0x282024u: goto label_282024;
        case 0x282028u: goto label_282028;
        case 0x28202cu: goto label_28202c;
        case 0x282030u: goto label_282030;
        case 0x282034u: goto label_282034;
        case 0x282038u: goto label_282038;
        case 0x28203cu: goto label_28203c;
        default: break;
    }

    ctx->pc = 0x281f90u;

label_281f90:
    // 0x281f90: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x281f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_281f94:
    // 0x281f94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x281f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_281f98:
    // 0x281f98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281f98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_281f9c:
    // 0x281f9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x281f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_281fa0:
    // 0x281fa0: 0xafa50040  sw          $a1, 0x40($sp)
    ctx->pc = 0x281fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 5));
label_281fa4:
    // 0x281fa4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x281fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_281fa8:
    // 0x281fa8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_281fac:
    if (ctx->pc == 0x281FACu) {
        ctx->pc = 0x281FB0u;
        goto label_281fb0;
    }
    ctx->pc = 0x281FA8u;
    {
        const bool branch_taken_0x281fa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x281fa8) {
            ctx->pc = 0x281FB8u;
            goto label_281fb8;
        }
    }
    ctx->pc = 0x281FB0u;
label_281fb0:
    // 0x281fb0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281fb4:
    // 0x281fb4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x281fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_281fb8:
    // 0x281fb8: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x281fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_281fbc:
    // 0x281fbc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x281fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_281fc0:
    // 0x281fc0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x281fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_281fc4:
    // 0x281fc4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x281fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_281fc8:
    // 0x281fc8: 0xc119b68  jal         func_466DA0
label_281fcc:
    if (ctx->pc == 0x281FCCu) {
        ctx->pc = 0x281FD0u;
        goto label_281fd0;
    }
    ctx->pc = 0x281FC8u;
    SET_GPR_U32(ctx, 31, 0x281FD0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x281FC8u, 0x281FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281FD0u;
label_281fd0:
    // 0x281fd0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x281fd0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281fd4:
    // 0x281fd4: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_281fd8:
    if (ctx->pc == 0x281FD8u) {
        ctx->pc = 0x281FDCu;
        goto label_281fdc;
    }
    ctx->pc = 0x281FD4u;
    {
        const bool branch_taken_0x281fd4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x281fd4) {
            ctx->pc = 0x281FE8u;
            goto label_281fe8;
        }
    }
    ctx->pc = 0x281FDCu;
label_281fdc:
    // 0x281fdc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x281fdcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_281fe0:
    // 0x281fe0: 0x1000000e  b           . + 4 + (0xE << 2)
label_281fe4:
    if (ctx->pc == 0x281FE4u) {
        ctx->pc = 0x281FE8u;
        goto label_281fe8;
    }
    ctx->pc = 0x281FE0u;
    {
        const bool branch_taken_0x281fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x281fe0) {
            ctx->pc = 0x28201Cu;
            goto label_28201c;
        }
    }
    ctx->pc = 0x281FE8u;
label_281fe8:
    // 0x281fe8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x281fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_281fec:
    // 0x281fec: 0xc0ba088  jal         func_2E8220
label_281ff0:
    if (ctx->pc == 0x281FF0u) {
        ctx->pc = 0x281FF4u;
        goto label_281ff4;
    }
    ctx->pc = 0x281FECu;
    SET_GPR_U32(ctx, 31, 0x281FF4u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x281FECu, 0x281FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x281FF4u;
label_281ff4:
    // 0x281ff4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x281ff4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_281ff8:
    // 0x281ff8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x281ff8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_281ffc:
    // 0x281ffc: 0xc0ba088  jal         func_2E8220
label_282000:
    if (ctx->pc == 0x282000u) {
        ctx->pc = 0x282004u;
        goto label_282004;
    }
    ctx->pc = 0x281FFCu;
    SET_GPR_U32(ctx, 31, 0x282004u);
    ctx->pc = 0x2E8220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8220u, 0x281FFCu, 0x282004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x282004u;
label_282004:
    // 0x282004: 0x1200ffec  beqz        $s0, . + 4 + (-0x14 << 2)
label_282008:
    if (ctx->pc == 0x282008u) {
        ctx->pc = 0x28200Cu;
        goto label_28200c;
    }
    ctx->pc = 0x282004u;
    {
        const bool branch_taken_0x282004 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x282004) {
            ctx->pc = 0x281FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281fb8;
        }
    }
    ctx->pc = 0x28200Cu;
label_28200c:
    // 0x28200c: 0x200f809  jalr        $s0
label_282010:
    if (ctx->pc == 0x282010u) {
        ctx->pc = 0x282014u;
        goto label_282014;
    }
    ctx->pc = 0x28200Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x282014u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28200Cu, 0x282014u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x282014u;
label_282014:
    // 0x282014: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
label_282018:
    if (ctx->pc == 0x282018u) {
        ctx->pc = 0x28201Cu;
        goto label_28201c;
    }
    ctx->pc = 0x282014u;
    {
        const bool branch_taken_0x282014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x282014) {
            ctx->pc = 0x281FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_281fb8;
        }
    }
    ctx->pc = 0x28201Cu;
label_28201c:
    // 0x28201c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28201cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_282020:
    // 0x282020: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x282020u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_282024:
    // 0x282024: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x282024u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_282028:
    // 0x282028: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x282028u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_28202c:
    // 0x28202c: 0x3e00008  jr          $ra
label_282030:
    if (ctx->pc == 0x282030u) {
        ctx->pc = 0x282034u;
        goto label_282034;
    }
    ctx->pc = 0x28202Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28202Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x282034u;
label_282034:
    // 0x282034: 0x0  nop
    ctx->pc = 0x282034u;
    // NOP
label_282038:
    // 0x282038: 0x0  nop
    ctx->pc = 0x282038u;
    // NOP
label_28203c:
    // 0x28203c: 0x0  nop
    ctx->pc = 0x28203cu;
    // NOP
    ctx->pc = 0x282040u;
}
