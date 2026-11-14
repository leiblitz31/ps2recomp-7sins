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

// Function: sub_00255160
// Address: 0x255160 - 0x2551f0
void sub_00255160_0x255160(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00255160_0x255160");
#endif

    switch (ctx->pc) {
        case 0x25519cu: goto label_25519c;
        case 0x2551dcu: goto label_2551dc;
        default: break;
    }

    ctx->pc = 0x255160u;

    // 0x255160: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x255160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x255164: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x255164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x255168: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x255168u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x25516c: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x25516cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x255170: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x255170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x255174: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x255174u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255178: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x255178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25517c: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x25517cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x255180: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x255180u;
    {
        const bool branch_taken_0x255180 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x255180) {
            ctx->pc = 0x2551B4u;
            goto label_2551b4;
        }
    }
    ctx->pc = 0x255188u;
    // 0x255188: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x255188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25518c: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x25518cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x255190: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x255190u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x255194: 0xc095520  jal         func_255480
    ctx->pc = 0x255194u;
    SET_GPR_U32(ctx, 31, 0x25519Cu);
    ctx->pc = 0x255480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x255480u, 0x255194u, 0x25519Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25519Cu;
label_25519c:
    // 0x25519c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x25519cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2551a0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2551a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2551a4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2551a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x2551a8: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x2551a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x2551ac: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2551ACu;
    {
        const bool branch_taken_0x2551ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2551ac) {
            ctx->pc = 0x2551DCu;
            goto label_2551dc;
        }
    }
    ctx->pc = 0x2551B4u;
label_2551b4:
    // 0x2551b4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2551b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2551b8: 0xa3a0001c  sb          $zero, 0x1C($sp)
    ctx->pc = 0x2551b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 28), (uint8_t)GPR_U32(ctx, 0));
    // 0x2551bc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2551bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2551c0: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2551c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2551c4: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2551c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2551c8: 0x27a7001c  addiu       $a3, $sp, 0x1C
    ctx->pc = 0x2551c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 28));
    // 0x2551cc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x2551ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2551d0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2551d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2551d4: 0xc09547c  jal         func_2551F0
    ctx->pc = 0x2551D4u;
    SET_GPR_U32(ctx, 31, 0x2551DCu);
    ctx->pc = 0x2551F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2551F0u, 0x2551D4u, 0x2551DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2551DCu;
label_2551dc:
    // 0x2551dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2551dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2551e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2551e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2551e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2551E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2551E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2551ECu;
    // 0x2551ec: 0x0  nop
    ctx->pc = 0x2551ecu;
    // NOP
    ctx->pc = 0x2551f0u;
}
