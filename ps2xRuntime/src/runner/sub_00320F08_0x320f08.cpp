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

// Function: sub_00320F08
// Address: 0x320f08 - 0x321200
void sub_00320F08_0x320f08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320F08_0x320f08");
#endif

    switch (ctx->pc) {
        case 0x320f08u: goto label_320f08;
        case 0x320f0cu: goto label_320f0c;
        case 0x320f10u: goto label_320f10;
        case 0x320f14u: goto label_320f14;
        case 0x320f18u: goto label_320f18;
        case 0x320f1cu: goto label_320f1c;
        case 0x320f20u: goto label_320f20;
        case 0x320f24u: goto label_320f24;
        case 0x320f28u: goto label_320f28;
        case 0x320f2cu: goto label_320f2c;
        case 0x320f30u: goto label_320f30;
        case 0x320f34u: goto label_320f34;
        case 0x320f38u: goto label_320f38;
        case 0x320f3cu: goto label_320f3c;
        case 0x320f40u: goto label_320f40;
        case 0x320f44u: goto label_320f44;
        case 0x320f48u: goto label_320f48;
        case 0x320f4cu: goto label_320f4c;
        case 0x320f50u: goto label_320f50;
        case 0x320f54u: goto label_320f54;
        case 0x320f58u: goto label_320f58;
        case 0x320f5cu: goto label_320f5c;
        case 0x320f60u: goto label_320f60;
        case 0x320f64u: goto label_320f64;
        case 0x320f68u: goto label_320f68;
        case 0x320f6cu: goto label_320f6c;
        case 0x320f70u: goto label_320f70;
        case 0x320f74u: goto label_320f74;
        case 0x320f78u: goto label_320f78;
        case 0x320f7cu: goto label_320f7c;
        case 0x320f80u: goto label_320f80;
        case 0x320f84u: goto label_320f84;
        case 0x320f88u: goto label_320f88;
        case 0x320f8cu: goto label_320f8c;
        case 0x320f90u: goto label_320f90;
        case 0x320f94u: goto label_320f94;
        case 0x320f98u: goto label_320f98;
        case 0x320f9cu: goto label_320f9c;
        case 0x320fa0u: goto label_320fa0;
        case 0x320fa4u: goto label_320fa4;
        case 0x320fa8u: goto label_320fa8;
        case 0x320facu: goto label_320fac;
        case 0x320fb0u: goto label_320fb0;
        case 0x320fb4u: goto label_320fb4;
        case 0x320fb8u: goto label_320fb8;
        case 0x320fbcu: goto label_320fbc;
        case 0x320fc0u: goto label_320fc0;
        case 0x320fc4u: goto label_320fc4;
        case 0x320fc8u: goto label_320fc8;
        case 0x320fccu: goto label_320fcc;
        case 0x320fd0u: goto label_320fd0;
        case 0x320fd4u: goto label_320fd4;
        case 0x320fd8u: goto label_320fd8;
        case 0x320fdcu: goto label_320fdc;
        case 0x320fe0u: goto label_320fe0;
        case 0x320fe4u: goto label_320fe4;
        case 0x320fe8u: goto label_320fe8;
        case 0x320fecu: goto label_320fec;
        case 0x320ff0u: goto label_320ff0;
        case 0x320ff4u: goto label_320ff4;
        case 0x320ff8u: goto label_320ff8;
        case 0x320ffcu: goto label_320ffc;
        case 0x321000u: goto label_321000;
        case 0x321004u: goto label_321004;
        case 0x321008u: goto label_321008;
        case 0x32100cu: goto label_32100c;
        case 0x321010u: goto label_321010;
        case 0x321014u: goto label_321014;
        case 0x321018u: goto label_321018;
        case 0x32101cu: goto label_32101c;
        case 0x321020u: goto label_321020;
        case 0x321024u: goto label_321024;
        case 0x321028u: goto label_321028;
        case 0x32102cu: goto label_32102c;
        case 0x321030u: goto label_321030;
        case 0x321034u: goto label_321034;
        case 0x321038u: goto label_321038;
        case 0x32103cu: goto label_32103c;
        case 0x321040u: goto label_321040;
        case 0x321044u: goto label_321044;
        case 0x321048u: goto label_321048;
        case 0x32104cu: goto label_32104c;
        case 0x321050u: goto label_321050;
        case 0x321054u: goto label_321054;
        case 0x321058u: goto label_321058;
        case 0x32105cu: goto label_32105c;
        case 0x321060u: goto label_321060;
        case 0x321064u: goto label_321064;
        case 0x321068u: goto label_321068;
        case 0x32106cu: goto label_32106c;
        case 0x321070u: goto label_321070;
        case 0x321074u: goto label_321074;
        case 0x321078u: goto label_321078;
        case 0x32107cu: goto label_32107c;
        case 0x321080u: goto label_321080;
        case 0x321084u: goto label_321084;
        case 0x321088u: goto label_321088;
        case 0x32108cu: goto label_32108c;
        case 0x321090u: goto label_321090;
        case 0x321094u: goto label_321094;
        case 0x321098u: goto label_321098;
        case 0x32109cu: goto label_32109c;
        case 0x3210a0u: goto label_3210a0;
        case 0x3210a4u: goto label_3210a4;
        case 0x3210a8u: goto label_3210a8;
        case 0x3210acu: goto label_3210ac;
        case 0x3210b0u: goto label_3210b0;
        case 0x3210b4u: goto label_3210b4;
        case 0x3210b8u: goto label_3210b8;
        case 0x3210bcu: goto label_3210bc;
        case 0x3210c0u: goto label_3210c0;
        case 0x3210c4u: goto label_3210c4;
        case 0x3210c8u: goto label_3210c8;
        case 0x3210ccu: goto label_3210cc;
        case 0x3210d0u: goto label_3210d0;
        case 0x3210d4u: goto label_3210d4;
        case 0x3210d8u: goto label_3210d8;
        case 0x3210dcu: goto label_3210dc;
        case 0x3210e0u: goto label_3210e0;
        case 0x3210e4u: goto label_3210e4;
        case 0x3210e8u: goto label_3210e8;
        case 0x3210ecu: goto label_3210ec;
        case 0x3210f0u: goto label_3210f0;
        case 0x3210f4u: goto label_3210f4;
        case 0x3210f8u: goto label_3210f8;
        case 0x3210fcu: goto label_3210fc;
        case 0x321100u: goto label_321100;
        case 0x321104u: goto label_321104;
        case 0x321108u: goto label_321108;
        case 0x32110cu: goto label_32110c;
        case 0x321110u: goto label_321110;
        case 0x321114u: goto label_321114;
        case 0x321118u: goto label_321118;
        case 0x32111cu: goto label_32111c;
        case 0x321120u: goto label_321120;
        case 0x321124u: goto label_321124;
        case 0x321128u: goto label_321128;
        case 0x32112cu: goto label_32112c;
        case 0x321130u: goto label_321130;
        case 0x321134u: goto label_321134;
        case 0x321138u: goto label_321138;
        case 0x32113cu: goto label_32113c;
        case 0x321140u: goto label_321140;
        case 0x321144u: goto label_321144;
        case 0x321148u: goto label_321148;
        case 0x32114cu: goto label_32114c;
        case 0x321150u: goto label_321150;
        case 0x321154u: goto label_321154;
        case 0x321158u: goto label_321158;
        case 0x32115cu: goto label_32115c;
        case 0x321160u: goto label_321160;
        case 0x321164u: goto label_321164;
        case 0x321168u: goto label_321168;
        case 0x32116cu: goto label_32116c;
        case 0x321170u: goto label_321170;
        case 0x321174u: goto label_321174;
        case 0x321178u: goto label_321178;
        case 0x32117cu: goto label_32117c;
        case 0x321180u: goto label_321180;
        case 0x321184u: goto label_321184;
        case 0x321188u: goto label_321188;
        case 0x32118cu: goto label_32118c;
        case 0x321190u: goto label_321190;
        case 0x321194u: goto label_321194;
        case 0x321198u: goto label_321198;
        case 0x32119cu: goto label_32119c;
        case 0x3211a0u: goto label_3211a0;
        case 0x3211a4u: goto label_3211a4;
        case 0x3211a8u: goto label_3211a8;
        case 0x3211acu: goto label_3211ac;
        case 0x3211b0u: goto label_3211b0;
        case 0x3211b4u: goto label_3211b4;
        case 0x3211b8u: goto label_3211b8;
        case 0x3211bcu: goto label_3211bc;
        case 0x3211c0u: goto label_3211c0;
        case 0x3211c4u: goto label_3211c4;
        case 0x3211c8u: goto label_3211c8;
        case 0x3211ccu: goto label_3211cc;
        case 0x3211d0u: goto label_3211d0;
        case 0x3211d4u: goto label_3211d4;
        case 0x3211d8u: goto label_3211d8;
        case 0x3211dcu: goto label_3211dc;
        case 0x3211e0u: goto label_3211e0;
        case 0x3211e4u: goto label_3211e4;
        case 0x3211e8u: goto label_3211e8;
        case 0x3211ecu: goto label_3211ec;
        case 0x3211f0u: goto label_3211f0;
        case 0x3211f4u: goto label_3211f4;
        case 0x3211f8u: goto label_3211f8;
        case 0x3211fcu: goto label_3211fc;
        default: break;
    }

    ctx->pc = 0x320f08u;

label_320f08:
    // 0x320f08: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x320f08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_320f0c:
    // 0x320f0c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x320f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_320f10:
    // 0x320f10: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x320f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_320f14:
    // 0x320f14: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x320f14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_320f18:
    // 0x320f18: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x320f18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_320f1c:
    // 0x320f1c: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x320f1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_320f20:
    // 0x320f20: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x320f20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_320f24:
    // 0x320f24: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x320f24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_320f28:
    // 0x320f28: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x320f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_320f2c:
    // 0x320f2c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x320f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_320f30:
    // 0x320f30: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x320f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_320f34:
    // 0x320f34: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x320f34u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_320f38:
    // 0x320f38: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x320f38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_320f3c:
    // 0x320f3c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x320f3cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_320f40:
    // 0x320f40: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x320f40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_320f44:
    // 0x320f44: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x320f44u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_320f48:
    // 0x320f48: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x320f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_320f4c:
    // 0x320f4c: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x320f4cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320f50:
    // 0x320f50: 0x8f84bce4  lw          $a0, -0x431C($gp)
    ctx->pc = 0x320f50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950116)));
label_320f54:
    // 0x320f54: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x320f54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_320f58:
    // 0x320f58: 0x8ec20118  lw          $v0, 0x118($s6)
    ctx->pc = 0x320f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 280)));
label_320f5c:
    // 0x320f5c: 0x40f809  jalr        $v0
label_320f60:
    if (ctx->pc == 0x320F60u) {
        ctx->pc = 0x320F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F5Cu;
        // 0x320f60: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F64u;
        goto label_320f64;
    }
    ctx->pc = 0x320F5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320F64u);
        ctx->pc = 0x320F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F5Cu;
        // 0x320f60: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F5Cu, 0x320F64u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320F64u;
label_320f64:
    // 0x320f64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x320f64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320f68:
    // 0x320f68: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x320f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_320f6c:
    // 0x320f6c: 0xc0ef372  jal         func_3BCDC8
label_320f70:
    if (ctx->pc == 0x320F70u) {
        ctx->pc = 0x320F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F6Cu;
        // 0x320f70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F74u;
        goto label_320f74;
    }
    ctx->pc = 0x320F6Cu;
    SET_GPR_U32(ctx, 31, 0x320F74u);
    ctx->pc = 0x320F70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x320F6Cu;
    // 0x320f70: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BCDC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BCDC8u, 0x320F6Cu, 0x320F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x320F74u;
label_320f74:
    // 0x320f74: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x320f74u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_320f78:
    // 0x320f78: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x320f78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
label_320f7c:
    // 0x320f7c: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x320f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_320f80:
    // 0x320f80: 0xae550004  sw          $s5, 0x4($s2)
    ctx->pc = 0x320f80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 21));
label_320f84:
    // 0x320f84: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_320f88:
    if (ctx->pc == 0x320F88u) {
        ctx->pc = 0x320F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F84u;
        // 0x320f88: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320F8Cu;
        goto label_320f8c;
    }
    ctx->pc = 0x320F84u;
    {
        const bool branch_taken_0x320f84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F84u;
        // 0x320f88: 0xae400014  sw          $zero, 0x14($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320f84) {
            ctx->pc = 0x320FC0u;
            goto label_320fc0;
        }
    }
    ctx->pc = 0x320F8Cu;
label_320f8c:
    // 0x320f8c: 0x8ec20108  lw          $v0, 0x108($s6)
    ctx->pc = 0x320f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 264)));
label_320f90:
    // 0x320f90: 0x152180  sll         $a0, $s5, 6
    ctx->pc = 0x320f90u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 6));
label_320f94:
    // 0x320f94: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x320f94u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_320f98:
    // 0x320f98: 0x3484000f  ori         $a0, $a0, 0xF
    ctx->pc = 0x320f98u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)15);
label_320f9c:
    // 0x320f9c: 0x40f809  jalr        $v0
label_320fa0:
    if (ctx->pc == 0x320FA0u) {
        ctx->pc = 0x320FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F9Cu;
        // 0x320fa0: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FA4u;
        goto label_320fa4;
    }
    ctx->pc = 0x320F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320FA4u);
        ctx->pc = 0x320FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320F9Cu;
        // 0x320fa0: 0x34a5011e  ori         $a1, $a1, 0x11E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320F9Cu, 0x320FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320FA4u;
label_320fa4:
    // 0x320fa4: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x320fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_320fa8:
    // 0x320fa8: 0x2444000f  addiu       $a0, $v0, 0xF
    ctx->pc = 0x320fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_320fac:
    // 0x320fac: 0x3463fff0  ori         $v1, $v1, 0xFFF0
    ctx->pc = 0x320facu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65520);
label_320fb0:
    // 0x320fb0: 0xae42000c  sw          $v0, 0xC($s2)
    ctx->pc = 0x320fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
label_320fb4:
    // 0x320fb4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x320fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_320fb8:
    // 0x320fb8: 0x10000003  b           . + 4 + (0x3 << 2)
label_320fbc:
    if (ctx->pc == 0x320FBCu) {
        ctx->pc = 0x320FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FB8u;
        // 0x320fbc: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FC0u;
        goto label_320fc0;
    }
    ctx->pc = 0x320FB8u;
    {
        const bool branch_taken_0x320fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x320FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FB8u;
        // 0x320fbc: 0xae440008  sw          $a0, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fb8) {
            ctx->pc = 0x320FC8u;
            goto label_320fc8;
        }
    }
    ctx->pc = 0x320FC0u;
label_320fc0:
    // 0x320fc0: 0xae400008  sw          $zero, 0x8($s2)
    ctx->pc = 0x320fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 0));
label_320fc4:
    // 0x320fc4: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x320fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_320fc8:
    // 0x320fc8: 0x26e3e880  addiu       $v1, $s7, -0x1780
    ctx->pc = 0x320fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_320fcc:
    // 0x320fcc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x320fccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_320fd0:
    // 0x320fd0: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x320fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_320fd4:
    // 0x320fd4: 0x34a5011e  ori         $a1, $a1, 0x11E
    ctx->pc = 0x320fd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)286);
label_320fd8:
    // 0x320fd8: 0x40f809  jalr        $v0
label_320fdc:
    if (ctx->pc == 0x320FDCu) {
        ctx->pc = 0x320FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FD8u;
        // 0x320fdc: 0x152100  sll         $a0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FE0u;
        goto label_320fe0;
    }
    ctx->pc = 0x320FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x320FE0u);
        ctx->pc = 0x320FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FD8u;
        // 0x320fdc: 0x152100  sll         $a0, $s5, 4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320FD8u, 0x320FE0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x320FE0u;
label_320fe0:
    // 0x320fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x320fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320fe4:
    // 0x320fe4: 0x1aa00078  blez        $s5, . + 4 + (0x78 << 2)
label_320fe8:
    if (ctx->pc == 0x320FE8u) {
        ctx->pc = 0x320FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FE4u;
        // 0x320fe8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x320FECu;
        goto label_320fec;
    }
    ctx->pc = 0x320FE4u;
    {
        const bool branch_taken_0x320fe4 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x320FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320FE4u;
        // 0x320fe8: 0xae420010  sw          $v0, 0x10($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x320fe4) {
            ctx->pc = 0x3211C8u;
            goto label_3211c8;
        }
    }
    ctx->pc = 0x320FECu;
label_320fec:
    // 0x320fec: 0x40582d  daddu       $t3, $v0, $zero
    ctx->pc = 0x320fecu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_320ff0:
    // 0x320ff0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x320ff0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_320ff4:
    // 0x320ff4: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x320ff4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_320ff8:
    // 0x320ff8: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x320ff8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_320ffc:
    // 0x320ffc: 0x160202d  daddu       $a0, $t3, $zero
    ctx->pc = 0x320ffcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_321000:
    // 0x321000: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x321000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_321004:
    // 0x321004: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x321004u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_321008:
    // 0x321008: 0x1aa00024  blez        $s5, . + 4 + (0x24 << 2)
label_32100c:
    if (ctx->pc == 0x32100Cu) {
        ctx->pc = 0x32100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321008u;
        // 0x32100c: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321010u;
        goto label_321010;
    }
    ctx->pc = 0x321008u;
    {
        const bool branch_taken_0x321008 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x32100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321008u;
        // 0x32100c: 0x32a30003  andi        $v1, $s5, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321008) {
            ctx->pc = 0x32109Cu;
            goto label_32109c;
        }
    }
    ctx->pc = 0x321010u;
label_321010:
    // 0x321010: 0x10600033  beqz        $v1, . + 4 + (0x33 << 2)
label_321014:
    if (ctx->pc == 0x321014u) {
        ctx->pc = 0x321014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321010u;
        // 0x321014: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321018u;
        goto label_321018;
    }
    ctx->pc = 0x321010u;
    {
        const bool branch_taken_0x321010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x321014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321010u;
        // 0x321014: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321010) {
            ctx->pc = 0x3210E0u;
            goto label_3210e0;
        }
    }
    ctx->pc = 0x321018u;
label_321018:
    // 0x321018: 0x14400020  bnez        $v0, . + 4 + (0x20 << 2)
label_32101c:
    if (ctx->pc == 0x32101Cu) {
        ctx->pc = 0x32101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321018u;
        // 0x32101c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x321020u;
        goto label_321020;
    }
    ctx->pc = 0x321018u;
    {
        const bool branch_taken_0x321018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321018u;
        // 0x32101c: 0x28620003  slti        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x321018) {
            ctx->pc = 0x32109Cu;
            goto label_32109c;
        }
    }
    ctx->pc = 0x321020u;
label_321020:
    // 0x321020: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_321024:
    if (ctx->pc == 0x321024u) {
        ctx->pc = 0x321028u;
        goto label_321028;
    }
    ctx->pc = 0x321020u;
    {
        const bool branch_taken_0x321020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x321020) {
            ctx->pc = 0x321060u;
            goto label_321060;
        }
    }
    ctx->pc = 0x321028u;
label_321028:
    // 0x321028: 0x11200003  beqz        $t1, . + 4 + (0x3 << 2)
label_32102c:
    if (ctx->pc == 0x32102Cu) {
        ctx->pc = 0x32102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321028u;
        // 0x32102c: 0xad60000c  sw          $zero, 0xC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321030u;
        goto label_321030;
    }
    ctx->pc = 0x321028u;
    {
        const bool branch_taken_0x321028 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x32102Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321028u;
        // 0x32102c: 0xad60000c  sw          $zero, 0xC($t3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 11), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321028) {
            ctx->pc = 0x321038u;
            goto label_321038;
        }
    }
    ctx->pc = 0x321030u;
label_321030:
    // 0x321030: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x321030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_321034:
    // 0x321034: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x321034u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
label_321038:
    // 0x321038: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x321038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_32103c:
    // 0x32103c: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
label_321040:
    if (ctx->pc == 0x321040u) {
        ctx->pc = 0x321040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32103Cu;
        // 0x321040: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321044u;
        goto label_321044;
    }
    ctx->pc = 0x32103Cu;
    {
        const bool branch_taken_0x32103c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x321040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32103Cu;
        // 0x321040: 0xac600004  sw          $zero, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32103c) {
            ctx->pc = 0x32104Cu;
            goto label_32104c;
        }
    }
    ctx->pc = 0x321044u;
label_321044:
    // 0x321044: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x321044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_321048:
    // 0x321048: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x321048u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_32104c:
    // 0x32104c: 0x24c80004  addiu       $t0, $a2, 0x4
    ctx->pc = 0x32104cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_321050:
    // 0x321050: 0x25270004  addiu       $a3, $t1, 0x4
    ctx->pc = 0x321050u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 9), 4));
label_321054:
    // 0x321054: 0x25640010  addiu       $a0, $t3, 0x10
    ctx->pc = 0x321054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 16));
label_321058:
    // 0x321058: 0x240a0010  addiu       $t2, $zero, 0x10
    ctx->pc = 0x321058u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_32105c:
    // 0x32105c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x32105cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_321060:
    // 0x321060: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_321064:
    if (ctx->pc == 0x321064u) {
        ctx->pc = 0x321064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321060u;
        // 0x321064: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321068u;
        goto label_321068;
    }
    ctx->pc = 0x321060u;
    {
        const bool branch_taken_0x321060 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x321064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321060u;
        // 0x321064: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321060) {
            ctx->pc = 0x321070u;
            goto label_321070;
        }
    }
    ctx->pc = 0x321068u;
label_321068:
    // 0x321068: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x321068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_32106c:
    // 0x32106c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x32106cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_321070:
    // 0x321070: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x321070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_321074:
    // 0x321074: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x321074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_321078:
    // 0x321078: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_32107c:
    if (ctx->pc == 0x32107Cu) {
        ctx->pc = 0x32107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321078u;
        // 0x32107c: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321080u;
        goto label_321080;
    }
    ctx->pc = 0x321078u;
    {
        const bool branch_taken_0x321078 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32107Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321078u;
        // 0x32107c: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321078) {
            ctx->pc = 0x321088u;
            goto label_321088;
        }
    }
    ctx->pc = 0x321080u;
label_321080:
    // 0x321080: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x321080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_321084:
    // 0x321084: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x321084u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_321088:
    // 0x321088: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x321088u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_32108c:
    // 0x32108c: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x32108cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_321090:
    // 0x321090: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x321090u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_321094:
    // 0x321094: 0x254a0010  addiu       $t2, $t2, 0x10
    ctx->pc = 0x321094u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_321098:
    // 0x321098: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x321098u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_32109c:
    // 0x32109c: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_3210a0:
    if (ctx->pc == 0x3210A0u) {
        ctx->pc = 0x3210A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32109Cu;
        // 0x3210a0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210A4u;
        goto label_3210a4;
    }
    ctx->pc = 0x32109Cu;
    {
        const bool branch_taken_0x32109c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32109Cu;
        // 0x3210a0: 0xac80000c  sw          $zero, 0xC($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32109c) {
            ctx->pc = 0x3210ACu;
            goto label_3210ac;
        }
    }
    ctx->pc = 0x3210A4u;
label_3210a4:
    // 0x3210a4: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x3210a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_3210a8:
    // 0x3210a8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3210a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_3210ac:
    // 0x3210ac: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x3210acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3210b0:
    // 0x3210b0: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x3210b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_3210b4:
    // 0x3210b4: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_3210b8:
    if (ctx->pc == 0x3210B8u) {
        ctx->pc = 0x3210B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210B4u;
        // 0x3210b8: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210BCu;
        goto label_3210bc;
    }
    ctx->pc = 0x3210B4u;
    {
        const bool branch_taken_0x3210b4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210B4u;
        // 0x3210b8: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210b4) {
            ctx->pc = 0x3210C4u;
            goto label_3210c4;
        }
    }
    ctx->pc = 0x3210BCu;
label_3210bc:
    // 0x3210bc: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x3210bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3210c0:
    // 0x3210c0: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3210c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_3210c4:
    // 0x3210c4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3210c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3210c8:
    // 0x3210c8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x3210c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_3210cc:
    // 0x3210cc: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x3210ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_3210d0:
    // 0x3210d0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x3210d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
label_3210d4:
    // 0x3210d4: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x3210d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3210d8:
    // 0x3210d8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_3210dc:
    if (ctx->pc == 0x3210DCu) {
        ctx->pc = 0x3210DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210D8u;
        // 0x3210dc: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210E0u;
        goto label_3210e0;
    }
    ctx->pc = 0x3210D8u;
    {
        const bool branch_taken_0x3210d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210D8u;
        // 0x3210dc: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210d8) {
            ctx->pc = 0x3211C8u;
            goto label_3211c8;
        }
    }
    ctx->pc = 0x3210E0u;
label_3210e0:
    // 0x3210e0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3210e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3210e4:
    // 0x3210e4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x3210e4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3210e8:
    // 0x3210e8: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x3210e8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3210ec:
    // 0x3210ec: 0x0  nop
    ctx->pc = 0x3210ecu;
    // NOP
label_3210f0:
    // 0x3210f0: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_3210f4:
    if (ctx->pc == 0x3210F4u) {
        ctx->pc = 0x3210F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210F0u;
        // 0x3210f4: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3210F8u;
        goto label_3210f8;
    }
    ctx->pc = 0x3210F0u;
    {
        const bool branch_taken_0x3210f0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3210F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3210F0u;
        // 0x3210f4: 0xace0000c  sw          $zero, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3210f0) {
            ctx->pc = 0x321100u;
            goto label_321100;
        }
    }
    ctx->pc = 0x3210F8u;
label_3210f8:
    // 0x3210f8: 0x8d220000  lw          $v0, 0x0($t1)
    ctx->pc = 0x3210f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 0)));
label_3210fc:
    // 0x3210fc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3210fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_321100:
    // 0x321100: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x321100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_321104:
    // 0x321104: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x321104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_321108:
    // 0x321108: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_32110c:
    if (ctx->pc == 0x32110Cu) {
        ctx->pc = 0x32110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321108u;
        // 0x32110c: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321110u;
        goto label_321110;
    }
    ctx->pc = 0x321108u;
    {
        const bool branch_taken_0x321108 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321108u;
        // 0x32110c: 0xac650004  sw          $a1, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321108) {
            ctx->pc = 0x321118u;
            goto label_321118;
        }
    }
    ctx->pc = 0x321110u;
label_321110:
    // 0x321110: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x321110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_321114:
    // 0x321114: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x321114u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_321118:
    // 0x321118: 0x25430010  addiu       $v1, $t2, 0x10
    ctx->pc = 0x321118u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
label_32111c:
    // 0x32111c: 0x24a40001  addiu       $a0, $a1, 0x1
    ctx->pc = 0x32111cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_321120:
    // 0x321120: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_321124:
    if (ctx->pc == 0x321124u) {
        ctx->pc = 0x321124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321120u;
        // 0x321124: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321128u;
        goto label_321128;
    }
    ctx->pc = 0x321120u;
    {
        const bool branch_taken_0x321120 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x321124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321120u;
        // 0x321124: 0xace0001c  sw          $zero, 0x1C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321120) {
            ctx->pc = 0x321130u;
            goto label_321130;
        }
    }
    ctx->pc = 0x321128u;
label_321128:
    // 0x321128: 0x8d220004  lw          $v0, 0x4($t1)
    ctx->pc = 0x321128u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_32112c:
    // 0x32112c: 0xacc20010  sw          $v0, 0x10($a2)
    ctx->pc = 0x32112cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 16), GPR_U32(ctx, 2));
label_321130:
    // 0x321130: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x321130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_321134:
    // 0x321134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x321134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_321138:
    // 0x321138: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_32113c:
    if (ctx->pc == 0x32113Cu) {
        ctx->pc = 0x32113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321138u;
        // 0x32113c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321140u;
        goto label_321140;
    }
    ctx->pc = 0x321138u;
    {
        const bool branch_taken_0x321138 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321138u;
        // 0x32113c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321138) {
            ctx->pc = 0x321148u;
            goto label_321148;
        }
    }
    ctx->pc = 0x321140u;
label_321140:
    // 0x321140: 0x8d020004  lw          $v0, 0x4($t0)
    ctx->pc = 0x321140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
label_321144:
    // 0x321144: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x321144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_321148:
    // 0x321148: 0x25430020  addiu       $v1, $t2, 0x20
    ctx->pc = 0x321148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
label_32114c:
    // 0x32114c: 0x24a40002  addiu       $a0, $a1, 0x2
    ctx->pc = 0x32114cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_321150:
    // 0x321150: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_321154:
    if (ctx->pc == 0x321154u) {
        ctx->pc = 0x321154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321150u;
        // 0x321154: 0xace0002c  sw          $zero, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321158u;
        goto label_321158;
    }
    ctx->pc = 0x321150u;
    {
        const bool branch_taken_0x321150 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x321154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321150u;
        // 0x321154: 0xace0002c  sw          $zero, 0x2C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321150) {
            ctx->pc = 0x321160u;
            goto label_321160;
        }
    }
    ctx->pc = 0x321158u;
label_321158:
    // 0x321158: 0x8d220008  lw          $v0, 0x8($t1)
    ctx->pc = 0x321158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 8)));
label_32115c:
    // 0x32115c: 0xacc20020  sw          $v0, 0x20($a2)
    ctx->pc = 0x32115cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 32), GPR_U32(ctx, 2));
label_321160:
    // 0x321160: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x321160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_321164:
    // 0x321164: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x321164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_321168:
    // 0x321168: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_32116c:
    if (ctx->pc == 0x32116Cu) {
        ctx->pc = 0x32116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321168u;
        // 0x32116c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321170u;
        goto label_321170;
    }
    ctx->pc = 0x321168u;
    {
        const bool branch_taken_0x321168 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32116Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321168u;
        // 0x32116c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321168) {
            ctx->pc = 0x321178u;
            goto label_321178;
        }
    }
    ctx->pc = 0x321170u;
label_321170:
    // 0x321170: 0x8d020008  lw          $v0, 0x8($t0)
    ctx->pc = 0x321170u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
label_321174:
    // 0x321174: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x321174u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_321178:
    // 0x321178: 0x25430030  addiu       $v1, $t2, 0x30
    ctx->pc = 0x321178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
label_32117c:
    // 0x32117c: 0x24a40003  addiu       $a0, $a1, 0x3
    ctx->pc = 0x32117cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
label_321180:
    // 0x321180: 0x12600003  beqz        $s3, . + 4 + (0x3 << 2)
label_321184:
    if (ctx->pc == 0x321184u) {
        ctx->pc = 0x321184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321180u;
        // 0x321184: 0xace0003c  sw          $zero, 0x3C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x321188u;
        goto label_321188;
    }
    ctx->pc = 0x321180u;
    {
        const bool branch_taken_0x321180 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x321184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321180u;
        // 0x321184: 0xace0003c  sw          $zero, 0x3C($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321180) {
            ctx->pc = 0x321190u;
            goto label_321190;
        }
    }
    ctx->pc = 0x321188u;
label_321188:
    // 0x321188: 0x8d22000c  lw          $v0, 0xC($t1)
    ctx->pc = 0x321188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
label_32118c:
    // 0x32118c: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x32118cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
label_321190:
    // 0x321190: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x321190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_321194:
    // 0x321194: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x321194u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_321198:
    // 0x321198: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
label_32119c:
    if (ctx->pc == 0x32119Cu) {
        ctx->pc = 0x32119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321198u;
        // 0x32119c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3211A0u;
        goto label_3211a0;
    }
    ctx->pc = 0x321198u;
    {
        const bool branch_taken_0x321198 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x32119Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x321198u;
        // 0x32119c: 0xac640004  sw          $a0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x321198) {
            ctx->pc = 0x3211A8u;
            goto label_3211a8;
        }
    }
    ctx->pc = 0x3211A0u;
label_3211a0:
    // 0x3211a0: 0x8d02000c  lw          $v0, 0xC($t0)
    ctx->pc = 0x3211a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 12)));
label_3211a4:
    // 0x3211a4: 0xac620008  sw          $v0, 0x8($v1)
    ctx->pc = 0x3211a4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 2));
label_3211a8:
    // 0x3211a8: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x3211a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_3211ac:
    // 0x3211ac: 0x25080010  addiu       $t0, $t0, 0x10
    ctx->pc = 0x3211acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 16));
label_3211b0:
    // 0x3211b0: 0x25290010  addiu       $t1, $t1, 0x10
    ctx->pc = 0x3211b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 16));
label_3211b4:
    // 0x3211b4: 0x24c60040  addiu       $a2, $a2, 0x40
    ctx->pc = 0x3211b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
label_3211b8:
    // 0x3211b8: 0x24e70040  addiu       $a3, $a3, 0x40
    ctx->pc = 0x3211b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
label_3211bc:
    // 0x3211bc: 0xb5102a  slt         $v0, $a1, $s5
    ctx->pc = 0x3211bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_3211c0:
    // 0x3211c0: 0x1440ffcb  bnez        $v0, . + 4 + (-0x35 << 2)
label_3211c4:
    if (ctx->pc == 0x3211C4u) {
        ctx->pc = 0x3211C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211C0u;
        // 0x3211c4: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3211C8u;
        goto label_3211c8;
    }
    ctx->pc = 0x3211C0u;
    {
        const bool branch_taken_0x3211c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3211C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211C0u;
        // 0x3211c4: 0x254a0040  addiu       $t2, $t2, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3211c0) {
            ctx->pc = 0x3210F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3210f0;
        }
    }
    ctx->pc = 0x3211C8u;
label_3211c8:
    // 0x3211c8: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3211c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3211cc:
    // 0x3211cc: 0xae520018  sw          $s2, 0x18($s2)
    ctx->pc = 0x3211ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 18));
label_3211d0:
    // 0x3211d0: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x3211d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3211d4:
    // 0x3211d4: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x3211d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3211d8:
    // 0x3211d8: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x3211d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3211dc:
    // 0x3211dc: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x3211dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3211e0:
    // 0x3211e0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3211e0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3211e4:
    // 0x3211e4: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x3211e4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3211e8:
    // 0x3211e8: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x3211e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3211ec:
    // 0x3211ec: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x3211ecu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3211f0:
    // 0x3211f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3211f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3211f4:
    // 0x3211f4: 0x3e00008  jr          $ra
label_3211f8:
    if (ctx->pc == 0x3211F8u) {
        ctx->pc = 0x3211F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211F4u;
        // 0x3211f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3211FCu;
        goto label_3211fc;
    }
    ctx->pc = 0x3211F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3211F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3211F4u;
        // 0x3211f8: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3211F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3211FCu;
label_3211fc:
    // 0x3211fc: 0x0  nop
    ctx->pc = 0x3211fcu;
    // NOP
    ctx->pc = 0x321200u;
}
