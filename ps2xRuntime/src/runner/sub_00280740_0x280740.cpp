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

// Function: sub_00280740
// Address: 0x280740 - 0x2807a0
void sub_00280740_0x280740(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00280740_0x280740");
#endif

    switch (ctx->pc) {
        case 0x28076cu: goto label_28076c;
        case 0x28078cu: goto label_28078c;
        default: break;
    }

    ctx->pc = 0x280740u;

    // 0x280740: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x280740u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x280744: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x280744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x280748: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x280748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28074c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x28074cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x280750: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x280750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280754: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x280754u;
    {
        const bool branch_taken_0x280754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x280754) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x28075Cu;
    // 0x28075c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280760: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x280760u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x280764: 0xc0a01e8  jal         func_2807A0
    ctx->pc = 0x280764u;
    SET_GPR_U32(ctx, 31, 0x28076Cu);
    ctx->pc = 0x2807A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2807A0u, 0x280764u, 0x28076Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28076Cu;
label_28076c:
    // 0x28076c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x28076cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x280770: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x280770u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x280774: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x280774u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x280778: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x280778u;
    {
        const bool branch_taken_0x280778 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x280778) {
            ctx->pc = 0x28078Cu;
            goto label_28078c;
        }
    }
    ctx->pc = 0x280780u;
    // 0x280780: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x280780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280784: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x280784u;
    SET_GPR_U32(ctx, 31, 0x28078Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x280784u, 0x28078Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28078Cu;
label_28078c:
    // 0x28078c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x28078cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x280790: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x280790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x280794: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x280794u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x280798: 0x3e00008  jr          $ra
    ctx->pc = 0x280798u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x280798u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2807A0u;
}
