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

// Function: sub_00254520
// Address: 0x254520 - 0x254580
void sub_00254520_0x254520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00254520_0x254520");
#endif

    switch (ctx->pc) {
        case 0x25454cu: goto label_25454c;
        case 0x25456cu: goto label_25456c;
        default: break;
    }

    ctx->pc = 0x254520u;

    // 0x254520: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x254520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x254524: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x254524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x254528: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x254528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x25452c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x25452cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x254530: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x254530u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254534: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x254534u;
    {
        const bool branch_taken_0x254534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x254534) {
            ctx->pc = 0x25456Cu;
            goto label_25456c;
        }
    }
    ctx->pc = 0x25453Cu;
    // 0x25453c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x25453cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254540: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x254540u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x254544: 0xc095160  jal         func_254580
    ctx->pc = 0x254544u;
    SET_GPR_U32(ctx, 31, 0x25454Cu);
    ctx->pc = 0x254580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x254580u, 0x254544u, 0x25454Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25454Cu;
label_25454c:
    // 0x25454c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x25454cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x254550: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x254550u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x254554: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x254554u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x254558: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x254558u;
    {
        const bool branch_taken_0x254558 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x254558) {
            ctx->pc = 0x25456Cu;
            goto label_25456c;
        }
    }
    ctx->pc = 0x254560u;
    // 0x254560: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x254560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254564: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x254564u;
    SET_GPR_U32(ctx, 31, 0x25456Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x254564u, 0x25456Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25456Cu;
label_25456c:
    // 0x25456c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x25456cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x254570: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x254570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x254574: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x254574u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x254578: 0x3e00008  jr          $ra
    ctx->pc = 0x254578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x254578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x254580u;
}
