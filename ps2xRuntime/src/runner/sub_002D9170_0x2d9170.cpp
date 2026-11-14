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

// Function: sub_002D9170
// Address: 0x2d9170 - 0x2d9400
void sub_002D9170_0x2d9170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9170_0x2d9170");
#endif

    switch (ctx->pc) {
        case 0x2d9188u: goto label_2d9188;
        case 0x2d91ecu: goto label_2d91ec;
        case 0x2d920cu: goto label_2d920c;
        case 0x2d924cu: goto label_2d924c;
        case 0x2d9288u: goto label_2d9288;
        case 0x2d92c0u: goto label_2d92c0;
        case 0x2d92f4u: goto label_2d92f4;
        case 0x2d9338u: goto label_2d9338;
        case 0x2d935cu: goto label_2d935c;
        case 0x2d937cu: goto label_2d937c;
        case 0x2d939cu: goto label_2d939c;
        case 0x2d93b4u: goto label_2d93b4;
        case 0x2d93c4u: goto label_2d93c4;
        case 0x2d93dcu: goto label_2d93dc;
        default: break;
    }

    ctx->pc = 0x2d9170u;

    // 0x2d9170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9178: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d9178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d917c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d917cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9180: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x2D9180u;
    SET_GPR_U32(ctx, 31, 0x2D9188u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x2D9180u, 0x2D9188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9188u;
label_2d9188:
    // 0x2d9188: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d9188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d918c: 0x24636850  addiu       $v1, $v1, 0x6850
    ctx->pc = 0x2d918cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26704));
    // 0x2d9190: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d9190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9194: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d9194u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d9198: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d9198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d919c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d919cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d91a0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d91a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d91a4: 0x3e00008  jr          $ra
    ctx->pc = 0x2D91A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D91A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D91ACu;
    // 0x2d91ac: 0x0  nop
    ctx->pc = 0x2d91acu;
    // NOP
    // 0x2d91b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d91b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d91b4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d91b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d91b8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d91b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d91bc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2d91bcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2d91c0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d91c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d91c4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2D91C4u;
    {
        const bool branch_taken_0x2d91c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d91c4) {
            ctx->pc = 0x2D920Cu;
            goto label_2d920c;
        }
    }
    ctx->pc = 0x2D91CCu;
    // 0x2d91cc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2d91ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x2d91d0: 0x24636850  addiu       $v1, $v1, 0x6850
    ctx->pc = 0x2d91d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 26704));
    // 0x2d91d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d91d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d91d8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2d91d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x2d91dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d91dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d91e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2d91e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d91e4: 0xc09d150  jal         func_274540
    ctx->pc = 0x2D91E4u;
    SET_GPR_U32(ctx, 31, 0x2D91ECu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x2D91E4u, 0x2D91ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D91ECu;
label_2d91ec:
    // 0x2d91ec: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2d91ecu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d91f0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2d91f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d91f4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2d91f4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2d91f8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D91F8u;
    {
        const bool branch_taken_0x2d91f8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d91f8) {
            ctx->pc = 0x2D920Cu;
            goto label_2d920c;
        }
    }
    ctx->pc = 0x2D9200u;
    // 0x2d9200: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d9200u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9204: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2D9204u;
    SET_GPR_U32(ctx, 31, 0x2D920Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2D9204u, 0x2D920Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D920Cu;
label_2d920c:
    // 0x2d920c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2d920cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9210: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d9214: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d9214u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d9218: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9218u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9218u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9220u;
    // 0x2d9220: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d9224: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2d9228: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d9228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d922c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2d922cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2d9230: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2d9230u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
    // 0x2d9234: 0xafa60040  sw          $a2, 0x40($sp)
    ctx->pc = 0x2d9234u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
    // 0x2d9238: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d9238u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d923c: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2d923cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d9240: 0x8fa60040  lw          $a2, 0x40($sp)
    ctx->pc = 0x2d9240u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9244: 0xc09d18c  jal         func_274630
    ctx->pc = 0x2D9244u;
    SET_GPR_U32(ctx, 31, 0x2D924Cu);
    ctx->pc = 0x274630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274630u, 0x2D9244u, 0x2D924Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D924Cu;
label_2d924c:
    // 0x2d924c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2d924cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2d9250: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d9250u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9254: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9258: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d9258u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d925c: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d925cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d9260: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9260u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9260u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9268u;
    // 0x2d9268: 0x0  nop
    ctx->pc = 0x2d9268u;
    // NOP
    // 0x2d926c: 0x0  nop
    ctx->pc = 0x2d926cu;
    // NOP
    // 0x2d9270: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2d9270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2d9274: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d9274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d9278: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d9278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d927c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d927cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d9280: 0xc09d1d8  jal         func_274760
    ctx->pc = 0x2D9280u;
    SET_GPR_U32(ctx, 31, 0x2D9288u);
    ctx->pc = 0x274760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274760u, 0x2D9280u, 0x2D9288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9288u;
label_2d9288:
    // 0x2d9288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d9288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d928c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2d928cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2d9290: 0x3e00008  jr          $ra
    ctx->pc = 0x2D9290u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9290u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9298u;
    // 0x2d9298: 0x0  nop
    ctx->pc = 0x2d9298u;
    // NOP
    // 0x2d929c: 0x0  nop
    ctx->pc = 0x2d929cu;
    // NOP
    // 0x2d92a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2d92a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2d92a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2d92a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2d92a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2d92a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2d92ac: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x2d92acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x2d92b0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2d92b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d92b4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2d92b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d92b8: 0xc09d1e4  jal         func_274790
    ctx->pc = 0x2D92B8u;
    SET_GPR_U32(ctx, 31, 0x2D92C0u);
    ctx->pc = 0x274790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274790u, 0x2D92B8u, 0x2D92C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92C0u;
label_2d92c0:
    // 0x2d92c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2d92c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d92c4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2d92c4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2d92c8: 0x3e00008  jr          $ra
    ctx->pc = 0x2D92C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D92C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D92D0u;
    // 0x2d92d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2d92d4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2d92d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2d92d8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2d92d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2d92dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2d92dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2d92e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2d92e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2d92e4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2d92e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x2d92e8: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d92e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d92ec: 0xc09d248  jal         func_274920
    ctx->pc = 0x2D92ECu;
    SET_GPR_U32(ctx, 31, 0x2D92F4u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x2D92ECu, 0x2D92F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D92F4u;
label_2d92f4:
    // 0x2d92f4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2d92f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d92f8: 0x10430038  beq         $v0, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D92F8u;
    {
        const bool branch_taken_0x2d92f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d92f8) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D9300u;
    // 0x2d9300: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2d9300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2d9304: 0x10430031  beq         $v0, $v1, . + 4 + (0x31 << 2)
    ctx->pc = 0x2D9304u;
    {
        const bool branch_taken_0x2d9304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9304) {
            ctx->pc = 0x2D93CCu;
            goto label_2d93cc;
        }
    }
    ctx->pc = 0x2D930Cu;
    // 0x2d930c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2d930cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d9310: 0x10430032  beq         $v0, $v1, . + 4 + (0x32 << 2)
    ctx->pc = 0x2D9310u;
    {
        const bool branch_taken_0x2d9310 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d9310) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D9318u;
    // 0x2d9318: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2d9318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d931c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2D931Cu;
    {
        const bool branch_taken_0x2d931c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2d931c) {
            ctx->pc = 0x2D932Cu;
            goto label_2d932c;
        }
    }
    ctx->pc = 0x2D9324u;
    // 0x2d9324: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x2D9324u;
    {
        const bool branch_taken_0x2d9324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9324) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D932Cu;
label_2d932c:
    // 0x2d932c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d932cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9330: 0xc0a71c8  jal         func_29C720
    ctx->pc = 0x2D9330u;
    SET_GPR_U32(ctx, 31, 0x2D9338u);
    ctx->pc = 0x29C720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29C720u, 0x2D9330u, 0x2D9338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9338u;
label_2d9338:
    // 0x2d9338: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d9338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d933c: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x2d933cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x2d9340: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d9340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9344: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2d9344u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2d9348: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d9348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d934c: 0x24a5e3d0  addiu       $a1, $a1, -0x1C30
    ctx->pc = 0x2d934cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960080));
    // 0x2d9350: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2d9350u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9354: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2D9354u;
    SET_GPR_U32(ctx, 31, 0x2D935Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2D9354u, 0x2D935Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D935Cu;
label_2d935c:
    // 0x2d935c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d935cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d9360: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2d9360u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d9364: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x2d9364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2d9368: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x2d9368u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x2d936c: 0x24a5e3f0  addiu       $a1, $a1, -0x1C10
    ctx->pc = 0x2d936cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960112));
    // 0x2d9370: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2d9370u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d9374: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x2D9374u;
    SET_GPR_U32(ctx, 31, 0x2D937Cu);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x2D9374u, 0x2D937Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D937Cu;
label_2d937c:
    // 0x2d937c: 0x2450ffff  addiu       $s0, $v0, -0x1
    ctx->pc = 0x2d937cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2d9380: 0x6010002  bgez        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2D9380u;
    {
        const bool branch_taken_0x2d9380 = (GPR_S32(ctx, 16) >= 0);
        if (branch_taken_0x2d9380) {
            ctx->pc = 0x2D938Cu;
            goto label_2d938c;
        }
    }
    ctx->pc = 0x2D9388u;
    // 0x2d9388: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9388u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d938c:
    // 0x2d938c: 0x8f84ba7c  lw          $a0, -0x4584($gp)
    ctx->pc = 0x2d938cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949500)));
    // 0x2d9390: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d9390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d9394: 0xc04fbd0  jal         func_13EF40
    ctx->pc = 0x2D9394u;
    SET_GPR_U32(ctx, 31, 0x2D939Cu);
    ctx->pc = 0x13EF40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13EF40u, 0x2D9394u, 0x2D939Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D939Cu;
label_2d939c:
    // 0x2d939c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2d939cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d93a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93a4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d93a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93a8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2d93a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d93ac: 0xc04d01c  jal         func_134070
    ctx->pc = 0x2D93ACu;
    SET_GPR_U32(ctx, 31, 0x2D93B4u);
    ctx->pc = 0x134070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x134070u, 0x2D93ACu, 0x2D93B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93B4u;
label_2d93b4:
    // 0x2d93b4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d93b8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d93b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d93bc: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D93BCu;
    SET_GPR_U32(ctx, 31, 0x2D93C4u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D93BCu, 0x2D93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93C4u;
label_2d93c4:
    // 0x2d93c4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2D93C4u;
    {
        const bool branch_taken_0x2d93c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d93c4) {
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D93CCu;
label_2d93cc:
    // 0x2d93cc: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2d93ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d93d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2d93d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2d93d4: 0xc09d250  jal         func_274940
    ctx->pc = 0x2D93D4u;
    SET_GPR_U32(ctx, 31, 0x2D93DCu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x2D93D4u, 0x2D93DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93DCu;
label_2d93dc:
    // 0x2d93dc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d93dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d93e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2d93e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d93e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2d93e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2d93e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2d93e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2d93ec: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x2d93ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x2d93f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2D93F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D93F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D93F8u;
    // 0x2d93f8: 0x0  nop
    ctx->pc = 0x2d93f8u;
    // NOP
    // 0x2d93fc: 0x0  nop
    ctx->pc = 0x2d93fcu;
    // NOP
    ctx->pc = 0x2d9400u;
}
