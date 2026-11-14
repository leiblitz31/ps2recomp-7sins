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

// Function: sub_00216970
// Address: 0x216970 - 0x216a20
void sub_00216970_0x216970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00216970_0x216970");
#endif

    switch (ctx->pc) {
        case 0x2169d4u: goto label_2169d4;
        case 0x2169e4u: goto label_2169e4;
        case 0x216a04u: goto label_216a04;
        default: break;
    }

    ctx->pc = 0x216970u;

    // 0x216970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x216970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x216974: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x216974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x216978: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x216978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21697c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x21697cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x216980: 0x3e00008  jr          $ra
    ctx->pc = 0x216980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216988u;
    // 0x216988: 0x0  nop
    ctx->pc = 0x216988u;
    // NOP
    // 0x21698c: 0x0  nop
    ctx->pc = 0x21698cu;
    // NOP
    // 0x216990: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x216990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x216994: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x216994u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x216998: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x216998u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x21699c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x21699cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2169a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2169a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2169a4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2169A4u;
    {
        const bool branch_taken_0x2169a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2169a4) {
            ctx->pc = 0x216A04u;
            goto label_216a04;
        }
    }
    ctx->pc = 0x2169ACu;
    // 0x2169ac: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2169acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2169b0: 0x24635210  addiu       $v1, $v1, 0x5210
    ctx->pc = 0x2169b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21008));
    // 0x2169b4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2169b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2169b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2169b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2169bc: 0xaf80bb74  sw          $zero, -0x448C($gp)
    ctx->pc = 0x2169bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294949748), GPR_U32(ctx, 0));
    // 0x2169c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2169c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2169c4: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x2169c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x2169c8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2169c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2169cc: 0xc08596c  jal         func_2165B0
    ctx->pc = 0x2169CCu;
    SET_GPR_U32(ctx, 31, 0x2169D4u);
    ctx->pc = 0x2165B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2165B0u, 0x2169CCu, 0x2169D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169D4u;
label_2169d4:
    // 0x2169d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2169d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2169d8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2169d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2169dc: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x2169DCu;
    SET_GPR_U32(ctx, 31, 0x2169E4u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x2169DCu, 0x2169E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2169E4u;
label_2169e4:
    // 0x2169e4: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2169e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2169e8: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2169e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2169ec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2169ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2169f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2169F0u;
    {
        const bool branch_taken_0x2169f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2169f0) {
            ctx->pc = 0x216A04u;
            goto label_216a04;
        }
    }
    ctx->pc = 0x2169F8u;
    // 0x2169f8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2169f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2169fc: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2169FCu;
    SET_GPR_U32(ctx, 31, 0x216A04u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2169FCu, 0x216A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x216A04u;
label_216a04:
    // 0x216a04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x216a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x216a08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x216a08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x216a0c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x216a0cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x216a10: 0x3e00008  jr          $ra
    ctx->pc = 0x216A10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x216A10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x216A18u;
    // 0x216a18: 0x0  nop
    ctx->pc = 0x216a18u;
    // NOP
    // 0x216a1c: 0x0  nop
    ctx->pc = 0x216a1cu;
    // NOP
    ctx->pc = 0x216a20u;
}
