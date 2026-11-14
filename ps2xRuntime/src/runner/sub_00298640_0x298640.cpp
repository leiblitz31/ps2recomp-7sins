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

// Function: sub_00298640
// Address: 0x298640 - 0x2988a0
void sub_00298640_0x298640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298640_0x298640");
#endif

    switch (ctx->pc) {
        case 0x29865cu: goto label_29865c;
        case 0x29867cu: goto label_29867c;
        case 0x2986c4u: goto label_2986c4;
        case 0x298720u: goto label_298720;
        case 0x298730u: goto label_298730;
        case 0x298750u: goto label_298750;
        case 0x29878cu: goto label_29878c;
        case 0x2987ccu: goto label_2987cc;
        case 0x2987dcu: goto label_2987dc;
        case 0x29882cu: goto label_29882c;
        case 0x29887cu: goto label_29887c;
        default: break;
    }

    ctx->pc = 0x298640u;

    // 0x298640: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x298640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x298644: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x298644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x298648: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x298648u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x29864c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x29864cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298650: 0x2405001f  addiu       $a1, $zero, 0x1F
    ctx->pc = 0x298650u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x298654: 0xc091174  jal         func_2445D0
    ctx->pc = 0x298654u;
    SET_GPR_U32(ctx, 31, 0x29865Cu);
    ctx->pc = 0x2445D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2445D0u, 0x298654u, 0x29865Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29865Cu;
label_29865c:
    // 0x29865c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x29865cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x298660: 0x246360e0  addiu       $v1, $v1, 0x60E0
    ctx->pc = 0x298660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24800));
    // 0x298664: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298668: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x298668u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29866c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29866cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298670: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x298670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x298674: 0xc041b48  jal         func_106D20
    ctx->pc = 0x298674u;
    SET_GPR_U32(ctx, 31, 0x29867Cu);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x298674u, 0x29867Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29867Cu;
label_29867c:
    // 0x29867c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29867cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298680: 0xac400040  sw          $zero, 0x40($v0)
    ctx->pc = 0x298680u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 64), GPR_U32(ctx, 0));
    // 0x298684: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298684u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298688: 0xa0400044  sb          $zero, 0x44($v0)
    ctx->pc = 0x298688u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x29868c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x29868cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298690: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298694: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x298694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x298698: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29869c: 0xa040004c  sb          $zero, 0x4C($v0)
    ctx->pc = 0x29869cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x2986a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2986a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986a4: 0xa040004d  sb          $zero, 0x4D($v0)
    ctx->pc = 0x2986a4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2986a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2986a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986ac: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x2986acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
    // 0x2986b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2986b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986b4: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x2986b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x2986b8: 0x2785a308  addiu       $a1, $gp, -0x5CF8
    ctx->pc = 0x2986b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943496));
    // 0x2986bc: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2986BCu;
    SET_GPR_U32(ctx, 31, 0x2986C4u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2986BCu, 0x2986C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2986C4u;
label_2986c4:
    // 0x2986c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2986c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986c8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2986c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2986cc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2986ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2986d0: 0x3e00008  jr          $ra
    ctx->pc = 0x2986D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2986D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2986D8u;
    // 0x2986d8: 0x0  nop
    ctx->pc = 0x2986d8u;
    // NOP
    // 0x2986dc: 0x0  nop
    ctx->pc = 0x2986dcu;
    // NOP
    // 0x2986e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2986e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2986e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2986e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2986e8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2986e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2986ec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2986ecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2986f0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2986f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2986f4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2986F4u;
    {
        const bool branch_taken_0x2986f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2986f4) {
            ctx->pc = 0x298750u;
            goto label_298750;
        }
    }
    ctx->pc = 0x2986FCu;
    // 0x2986fc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x2986fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x298700: 0x246360e0  addiu       $v1, $v1, 0x60E0
    ctx->pc = 0x298700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24800));
    // 0x298704: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298704u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298708: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x298708u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x29870c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x29870cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298710: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x298710u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x298714: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x298714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298718: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x298718u;
    SET_GPR_U32(ctx, 31, 0x298720u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x298718u, 0x298720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298720u;
label_298720:
    // 0x298720: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x298720u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298724: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x298724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298728: 0xc091188  jal         func_244620
    ctx->pc = 0x298728u;
    SET_GPR_U32(ctx, 31, 0x298730u);
    ctx->pc = 0x244620u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244620u, 0x298728u, 0x298730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298730u;
label_298730:
    // 0x298730: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x298730u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298734: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x298734u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x298738: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x298738u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x29873c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29873Cu;
    {
        const bool branch_taken_0x29873c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x29873c) {
            ctx->pc = 0x298750u;
            goto label_298750;
        }
    }
    ctx->pc = 0x298744u;
    // 0x298744: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x298744u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298748: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x298748u;
    SET_GPR_U32(ctx, 31, 0x298750u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x298748u, 0x298750u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298750u;
label_298750:
    // 0x298750: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x298750u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298754: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x298754u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298758: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x298758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x29875c: 0x3e00008  jr          $ra
    ctx->pc = 0x29875Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29875Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298764u;
    // 0x298764: 0x0  nop
    ctx->pc = 0x298764u;
    // NOP
    // 0x298768: 0x0  nop
    ctx->pc = 0x298768u;
    // NOP
    // 0x29876c: 0x0  nop
    ctx->pc = 0x29876cu;
    // NOP
    // 0x298770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298774: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x298774u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x298778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x29877c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x29877cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x298780: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x298780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298784: 0xc0911a4  jal         func_244690
    ctx->pc = 0x298784u;
    SET_GPR_U32(ctx, 31, 0x29878Cu);
    ctx->pc = 0x244690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244690u, 0x298784u, 0x29878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29878Cu;
label_29878c:
    // 0x29878c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x29878cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x298790: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x298790u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298794: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x298794u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298798: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298798u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x29879c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29879cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2987a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2987A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2987A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2987A8u;
    // 0x2987a8: 0x0  nop
    ctx->pc = 0x2987a8u;
    // NOP
    // 0x2987ac: 0x0  nop
    ctx->pc = 0x2987acu;
    // NOP
    // 0x2987b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2987b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2987b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2987b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2987b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2987b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2987bc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x2987bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x2987c0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2987c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2987c4: 0xc0911bc  jal         func_2446F0
    ctx->pc = 0x2987C4u;
    SET_GPR_U32(ctx, 31, 0x2987CCu);
    ctx->pc = 0x2446F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2446F0u, 0x2987C4u, 0x2987CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987CCu;
label_2987cc:
    // 0x2987cc: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x2987ccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2987d0: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2987d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2987d4: 0xc0a62ac  jal         func_298AB0
    ctx->pc = 0x2987D4u;
    SET_GPR_U32(ctx, 31, 0x2987DCu);
    ctx->pc = 0x298AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298AB0u, 0x2987D4u, 0x2987DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2987DCu;
label_2987dc:
    // 0x2987dc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2987dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2987e0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2987e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2987e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2987e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2987e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2987e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2987ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2987ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2987ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2987F4u;
    // 0x2987f4: 0x0  nop
    ctx->pc = 0x2987f4u;
    // NOP
    // 0x2987f8: 0x0  nop
    ctx->pc = 0x2987f8u;
    // NOP
    // 0x2987fc: 0x0  nop
    ctx->pc = 0x2987fcu;
    // NOP
    // 0x298800: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x298800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x298804: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x298804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x298808: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x298808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x29880c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29880cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x298810: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x298810u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x298814: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x298814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x298818: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x298818u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x29881c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29881cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298820: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x298820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298824: 0xc0911dc  jal         func_244770
    ctx->pc = 0x298824u;
    SET_GPR_U32(ctx, 31, 0x29882Cu);
    ctx->pc = 0x244770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244770u, 0x298824u, 0x29882Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29882Cu;
label_29882c:
    // 0x29882c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x29882cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x298830: 0x324300ff  andi        $v1, $s2, 0xFF
    ctx->pc = 0x298830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x298834: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298838: 0x14620010  bne         $v1, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x298838u;
    {
        const bool branch_taken_0x298838 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298838) {
            ctx->pc = 0x29887Cu;
            goto label_29887c;
        }
    }
    ctx->pc = 0x298840u;
    // 0x298840: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298844: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x298844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x298848: 0x10020005  beq         $zero, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x298848u;
    {
        const bool branch_taken_0x298848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x298848) {
            ctx->pc = 0x298860u;
            goto label_298860;
        }
    }
    ctx->pc = 0x298850u;
    // 0x298850: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298854: 0x8c500008  lw          $s0, 0x8($v0)
    ctx->pc = 0x298854u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x298858: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x298858u;
    {
        const bool branch_taken_0x298858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298858) {
            ctx->pc = 0x298868u;
            goto label_298868;
        }
    }
    ctx->pc = 0x298860u;
label_298860:
    // 0x298860: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298864: 0x8c500000  lw          $s0, 0x0($v0)
    ctx->pc = 0x298864u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_298868:
    // 0x298868: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x298868u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29886c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x29886cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x298870: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x298870u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298874: 0xc0a6230  jal         func_2988C0
    ctx->pc = 0x298874u;
    SET_GPR_U32(ctx, 31, 0x29887Cu);
    ctx->pc = 0x2988C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2988C0u, 0x298874u, 0x29887Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29887Cu;
label_29887c:
    // 0x29887c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29887cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298880: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298880u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298884: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298884u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298888: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298888u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x29888c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29888cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298890: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x298890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x298894: 0x3e00008  jr          $ra
    ctx->pc = 0x298894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29889Cu;
    // 0x29889c: 0x0  nop
    ctx->pc = 0x29889cu;
    // NOP
    ctx->pc = 0x2988a0u;
}
