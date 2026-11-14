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

// Function: sub_00195680
// Address: 0x195680 - 0x195be0
void sub_00195680_0x195680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00195680_0x195680");
#endif

    switch (ctx->pc) {
        case 0x1956e0u: goto label_1956e0;
        case 0x1956f4u: goto label_1956f4;
        case 0x195708u: goto label_195708;
        case 0x19571cu: goto label_19571c;
        case 0x195730u: goto label_195730;
        case 0x195740u: goto label_195740;
        case 0x195760u: goto label_195760;
        case 0x19579cu: goto label_19579c;
        case 0x1957acu: goto label_1957ac;
        case 0x1957ecu: goto label_1957ec;
        case 0x195804u: goto label_195804;
        case 0x195818u: goto label_195818;
        case 0x195858u: goto label_195858;
        case 0x1958e0u: goto label_1958e0;
        case 0x19594cu: goto label_19594c;
        case 0x19595cu: goto label_19595c;
        case 0x19596cu: goto label_19596c;
        case 0x195978u: goto label_195978;
        case 0x1959ecu: goto label_1959ec;
        case 0x195a2cu: goto label_195a2c;
        case 0x195a6cu: goto label_195a6c;
        case 0x195ab4u: goto label_195ab4;
        case 0x195ac0u: goto label_195ac0;
        case 0x195adcu: goto label_195adc;
        case 0x195ae8u: goto label_195ae8;
        case 0x195b0cu: goto label_195b0c;
        case 0x195b1cu: goto label_195b1c;
        case 0x195b28u: goto label_195b28;
        case 0x195b40u: goto label_195b40;
        case 0x195b54u: goto label_195b54;
        case 0x195b60u: goto label_195b60;
        case 0x195b78u: goto label_195b78;
        case 0x195b8cu: goto label_195b8c;
        case 0x195ba8u: goto label_195ba8;
        case 0x195bb8u: goto label_195bb8;
        case 0x195bc8u: goto label_195bc8;
        default: break;
    }

    ctx->pc = 0x195680u;

    // 0x195680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x195680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x195684: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x195684u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x195688: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x195688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19568c: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x19568cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x195690: 0x3e00008  jr          $ra
    ctx->pc = 0x195690u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195690u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195698u;
    // 0x195698: 0x0  nop
    ctx->pc = 0x195698u;
    // NOP
    // 0x19569c: 0x0  nop
    ctx->pc = 0x19569cu;
    // NOP
    // 0x1956a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1956a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1956a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1956a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1956a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1956a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1956ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1956acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1956b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1956b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956b4: 0x1040002a  beqz        $v0, . + 4 + (0x2A << 2)
    ctx->pc = 0x1956B4u;
    {
        const bool branch_taken_0x1956b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1956b4) {
            ctx->pc = 0x195760u;
            goto label_195760;
        }
    }
    ctx->pc = 0x1956BCu;
    // 0x1956bc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x1956bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x1956c0: 0x246344b0  addiu       $v1, $v1, 0x44B0
    ctx->pc = 0x1956c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17584));
    // 0x1956c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1956c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1956c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1956cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1956ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956d0: 0x24440118  addiu       $a0, $v0, 0x118
    ctx->pc = 0x1956d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 280));
    // 0x1956d4: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1956d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1956d8: 0xc056e54  jal         func_15B950
    ctx->pc = 0x1956D8u;
    SET_GPR_U32(ctx, 31, 0x1956E0u);
    ctx->pc = 0x15B950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B950u, 0x1956D8u, 0x1956E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956E0u;
label_1956e0:
    // 0x1956e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1956e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956e4: 0x2444010c  addiu       $a0, $v0, 0x10C
    ctx->pc = 0x1956e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 268));
    // 0x1956e8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1956e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1956ec: 0xc0652bc  jal         func_194AF0
    ctx->pc = 0x1956ECu;
    SET_GPR_U32(ctx, 31, 0x1956F4u);
    ctx->pc = 0x194AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194AF0u, 0x1956ECu, 0x1956F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1956F4u;
label_1956f4:
    // 0x1956f4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1956f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1956f8: 0x24440100  addiu       $a0, $v0, 0x100
    ctx->pc = 0x1956f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x1956fc: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x1956fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195700: 0xc06535c  jal         func_194D70
    ctx->pc = 0x195700u;
    SET_GPR_U32(ctx, 31, 0x195708u);
    ctx->pc = 0x194D70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194D70u, 0x195700u, 0x195708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195708u;
label_195708:
    // 0x195708: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19570c: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x19570cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x195710: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x195710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195714: 0xc0653fc  jal         func_194FF0
    ctx->pc = 0x195714u;
    SET_GPR_U32(ctx, 31, 0x19571Cu);
    ctx->pc = 0x194FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x194FF0u, 0x195714u, 0x19571Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19571Cu;
label_19571c:
    // 0x19571c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x19571cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195720: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195724: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x195724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x195728: 0xc056094  jal         func_158250
    ctx->pc = 0x195728u;
    SET_GPR_U32(ctx, 31, 0x195730u);
    ctx->pc = 0x158250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158250u, 0x195728u, 0x195730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195730u;
label_195730:
    // 0x195730: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195730u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195734: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195734u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195738: 0xc064970  jal         func_1925C0
    ctx->pc = 0x195738u;
    SET_GPR_U32(ctx, 31, 0x195740u);
    ctx->pc = 0x1925C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1925C0u, 0x195738u, 0x195740u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195740u;
label_195740:
    // 0x195740: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x195740u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195744: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x195744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x195748: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x195748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19574c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x19574Cu;
    {
        const bool branch_taken_0x19574c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x19574c) {
            ctx->pc = 0x195760u;
            goto label_195760;
        }
    }
    ctx->pc = 0x195754u;
    // 0x195754: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195758: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x195758u;
    SET_GPR_U32(ctx, 31, 0x195760u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x195758u, 0x195760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195760u;
label_195760:
    // 0x195760: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x195760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195764: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195768: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195768u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19576c: 0x3e00008  jr          $ra
    ctx->pc = 0x19576Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19576Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195774u;
    // 0x195774: 0x0  nop
    ctx->pc = 0x195774u;
    // NOP
    // 0x195778: 0x0  nop
    ctx->pc = 0x195778u;
    // NOP
    // 0x19577c: 0x0  nop
    ctx->pc = 0x19577cu;
    // NOP
    // 0x195780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195784: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195784u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195788: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19578c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x19578cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195790: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195790u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195794: 0xc064a74  jal         func_1929D0
    ctx->pc = 0x195794u;
    SET_GPR_U32(ctx, 31, 0x19579Cu);
    ctx->pc = 0x1929D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1929D0u, 0x195794u, 0x19579Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19579Cu;
label_19579c:
    // 0x19579c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x19579cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1957a0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1957a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1957a4: 0xc06701c  jal         func_19C070
    ctx->pc = 0x1957A4u;
    SET_GPR_U32(ctx, 31, 0x1957ACu);
    ctx->pc = 0x19C070u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C070u, 0x1957A4u, 0x1957ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957ACu;
label_1957ac:
    // 0x1957ac: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1957acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957b0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1957b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1957b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1957b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1957b8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1957b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1957bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1957BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1957BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1957C4u;
    // 0x1957c4: 0x0  nop
    ctx->pc = 0x1957c4u;
    // NOP
    // 0x1957c8: 0x0  nop
    ctx->pc = 0x1957c8u;
    // NOP
    // 0x1957cc: 0x0  nop
    ctx->pc = 0x1957ccu;
    // NOP
    // 0x1957d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1957d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1957d4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1957d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1957d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1957d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1957dc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x1957dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x1957e0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1957e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1957e4: 0xc064adc  jal         func_192B70
    ctx->pc = 0x1957E4u;
    SET_GPR_U32(ctx, 31, 0x1957ECu);
    ctx->pc = 0x192B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192B70u, 0x1957E4u, 0x1957ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1957ECu;
label_1957ec:
    // 0x1957ec: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x1957ecu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1957f0: 0x8f84bbec  lw          $a0, -0x4414($gp)
    ctx->pc = 0x1957f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949868)));
    // 0x1957f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1957f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1957f8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1957f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1957fc: 0xc08f740  jal         func_23DD00
    ctx->pc = 0x1957FCu;
    SET_GPR_U32(ctx, 31, 0x195804u);
    ctx->pc = 0x23DD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23DD00u, 0x1957FCu, 0x195804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195804u;
label_195804:
    // 0x195804: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195804u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195808: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x195808u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
    // 0x19580c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19580cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195810: 0xc0ac13c  jal         func_2B04F0
    ctx->pc = 0x195810u;
    SET_GPR_U32(ctx, 31, 0x195818u);
    ctx->pc = 0x2B04F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B04F0u, 0x195810u, 0x195818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195818u;
label_195818:
    // 0x195818: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x195818u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19581c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x19581cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195820: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195820u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195824: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195824u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195828: 0x3e00008  jr          $ra
    ctx->pc = 0x195828u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195828u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195830u;
    // 0x195830: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195834: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195838: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x19583c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x19583cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x195840: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x195840u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x195844: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195848: 0x93a50020  lbu         $a1, 0x20($sp)
    ctx->pc = 0x195848u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19584c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x19584cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195850: 0xc064a4c  jal         func_192930
    ctx->pc = 0x195850u;
    SET_GPR_U32(ctx, 31, 0x195858u);
    ctx->pc = 0x192930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192930u, 0x195850u, 0x195858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195858u;
label_195858:
    // 0x195858: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195858u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19585c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x19585cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195860: 0x3e00008  jr          $ra
    ctx->pc = 0x195860u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195860u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195868u;
    // 0x195868: 0x0  nop
    ctx->pc = 0x195868u;
    // NOP
    // 0x19586c: 0x0  nop
    ctx->pc = 0x19586cu;
    // NOP
    // 0x195870: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195878: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x195878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x19587c: 0x8f82bb70  lw          $v0, -0x4490($gp)
    ctx->pc = 0x19587cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949744)));
    // 0x195880: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x195880u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195884: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x195884u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x195888: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19588c: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x19588cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195890: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x195890u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195894: 0x0  nop
    ctx->pc = 0x195894u;
    // NOP
    // 0x195898: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x195898u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19589c: 0x45010027  bc1t        . + 4 + (0x27 << 2)
    ctx->pc = 0x19589Cu;
    {
        const bool branch_taken_0x19589c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19589c) {
            ctx->pc = 0x19593Cu;
            goto label_19593c;
        }
    }
    ctx->pc = 0x1958A4u;
    // 0x1958a4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1958a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1958a8: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x1958a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1958ac: 0xc7a0001c  lwc1        $f0, 0x1C($sp)
    ctx->pc = 0x1958acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1958b0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1958b0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1958b4: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x1958b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
    // 0x1958b8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x1958b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1958bc: 0xc78180b0  lwc1        $f1, -0x7F50($gp)
    ctx->pc = 0x1958bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934704)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1958c0: 0xc44000bc  lwc1        $f0, 0xBC($v0)
    ctx->pc = 0x1958c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1958c4: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x1958c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x1958c8: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x1958c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x1958cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1958ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1958d0: 0x0  nop
    ctx->pc = 0x1958d0u;
    // NOP
    // 0x1958d4: 0x46010302  mul.s       $f12, $f0, $f1
    ctx->pc = 0x1958d4u;
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x1958d8: 0xc0c38f0  jal         func_30E3C0
    ctx->pc = 0x1958D8u;
    SET_GPR_U32(ctx, 31, 0x1958E0u);
    ctx->pc = 0x30E3C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E3C0u, 0x1958D8u, 0x1958E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1958E0u;
label_1958e0:
    // 0x1958e0: 0xc7838200  lwc1        $f3, -0x7E00($gp)
    ctx->pc = 0x1958e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935040)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x1958e4: 0xc7828204  lwc1        $f2, -0x7DFC($gp)
    ctx->pc = 0x1958e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935044)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1958e8: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x1958e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x1958ec: 0x0  nop
    ctx->pc = 0x1958ecu;
    // NOP
    // 0x1958f0: 0x46020818  adda.s      $f1, $f2
    ctx->pc = 0x1958f0u;
    FPU_SET_ACC(ctx, FPU_ADD_S(ctx->f[1], ctx->f[2]));
    // 0x1958f4: 0x4600181c  madd.s      $f0, $f3, $f0
    ctx->pc = 0x1958f4u;
    ctx->f[0] = FPU_ADD_S(ctx->f_acc, FPU_MUL_S(ctx->f[3], ctx->f[0]));
    // 0x1958f8: 0xe7a00018  swc1        $f0, 0x18($sp)
    ctx->pc = 0x1958f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
    // 0x1958fc: 0xc7a1001c  lwc1        $f1, 0x1C($sp)
    ctx->pc = 0x1958fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195900: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x195900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x195904: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x195904u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x195908: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x195908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x19590c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x19590cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195910: 0xc44100bc  lwc1        $f1, 0xBC($v0)
    ctx->pc = 0x195910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x195914: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x195914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x195918: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195918u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19591c: 0x0  nop
    ctx->pc = 0x19591cu;
    // NOP
    // 0x195920: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x195920u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x195924: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x195924u;
    {
        const bool branch_taken_0x195924 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x195924) {
            ctx->pc = 0x19593Cu;
            goto label_19593c;
        }
    }
    ctx->pc = 0x19592Cu;
    // 0x19592c: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x19592cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x195930: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x195930u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x195934: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195938: 0xe44000bc  swc1        $f0, 0xBC($v0)
    ctx->pc = 0x195938u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 188), bits); }
label_19593c:
    // 0x19593c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19593cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195940: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x195940u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195944: 0xc066624  jal         func_199890
    ctx->pc = 0x195944u;
    SET_GPR_U32(ctx, 31, 0x19594Cu);
    ctx->pc = 0x199890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199890u, 0x195944u, 0x19594Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19594Cu;
label_19594c:
    // 0x19594c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19594cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195950: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x195950u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195954: 0xc066648  jal         func_199920
    ctx->pc = 0x195954u;
    SET_GPR_U32(ctx, 31, 0x19595Cu);
    ctx->pc = 0x199920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199920u, 0x195954u, 0x19595Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19595Cu;
label_19595c:
    // 0x19595c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19595cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195960: 0xc7ac001c  lwc1        $f12, 0x1C($sp)
    ctx->pc = 0x195960u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x195964: 0xc066734  jal         func_199CD0
    ctx->pc = 0x195964u;
    SET_GPR_U32(ctx, 31, 0x19596Cu);
    ctx->pc = 0x199CD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199CD0u, 0x195964u, 0x19596Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19596Cu;
label_19596c:
    // 0x19596c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x19596cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195970: 0xc064cb0  jal         func_1932C0
    ctx->pc = 0x195970u;
    SET_GPR_U32(ctx, 31, 0x195978u);
    ctx->pc = 0x1932C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1932C0u, 0x195970u, 0x195978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195978u;
label_195978:
    // 0x195978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19597c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x19597cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195980: 0x3e00008  jr          $ra
    ctx->pc = 0x195980u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195980u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195988u;
    // 0x195988: 0x0  nop
    ctx->pc = 0x195988u;
    // NOP
    // 0x19598c: 0x0  nop
    ctx->pc = 0x19598cu;
    // NOP
    // 0x195990: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x195990u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x195994: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x195994u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x195998: 0x3e00008  jr          $ra
    ctx->pc = 0x195998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1959A0u;
    // 0x1959a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1959a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1959a4: 0x3c02004e  lui         $v0, 0x4E
    ctx->pc = 0x1959a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)78 << 16));
    // 0x1959a8: 0x24425ca0  addiu       $v0, $v0, 0x5CA0
    ctx->pc = 0x1959a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 23712));
    // 0x1959ac: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x1959acu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1959b0: 0x3e00008  jr          $ra
    ctx->pc = 0x1959B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1959B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1959B8u;
    // 0x1959b8: 0x0  nop
    ctx->pc = 0x1959b8u;
    // NOP
    // 0x1959bc: 0x0  nop
    ctx->pc = 0x1959bcu;
    // NOP
    // 0x1959c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1959c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1959c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1959c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1959c8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1959c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1959cc: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x1959ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x1959d0: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x1959d0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1959d4: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1959D4u;
    {
        const bool branch_taken_0x1959d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1959d4) {
            ctx->pc = 0x1959ECu;
            goto label_1959ec;
        }
    }
    ctx->pc = 0x1959DCu;
    // 0x1959dc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1959dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1959e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1959e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1959e4: 0xc066768  jal         func_199DA0
    ctx->pc = 0x1959E4u;
    SET_GPR_U32(ctx, 31, 0x1959ECu);
    ctx->pc = 0x199DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199DA0u, 0x1959E4u, 0x1959ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1959ECu;
label_1959ec:
    // 0x1959ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1959ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1959f0: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1959f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1959f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1959F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1959F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1959FCu;
    // 0x1959fc: 0x0  nop
    ctx->pc = 0x1959fcu;
    // NOP
    // 0x195a00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195a04: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195a08: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x195a0c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x195a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x195a10: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x195a10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195a14: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195A14u;
    {
        const bool branch_taken_0x195a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a14) {
            ctx->pc = 0x195A2Cu;
            goto label_195a2c;
        }
    }
    ctx->pc = 0x195A1Cu;
    // 0x195a1c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195a20: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195a20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195a24: 0xc066768  jal         func_199DA0
    ctx->pc = 0x195A24u;
    SET_GPR_U32(ctx, 31, 0x195A2Cu);
    ctx->pc = 0x199DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199DA0u, 0x195A24u, 0x195A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A2Cu;
label_195a2c:
    // 0x195a2c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195a2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a30: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195a34: 0x3e00008  jr          $ra
    ctx->pc = 0x195A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A3Cu;
    // 0x195a3c: 0x0  nop
    ctx->pc = 0x195a3cu;
    // NOP
    // 0x195a40: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x195a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x195a44: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x195a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x195a48: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x195a48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x195a4c: 0xa3a50020  sb          $a1, 0x20($sp)
    ctx->pc = 0x195a4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 32), (uint8_t)GPR_U32(ctx, 5));
    // 0x195a50: 0x93a30020  lbu         $v1, 0x20($sp)
    ctx->pc = 0x195a50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195a54: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x195A54u;
    {
        const bool branch_taken_0x195a54 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a54) {
            ctx->pc = 0x195A6Cu;
            goto label_195a6c;
        }
    }
    ctx->pc = 0x195A5Cu;
    // 0x195a5c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x195a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195a60: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195a60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195a64: 0xc066768  jal         func_199DA0
    ctx->pc = 0x195A64u;
    SET_GPR_U32(ctx, 31, 0x195A6Cu);
    ctx->pc = 0x199DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199DA0u, 0x195A64u, 0x195A6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195A6Cu;
label_195a6c:
    // 0x195a6c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x195a6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195a70: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x195a70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x195a74: 0x3e00008  jr          $ra
    ctx->pc = 0x195A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195A74u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195A7Cu;
    // 0x195a7c: 0x0  nop
    ctx->pc = 0x195a7cu;
    // NOP
    // 0x195a80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x195a80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x195a84: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x195a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x195a88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x195a88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x195a8c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x195a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x195a90: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x195a90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
    // 0x195a94: 0x93a30030  lbu         $v1, 0x30($sp)
    ctx->pc = 0x195a94u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x195a98: 0x14600015  bnez        $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x195A98u;
    {
        const bool branch_taken_0x195a98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x195a98) {
            ctx->pc = 0x195AF0u;
            goto label_195af0;
        }
    }
    ctx->pc = 0x195AA0u;
    // 0x195aa0: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195aa4: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x195aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x195aa8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195aac: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x195AACu;
    SET_GPR_U32(ctx, 31, 0x195AB4u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x195AACu, 0x195AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AB4u;
label_195ab4:
    // 0x195ab4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195ab4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ab8: 0xc067074  jal         func_19C1D0
    ctx->pc = 0x195AB8u;
    SET_GPR_U32(ctx, 31, 0x195AC0u);
    ctx->pc = 0x19C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1D0u, 0x195AB8u, 0x195AC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AC0u;
label_195ac0:
    // 0x195ac0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x195AC0u;
    {
        const bool branch_taken_0x195ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ac0) {
            ctx->pc = 0x195AF0u;
            goto label_195af0;
        }
    }
    ctx->pc = 0x195AC8u;
    // 0x195ac8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195acc: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x195accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x195ad0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ad4: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x195AD4u;
    SET_GPR_U32(ctx, 31, 0x195ADCu);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x195AD4u, 0x195ADCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195ADCu;
label_195adc:
    // 0x195adc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195adcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195ae0: 0xc067074  jal         func_19C1D0
    ctx->pc = 0x195AE0u;
    SET_GPR_U32(ctx, 31, 0x195AE8u);
    ctx->pc = 0x19C1D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1D0u, 0x195AE0u, 0x195AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195AE8u;
label_195ae8:
    // 0x195ae8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x195AE8u;
    {
        const bool branch_taken_0x195ae8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x195ae8) {
            ctx->pc = 0x195AF8u;
            goto label_195af8;
        }
    }
    ctx->pc = 0x195AF0u;
label_195af0:
    // 0x195af0: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x195AF0u;
    {
        const bool branch_taken_0x195af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x195af0) {
            ctx->pc = 0x195BC8u;
            goto label_195bc8;
        }
    }
    ctx->pc = 0x195AF8u;
label_195af8:
    // 0x195af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195afc: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x195afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x195b00: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195b00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195b04: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x195B04u;
    SET_GPR_U32(ctx, 31, 0x195B0Cu);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x195B04u, 0x195B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B0Cu;
label_195b0c:
    // 0x195b0c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x195b10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b14: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x195B14u;
    SET_GPR_U32(ctx, 31, 0x195B1Cu);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x195B14u, 0x195B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B1Cu;
label_195b1c:
    // 0x195b1c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195b1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b20: 0xc06479c  jal         func_191E70
    ctx->pc = 0x195B20u;
    SET_GPR_U32(ctx, 31, 0x195B28u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x195B20u, 0x195B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B28u;
label_195b28:
    // 0x195b28: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195b28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b30: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195b30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195b34: 0x2405002d  addiu       $a1, $zero, 0x2D
    ctx->pc = 0x195b34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x195b38: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195B38u;
    SET_GPR_U32(ctx, 31, 0x195B40u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195B38u, 0x195B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B40u;
label_195b40:
    // 0x195b40: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x195b40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195b44: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195b44u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195b48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195b48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b4c: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x195B4Cu;
    SET_GPR_U32(ctx, 31, 0x195B54u);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x195B4Cu, 0x195B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B54u;
label_195b54:
    // 0x195b54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195b54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b58: 0xc06479c  jal         func_191E70
    ctx->pc = 0x195B58u;
    SET_GPR_U32(ctx, 31, 0x195B60u);
    ctx->pc = 0x191E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191E70u, 0x195B58u, 0x195B60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B60u;
label_195b60:
    // 0x195b60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x195b60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b64: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b68: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x195b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x195b6c: 0x2405002c  addiu       $a1, $zero, 0x2C
    ctx->pc = 0x195b6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x195b70: 0xc05612c  jal         func_1584B0
    ctx->pc = 0x195B70u;
    SET_GPR_U32(ctx, 31, 0x195B78u);
    ctx->pc = 0x1584B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584B0u, 0x195B70u, 0x195B78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B78u;
label_195b78:
    // 0x195b78: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x195b78u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x195b7c: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x195b7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x195b80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x195b80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195b84: 0xc08c434  jal         func_2310D0
    ctx->pc = 0x195B84u;
    SET_GPR_U32(ctx, 31, 0x195B8Cu);
    ctx->pc = 0x2310D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2310D0u, 0x195B84u, 0x195B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195B8Cu;
label_195b8c:
    // 0x195b8c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b90: 0xac4000b8  sw          $zero, 0xB8($v0)
    ctx->pc = 0x195b90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 184), GPR_U32(ctx, 0));
    // 0x195b94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x195b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195b98: 0x244400c4  addiu       $a0, $v0, 0xC4
    ctx->pc = 0x195b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 196));
    // 0x195b9c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x195b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x195ba0: 0xc0656f8  jal         func_195BE0
    ctx->pc = 0x195BA0u;
    SET_GPR_U32(ctx, 31, 0x195BA8u);
    ctx->pc = 0x195BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x195BE0u, 0x195BA0u, 0x195BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BA8u;
label_195ba8:
    // 0x195ba8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x195ba8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x195bac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x195bacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x195bb0: 0xc067068  jal         func_19C1A0
    ctx->pc = 0x195BB0u;
    SET_GPR_U32(ctx, 31, 0x195BB8u);
    ctx->pc = 0x19C1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19C1A0u, 0x195BB0u, 0x195BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BB8u;
label_195bb8:
    // 0x195bb8: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x195bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x195bbc: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x195bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x195bc0: 0xc066768  jal         func_199DA0
    ctx->pc = 0x195BC0u;
    SET_GPR_U32(ctx, 31, 0x195BC8u);
    ctx->pc = 0x199DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x199DA0u, 0x195BC0u, 0x195BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x195BC8u;
label_195bc8:
    // 0x195bc8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x195bc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x195bcc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x195bccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x195bd0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x195bd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x195bd4: 0x3e00008  jr          $ra
    ctx->pc = 0x195BD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x195BD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x195BDCu;
    // 0x195bdc: 0x0  nop
    ctx->pc = 0x195bdcu;
    // NOP
    ctx->pc = 0x195be0u;
}
