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

// Function: sub_00100FA0
// Address: 0x100fa0 - 0x101020
void sub_00100FA0_0x100fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100FA0_0x100fa0");
#endif

    switch (ctx->pc) {
        case 0x100fa0u: goto label_100fa0;
        case 0x100fa4u: goto label_100fa4;
        case 0x100fa8u: goto label_100fa8;
        case 0x100facu: goto label_100fac;
        case 0x100fb0u: goto label_100fb0;
        case 0x100fb4u: goto label_100fb4;
        case 0x100fb8u: goto label_100fb8;
        case 0x100fbcu: goto label_100fbc;
        case 0x100fc0u: goto label_100fc0;
        case 0x100fc4u: goto label_100fc4;
        case 0x100fc8u: goto label_100fc8;
        case 0x100fccu: goto label_100fcc;
        case 0x100fd0u: goto label_100fd0;
        case 0x100fd4u: goto label_100fd4;
        case 0x100fd8u: goto label_100fd8;
        case 0x100fdcu: goto label_100fdc;
        case 0x100fe0u: goto label_100fe0;
        case 0x100fe4u: goto label_100fe4;
        case 0x100fe8u: goto label_100fe8;
        case 0x100fecu: goto label_100fec;
        case 0x100ff0u: goto label_100ff0;
        case 0x100ff4u: goto label_100ff4;
        case 0x100ff8u: goto label_100ff8;
        case 0x100ffcu: goto label_100ffc;
        case 0x101000u: goto label_101000;
        case 0x101004u: goto label_101004;
        case 0x101008u: goto label_101008;
        case 0x10100cu: goto label_10100c;
        case 0x101010u: goto label_101010;
        case 0x101014u: goto label_101014;
        case 0x101018u: goto label_101018;
        case 0x10101cu: goto label_10101c;
        default: break;
    }

    ctx->pc = 0x100fa0u;

label_100fa0:
    // 0x100fa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x100fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_100fa4:
    // 0x100fa4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x100fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_100fa8:
    // 0x100fa8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x100fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_100fac:
    // 0x100fac: 0xc040414  jal         func_101050
label_100fb0:
    if (ctx->pc == 0x100FB0u) {
        ctx->pc = 0x100FB4u;
        goto label_100fb4;
    }
    ctx->pc = 0x100FACu;
    SET_GPR_U32(ctx, 31, 0x100FB4u);
    ctx->pc = 0x101050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101050u, 0x100FACu, 0x100FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FB4u;
label_100fb4:
    // 0x100fb4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_100fb8:
    // 0x100fb8: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x100fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100fbc:
    // 0x100fbc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100fbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100fc0:
    // 0x100fc0: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x100fc0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_100fc4:
    // 0x100fc4: 0x320f809  jalr        $t9
label_100fc8:
    if (ctx->pc == 0x100FC8u) {
        ctx->pc = 0x100FCCu;
        goto label_100fcc;
    }
    ctx->pc = 0x100FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100FCCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100FC4u, 0x100FCCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100FCCu;
label_100fcc:
    // 0x100fcc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x100fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_100fd0:
    // 0x100fd0: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x100fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_100fd4:
    // 0x100fd4: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_100fd8:
    if (ctx->pc == 0x100FD8u) {
        ctx->pc = 0x100FDCu;
        goto label_100fdc;
    }
    ctx->pc = 0x100FD4u;
    {
        const bool branch_taken_0x100fd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x100fd4) {
            ctx->pc = 0x101004u;
            goto label_101004;
        }
    }
    ctx->pc = 0x100FDCu;
label_100fdc:
    // 0x100fdc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_100fe0:
    // 0x100fe0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x100fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100fe4:
    // 0x100fe4: 0xc040408  jal         func_101020
label_100fe8:
    if (ctx->pc == 0x100FE8u) {
        ctx->pc = 0x100FECu;
        goto label_100fec;
    }
    ctx->pc = 0x100FE4u;
    SET_GPR_U32(ctx, 31, 0x100FECu);
    ctx->pc = 0x101020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101020u, 0x100FE4u, 0x100FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FECu;
label_100fec:
    // 0x100fec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x100fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_100ff0:
    // 0x100ff0: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x100ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100ff4:
    // 0x100ff4: 0xc119c5c  jal         func_467170
label_100ff8:
    if (ctx->pc == 0x100FF8u) {
        ctx->pc = 0x100FFCu;
        goto label_100ffc;
    }
    ctx->pc = 0x100FF4u;
    SET_GPR_U32(ctx, 31, 0x100FFCu);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x100FF4u, 0x100FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100FFCu;
label_100ffc:
    // 0x100ffc: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x100ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_101000:
    // 0x101000: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x101000u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_101004:
    // 0x101004: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101004u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_101008:
    // 0x101008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x101008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_10100c:
    // 0x10100c: 0x3e00008  jr          $ra
label_101010:
    if (ctx->pc == 0x101010u) {
        ctx->pc = 0x101014u;
        goto label_101014;
    }
    ctx->pc = 0x10100Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10100Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x101014u;
label_101014:
    // 0x101014: 0x0  nop
    ctx->pc = 0x101014u;
    // NOP
label_101018:
    // 0x101018: 0x0  nop
    ctx->pc = 0x101018u;
    // NOP
label_10101c:
    // 0x10101c: 0x0  nop
    ctx->pc = 0x10101cu;
    // NOP
    ctx->pc = 0x101020u;
}
