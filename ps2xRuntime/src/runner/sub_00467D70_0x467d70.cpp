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

// Function: sub_00467D70
// Address: 0x467d70 - 0x467e20
void sub_00467D70_0x467d70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00467D70_0x467d70");
#endif

    switch (ctx->pc) {
        case 0x467d8cu: goto label_467d8c;
        case 0x467decu: goto label_467dec;
        default: break;
    }

    ctx->pc = 0x467d70u;

    // 0x467d70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x467d70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x467d74: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x467d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x467d78: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x467d78u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x467d7c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x467d7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x467d80: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x467d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d84: 0xc119f88  jal         func_467E20
    ctx->pc = 0x467D84u;
    SET_GPR_U32(ctx, 31, 0x467D8Cu);
    ctx->pc = 0x467E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467E20u, 0x467D84u, 0x467D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467D8Cu;
label_467d8c:
    // 0x467d8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x467d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467d90: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467d94: 0xac430020  sw          $v1, 0x20($v0)
    ctx->pc = 0x467d94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 3));
    // 0x467d98: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x467d98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467d9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467da0: 0xac430024  sw          $v1, 0x24($v0)
    ctx->pc = 0x467da0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 3));
    // 0x467da4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x467da4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467da8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x467da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x467dac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x467dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x467db0: 0x6443000f  daddiu      $v1, $v0, 0xF
    ctx->pc = 0x467db0u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)15);
    // 0x467db4: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x467db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x467db8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x467db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x467dbc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x467dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
    // 0x467dc0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x467dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x467dc4: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x467dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x467dc8: 0x3183f  dsra32      $v1, $v1, 0
    ctx->pc = 0x467dc8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 0));
    // 0x467dcc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467dd0: 0xac430014  sw          $v1, 0x14($v0)
    ctx->pc = 0x467dd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 3));
    // 0x467dd4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x467dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467dd8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467ddc: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x467ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x467de0: 0x8c450014  lw          $a1, 0x14($v0)
    ctx->pc = 0x467de0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x467de4: 0xc119d08  jal         func_467420
    ctx->pc = 0x467DE4u;
    SET_GPR_U32(ctx, 31, 0x467DECu);
    ctx->pc = 0x467420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467420u, 0x467DE4u, 0x467DECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x467DECu;
label_467dec:
    // 0x467dec: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x467decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467df0: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x467df0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x467df4: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x467df4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x467df8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467dfc: 0xac43001c  sw          $v1, 0x1C($v0)
    ctx->pc = 0x467dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 3));
    // 0x467e00: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x467e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x467e04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x467e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x467e08: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x467e08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x467e0c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x467e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x467e10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x467e10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x467e14: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x467e14u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x467e18: 0x3e00008  jr          $ra
    ctx->pc = 0x467E18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x467E18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x467E20u;
}
