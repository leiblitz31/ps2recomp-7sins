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

// Function: sub_0013D5A0
// Address: 0x13d5a0 - 0x13d640
void sub_0013D5A0_0x13d5a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013D5A0_0x13d5a0");
#endif

    switch (ctx->pc) {
        case 0x13d5dcu: goto label_13d5dc;
        case 0x13d5f4u: goto label_13d5f4;
        default: break;
    }

    ctx->pc = 0x13d5a0u;

    // 0x13d5a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13d5a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13d5a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x13d5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x13d5a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x13d5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x13d5ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x13d5acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x13d5b0: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x13d5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x13d5b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d5b8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x13d5b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x13d5bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d5c0: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x13d5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    // 0x13d5c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d5c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d5c8: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x13d5c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13d5cc: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x13d5ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13d5d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d5d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5d4: 0xc04e120  jal         func_138480
    ctx->pc = 0x13D5D4u;
    SET_GPR_U32(ctx, 31, 0x13D5DCu);
    ctx->pc = 0x138480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x138480u, 0x13D5D4u, 0x13D5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5DCu;
label_13d5dc:
    // 0x13d5dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d5e0: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x13d5e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x13d5e4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x13d5e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d5e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x13d5e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13d5ec: 0xc04f43c  jal         func_13D0F0
    ctx->pc = 0x13D5ECu;
    SET_GPR_U32(ctx, 31, 0x13D5F4u);
    ctx->pc = 0x13D0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13D0F0u, 0x13D5ECu, 0x13D5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13D5F4u;
label_13d5f4:
    // 0x13d5f4: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x13d5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d5f8: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x13d5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x13d5fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d600: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x13d600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13d604: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d608: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x13d608u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x13d60c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x13d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d610: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x13d610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13d614: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13d614u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13d618: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x13d618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13d61c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13d61cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13d620: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d624: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x13d624u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x13d628: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x13d628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13d62c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x13d62cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13d630: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x13d630u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13d634: 0x3e00008  jr          $ra
    ctx->pc = 0x13D634u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13D634u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13D63Cu;
    // 0x13d63c: 0x0  nop
    ctx->pc = 0x13d63cu;
    // NOP
    ctx->pc = 0x13d640u;
}
