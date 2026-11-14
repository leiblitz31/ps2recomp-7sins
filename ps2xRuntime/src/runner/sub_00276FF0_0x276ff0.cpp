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

// Function: sub_00276FF0
// Address: 0x276ff0 - 0x277090
void sub_00276FF0_0x276ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276FF0_0x276ff0");
#endif

    switch (ctx->pc) {
        case 0x27705cu: goto label_27705c;
        case 0x27707cu: goto label_27707c;
        default: break;
    }

    ctx->pc = 0x276ff0u;

    // 0x276ff0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276ff4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x276ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x276ff8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x276ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x276ffc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277000: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x277000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277004: 0xac64013c  sw          $a0, 0x13C($v1)
    ctx->pc = 0x277004u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 316), GPR_U32(ctx, 4));
    // 0x277008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x277008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x27700c: 0x3e00008  jr          $ra
    ctx->pc = 0x27700Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27700Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277014u;
    // 0x277014: 0x0  nop
    ctx->pc = 0x277014u;
    // NOP
    // 0x277018: 0x0  nop
    ctx->pc = 0x277018u;
    // NOP
    // 0x27701c: 0x0  nop
    ctx->pc = 0x27701cu;
    // NOP
    // 0x277020: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x277020u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x277024: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x277024u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x277028: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x277028u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27702c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27702cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x277030: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277034: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x277034u;
    {
        const bool branch_taken_0x277034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x277034) {
            ctx->pc = 0x27707Cu;
            goto label_27707c;
        }
    }
    ctx->pc = 0x27703Cu;
    // 0x27703c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27703cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x277040: 0x24635dd0  addiu       $v1, $v1, 0x5DD0
    ctx->pc = 0x277040u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24016));
    // 0x277044: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x277044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277048: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x277048u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27704c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27704cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x277050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x277054: 0xc09d150  jal         func_274540
    ctx->pc = 0x277054u;
    SET_GPR_U32(ctx, 31, 0x27705Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x277054u, 0x27705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27705Cu;
label_27705c:
    // 0x27705c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27705cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x277060: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x277060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x277064: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x277064u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x277068: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x277068u;
    {
        const bool branch_taken_0x277068 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x277068) {
            ctx->pc = 0x27707Cu;
            goto label_27707c;
        }
    }
    ctx->pc = 0x277070u;
    // 0x277070: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x277070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277074: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x277074u;
    SET_GPR_U32(ctx, 31, 0x27707Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x277074u, 0x27707Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27707Cu;
label_27707c:
    // 0x27707c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x277080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x277084: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x277084u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277088: 0x3e00008  jr          $ra
    ctx->pc = 0x277088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277090u;
}
