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

// Function: sub_00101BE0
// Address: 0x101be0 - 0x101c70
void sub_00101BE0_0x101be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101BE0_0x101be0");
#endif

    switch (ctx->pc) {
        case 0x101bfcu: goto label_101bfc;
        case 0x101c10u: goto label_101c10;
        case 0x101c1cu: goto label_101c1c;
        case 0x101c28u: goto label_101c28;
        case 0x101c48u: goto label_101c48;
        default: break;
    }

    ctx->pc = 0x101be0u;

    // 0x101be0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x101be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x101be4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x101be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x101be8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x101be8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x101bec: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101becu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101bf0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x101bf0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x101bf4: 0xc05548c  jal         func_155230
    ctx->pc = 0x101BF4u;
    SET_GPR_U32(ctx, 31, 0x101BFCu);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x101BF4u, 0x101BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101BFCu;
label_101bfc:
    // 0x101bfc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x101bfcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x101c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c04: 0x2405001d  addiu       $a1, $zero, 0x1D
    ctx->pc = 0x101c04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x101c08: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x101C08u;
    SET_GPR_U32(ctx, 31, 0x101C10u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x101C08u, 0x101C10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C10u;
label_101c10:
    // 0x101c10: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x101c10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c14: 0xc08ef50  jal         func_23BD40
    ctx->pc = 0x101C14u;
    SET_GPR_U32(ctx, 31, 0x101C1Cu);
    ctx->pc = 0x23BD40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BD40u, 0x101C14u, 0x101C1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C1Cu;
label_101c1c:
    // 0x101c1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x101c1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c20: 0xc0406f0  jal         func_101BC0
    ctx->pc = 0x101C20u;
    SET_GPR_U32(ctx, 31, 0x101C28u);
    ctx->pc = 0x101BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101BC0u, 0x101C20u, 0x101C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C28u;
label_101c28:
    // 0x101c28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x101c28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101c2c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x101c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x101c30: 0x16030005  bne         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x101C30u;
    {
        const bool branch_taken_0x101c30 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        if (branch_taken_0x101c30) {
            ctx->pc = 0x101C48u;
            goto label_101c48;
        }
    }
    ctx->pc = 0x101C38u;
    // 0x101c38: 0x8f84ba64  lw          $a0, -0x459C($gp)
    ctx->pc = 0x101c38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949476)));
    // 0x101c3c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x101c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x101c40: 0xc04c5fc  jal         func_1317F0
    ctx->pc = 0x101C40u;
    SET_GPR_U32(ctx, 31, 0x101C48u);
    ctx->pc = 0x1317F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1317F0u, 0x101C40u, 0x101C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x101C48u;
label_101c48:
    // 0x101c48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x101c48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x101c4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x101c4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x101c50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x101c50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101c54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x101c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101c58: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x101c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x101c5c: 0x3e00008  jr          $ra
    ctx->pc = 0x101C5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101C5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101C64u;
    // 0x101c64: 0x0  nop
    ctx->pc = 0x101c64u;
    // NOP
    // 0x101c68: 0x0  nop
    ctx->pc = 0x101c68u;
    // NOP
    // 0x101c6c: 0x0  nop
    ctx->pc = 0x101c6cu;
    // NOP
    ctx->pc = 0x101c70u;
}
