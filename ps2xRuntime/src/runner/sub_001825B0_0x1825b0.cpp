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

// Function: sub_001825B0
// Address: 0x1825b0 - 0x182650
void sub_001825B0_0x1825b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001825B0_0x1825b0");
#endif

    switch (ctx->pc) {
        case 0x1825ecu: goto label_1825ec;
        case 0x182604u: goto label_182604;
        default: break;
    }

    ctx->pc = 0x1825b0u;

    // 0x1825b0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1825b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1825b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1825b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1825b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1825b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1825bc: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x1825bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1825c0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1825c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1825c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1825c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1825c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1825cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1825ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825d0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1825d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1825d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1825d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825d8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1825d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1825dc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1825dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1825e0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1825e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825e4: 0xc056288  jal         func_158A20
    ctx->pc = 0x1825E4u;
    SET_GPR_U32(ctx, 31, 0x1825ECu);
    ctx->pc = 0x158A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158A20u, 0x1825E4u, 0x1825ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1825ECu;
label_1825ec:
    // 0x1825ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1825ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1825f0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1825f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1825f4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1825f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1825f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1825f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1825fc: 0xc0562b8  jal         func_158AE0
    ctx->pc = 0x1825FCu;
    SET_GPR_U32(ctx, 31, 0x182604u);
    ctx->pc = 0x158AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158AE0u, 0x1825FCu, 0x182604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x182604u;
label_182604:
    // 0x182604: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x182604u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182608: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x182608u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x18260c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x18260cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182610: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x182610u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x182614: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182618: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x182618u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x18261c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x18261cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182620: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x182620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182624: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x182624u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x182628: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x182628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18262c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x18262cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182630: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182630u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182634: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x182634u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x182638: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18263c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18263cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182640: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x182640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x182644: 0x3e00008  jr          $ra
    ctx->pc = 0x182644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x182644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18264Cu;
    // 0x18264c: 0x0  nop
    ctx->pc = 0x18264cu;
    // NOP
    ctx->pc = 0x182650u;
}
