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

// Function: sub_00182190
// Address: 0x182190 - 0x182240
void sub_00182190_0x182190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00182190_0x182190");
#endif

    switch (ctx->pc) {
        case 0x1821ccu: goto label_1821cc;
        case 0x1821e4u: goto label_1821e4;
        default: break;
    }

    ctx->pc = 0x182190u;

    // 0x182190: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x182190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x182194: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x182194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x182198: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x182198u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x18219c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x18219cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x1821a0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x1821a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x1821a4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1821a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821a8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1821a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1821ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1821acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821b0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x1821b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x1821b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1821b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821b8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1821b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1821bc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x1821bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1821c0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1821c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821c4: 0xc060890  jal         func_182240
    ctx->pc = 0x1821C4u;
    SET_GPR_U32(ctx, 31, 0x1821CCu);
    ctx->pc = 0x182240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182240u, 0x1821C4u, 0x1821CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821CCu;
label_1821cc:
    // 0x1821cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1821ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821d0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x1821d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x1821d4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x1821d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1821d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1821d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1821dc: 0xc060a20  jal         func_182880
    ctx->pc = 0x1821DCu;
    SET_GPR_U32(ctx, 31, 0x1821E4u);
    ctx->pc = 0x182880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x182880u, 0x1821DCu, 0x1821E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1821E4u;
label_1821e4:
    // 0x1821e4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1821e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821e8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1821e8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1821ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1821ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1821f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1821f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1821f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1821f8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x1821f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x1821fc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1821fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182200: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x182200u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x182204: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x182204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x182208: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x182208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18220c: 0x21900  sll         $v1, $v0, 4
    ctx->pc = 0x18220cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x182210: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x182210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x182214: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x182214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x182218: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18221c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x18221cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x182220: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x182220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x182224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x182224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x182228: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x182228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x18222c: 0x3e00008  jr          $ra
    ctx->pc = 0x18222Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18222Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x182234u;
    // 0x182234: 0x0  nop
    ctx->pc = 0x182234u;
    // NOP
    // 0x182238: 0x0  nop
    ctx->pc = 0x182238u;
    // NOP
    // 0x18223c: 0x0  nop
    ctx->pc = 0x18223cu;
    // NOP
    ctx->pc = 0x182240u;
}
