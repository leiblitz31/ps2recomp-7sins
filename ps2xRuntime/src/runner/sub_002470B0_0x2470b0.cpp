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

// Function: sub_002470B0
// Address: 0x2470b0 - 0x247280
void sub_002470B0_0x2470b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002470B0_0x2470b0");
#endif

    switch (ctx->pc) {
        case 0x2470ccu: goto label_2470cc;
        case 0x2470f4u: goto label_2470f4;
        case 0x247150u: goto label_247150;
        case 0x247160u: goto label_247160;
        case 0x247180u: goto label_247180;
        case 0x2471bcu: goto label_2471bc;
        case 0x2471d4u: goto label_2471d4;
        case 0x24720cu: goto label_24720c;
        case 0x247254u: goto label_247254;
        case 0x247268u: goto label_247268;
        default: break;
    }

    ctx->pc = 0x2470b0u;

    // 0x2470b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2470b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2470b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2470b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2470b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2470b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2470bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2470bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2470c0: 0x2405000c  addiu       $a1, $zero, 0xC
    ctx->pc = 0x2470c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x2470c4: 0xc091174  jal         func_2445D0
    ctx->pc = 0x2470C4u;
    SET_GPR_U32(ctx, 31, 0x2470CCu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x2470C4u, 0x2470CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470CCu;
label_2470cc:
    // 0x2470cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2470ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2470d0: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x2470d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
    // 0x2470d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2470d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2470d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2470d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2470dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2470dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2470e0: 0xa0400044  sb          $zero, 0x44($v0)
    ctx->pc = 0x2470e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2470e4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2470e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2470e8: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x2470e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2470ec: 0xc0447ec  jal         func_111FB0
    ctx->pc = 0x2470ECu;
    SET_GPR_U32(ctx, 31, 0x2470F4u);
    ctx->pc = 0x111FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111FB0u, 0x2470ECu, 0x2470F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2470F4u;
label_2470f4:
    // 0x2470f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2470f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2470f8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2470f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2470fc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2470fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x247100: 0x3e00008  jr          $ra
    ctx->pc = 0x247100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247100u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247108u;
    // 0x247108: 0x0  nop
    ctx->pc = 0x247108u;
    // NOP
    // 0x24710c: 0x0  nop
    ctx->pc = 0x24710cu;
    // NOP
    // 0x247110: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x247110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x247114: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x247114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x247118: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x247118u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x24711c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x24711cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x247120: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247124: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x247124u;
    {
        const bool branch_taken_0x247124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x247124) {
            ctx->pc = 0x247180u;
            goto label_247180;
        }
    }
    ctx->pc = 0x24712Cu;
    // 0x24712c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x24712cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x247130: 0x246357f0  addiu       $v1, $v1, 0x57F0
    ctx->pc = 0x247130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 22512));
    // 0x247134: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247138: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x247138u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x24713c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x24713cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247140: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x247140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x247144: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x247144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x247148: 0xc0439c4  jal         func_10E710
    ctx->pc = 0x247148u;
    SET_GPR_U32(ctx, 31, 0x247150u);
    ctx->pc = 0x10E710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10E710u, 0x247148u, 0x247150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247150u;
label_247150:
    // 0x247150: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x247154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247158: 0xc091188  jal         func_244620
    ctx->pc = 0x247158u;
    SET_GPR_U32(ctx, 31, 0x247160u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x247158u, 0x247160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247160u;
label_247160:
    // 0x247160: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x247160u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247164: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x247164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x247168: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x247168u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x24716c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x24716Cu;
    {
        const bool branch_taken_0x24716c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x24716c) {
            ctx->pc = 0x247180u;
            goto label_247180;
        }
    }
    ctx->pc = 0x247174u;
    // 0x247174: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x247174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247178: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x247178u;
    SET_GPR_U32(ctx, 31, 0x247180u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x247178u, 0x247180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247180u;
label_247180:
    // 0x247180: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x247180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247184: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x247184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247188: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x247188u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x24718c: 0x3e00008  jr          $ra
    ctx->pc = 0x24718Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24718Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247194u;
    // 0x247194: 0x0  nop
    ctx->pc = 0x247194u;
    // NOP
    // 0x247198: 0x0  nop
    ctx->pc = 0x247198u;
    // NOP
    // 0x24719c: 0x0  nop
    ctx->pc = 0x24719cu;
    // NOP
    // 0x2471a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2471a4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2471a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2471a8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2471a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2471ac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2471acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2471b0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2471b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2471b4: 0xc0911a4  jal         func_244690
    ctx->pc = 0x2471B4u;
    SET_GPR_U32(ctx, 31, 0x2471BCu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x2471B4u, 0x2471BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471BCu;
label_2471bc:
    // 0x2471bc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2471bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2471c0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2471c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2471c4: 0x24440048  addiu       $a0, $v0, 0x48
    ctx->pc = 0x2471c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 72));
    // 0x2471c8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2471cc: 0xc091d40  jal         func_247500
    ctx->pc = 0x2471CCu;
    SET_GPR_U32(ctx, 31, 0x2471D4u);
    ctx->pc = 0x247500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x247500u, 0x2471CCu, 0x2471D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2471D4u;
label_2471d4:
    // 0x2471d4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2471d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471d8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2471d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2471dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2471dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2471e0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2471e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2471e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2471E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2471E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2471ECu;
    // 0x2471ec: 0x0  nop
    ctx->pc = 0x2471ecu;
    // NOP
    // 0x2471f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2471f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2471f4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2471f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2471f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2471f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2471fc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2471fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247200: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247204: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x247204u;
    SET_GPR_U32(ctx, 31, 0x24720Cu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x247204u, 0x24720Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24720Cu;
label_24720c:
    // 0x24720c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x24720cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247210: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x247210u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x247214: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x247214u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247218: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247218u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24721c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x24721cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x247220: 0x3e00008  jr          $ra
    ctx->pc = 0x247220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247228u;
    // 0x247228: 0x0  nop
    ctx->pc = 0x247228u;
    // NOP
    // 0x24722c: 0x0  nop
    ctx->pc = 0x24722cu;
    // NOP
    // 0x247230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x247230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x247234: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x247234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x247238: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x247238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x24723c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x24723cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x247240: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x247240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x247244: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247248: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x247248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x24724c: 0xc0911dc  jal         func_244770
    ctx->pc = 0x24724Cu;
    SET_GPR_U32(ctx, 31, 0x247254u);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x24724Cu, 0x247254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247254u;
label_247254:
    // 0x247254: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x247254u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x247258: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x247258u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x24725c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x24725cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247260: 0xc091cb0  jal         func_2472C0
    ctx->pc = 0x247260u;
    SET_GPR_U32(ctx, 31, 0x247268u);
    ctx->pc = 0x2472C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2472C0u, 0x247260u, 0x247268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x247268u;
label_247268:
    // 0x247268: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x247268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24726c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x24726cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x247270: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x247270u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247274: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x247274u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x247278: 0x3e00008  jr          $ra
    ctx->pc = 0x247278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x247278u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x247280u;
}
