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

// Function: sub_002750E0
// Address: 0x2750e0 - 0x2751a0
void sub_002750E0_0x2750e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002750E0_0x2750e0");
#endif

    switch (ctx->pc) {
        case 0x27516cu: goto label_27516c;
        case 0x27518cu: goto label_27518c;
        default: break;
    }

    ctx->pc = 0x2750e0u;

    // 0x2750e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2750e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2750e4: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x2750e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x2750e8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x2750e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x2750ec: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2750ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2750f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2750f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2750f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2750f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2750f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2750f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2750fc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2750fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275100: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x275100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x275104: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x275104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275108: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x275108u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x27510c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27510cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275110: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x275110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x275114: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x275114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275118: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x275118u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x27511c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x27511cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275120: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x275120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275124: 0x3e00008  jr          $ra
    ctx->pc = 0x275124u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275124u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27512Cu;
    // 0x27512c: 0x0  nop
    ctx->pc = 0x27512cu;
    // NOP
    // 0x275130: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275130u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275134: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275138: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275138u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x27513c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x27513cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x275140: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275144: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x275144u;
    {
        const bool branch_taken_0x275144 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275144) {
            ctx->pc = 0x27518Cu;
            goto label_27518c;
        }
    }
    ctx->pc = 0x27514Cu;
    // 0x27514c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x27514cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275150: 0x24635b50  addiu       $v1, $v1, 0x5B50
    ctx->pc = 0x275150u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23376));
    // 0x275154: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275154u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275158: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x27515c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x27515cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275164: 0xc09d150  jal         func_274540
    ctx->pc = 0x275164u;
    SET_GPR_U32(ctx, 31, 0x27516Cu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x275164u, 0x27516Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27516Cu;
label_27516c:
    // 0x27516c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x27516cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275170: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x275170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x275174: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275174u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x275178: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275178u;
    {
        const bool branch_taken_0x275178 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x275178) {
            ctx->pc = 0x27518Cu;
            goto label_27518c;
        }
    }
    ctx->pc = 0x275180u;
    // 0x275180: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275184: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x275184u;
    SET_GPR_U32(ctx, 31, 0x27518Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x275184u, 0x27518Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27518Cu;
label_27518c:
    // 0x27518c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x27518cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275190: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275194: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x275194u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275198: 0x3e00008  jr          $ra
    ctx->pc = 0x275198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2751A0u;
}
