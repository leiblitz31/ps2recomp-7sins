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

// Function: sub_0040FEC8
// Address: 0x40fec8 - 0x410230
void sub_0040FEC8_0x40fec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040FEC8_0x40fec8");
#endif

    switch (ctx->pc) {
        case 0x40fec8u: goto label_40fec8;
        case 0x40feccu: goto label_40fecc;
        case 0x40fed0u: goto label_40fed0;
        case 0x40fed4u: goto label_40fed4;
        case 0x40fed8u: goto label_40fed8;
        case 0x40fedcu: goto label_40fedc;
        case 0x40fee0u: goto label_40fee0;
        case 0x40fee4u: goto label_40fee4;
        case 0x40fee8u: goto label_40fee8;
        case 0x40feecu: goto label_40feec;
        case 0x40fef0u: goto label_40fef0;
        case 0x40fef4u: goto label_40fef4;
        case 0x40fef8u: goto label_40fef8;
        case 0x40fefcu: goto label_40fefc;
        case 0x40ff00u: goto label_40ff00;
        case 0x40ff04u: goto label_40ff04;
        case 0x40ff08u: goto label_40ff08;
        case 0x40ff0cu: goto label_40ff0c;
        case 0x40ff10u: goto label_40ff10;
        case 0x40ff14u: goto label_40ff14;
        case 0x40ff18u: goto label_40ff18;
        case 0x40ff1cu: goto label_40ff1c;
        case 0x40ff20u: goto label_40ff20;
        case 0x40ff24u: goto label_40ff24;
        case 0x40ff28u: goto label_40ff28;
        case 0x40ff2cu: goto label_40ff2c;
        case 0x40ff30u: goto label_40ff30;
        case 0x40ff34u: goto label_40ff34;
        case 0x40ff38u: goto label_40ff38;
        case 0x40ff3cu: goto label_40ff3c;
        case 0x40ff40u: goto label_40ff40;
        case 0x40ff44u: goto label_40ff44;
        case 0x40ff48u: goto label_40ff48;
        case 0x40ff4cu: goto label_40ff4c;
        case 0x40ff50u: goto label_40ff50;
        case 0x40ff54u: goto label_40ff54;
        case 0x40ff58u: goto label_40ff58;
        case 0x40ff5cu: goto label_40ff5c;
        case 0x40ff60u: goto label_40ff60;
        case 0x40ff64u: goto label_40ff64;
        case 0x40ff68u: goto label_40ff68;
        case 0x40ff6cu: goto label_40ff6c;
        case 0x40ff70u: goto label_40ff70;
        case 0x40ff74u: goto label_40ff74;
        case 0x40ff78u: goto label_40ff78;
        case 0x40ff7cu: goto label_40ff7c;
        case 0x40ff80u: goto label_40ff80;
        case 0x40ff84u: goto label_40ff84;
        case 0x40ff88u: goto label_40ff88;
        case 0x40ff8cu: goto label_40ff8c;
        case 0x40ff90u: goto label_40ff90;
        case 0x40ff94u: goto label_40ff94;
        case 0x40ff98u: goto label_40ff98;
        case 0x40ff9cu: goto label_40ff9c;
        case 0x40ffa0u: goto label_40ffa0;
        case 0x40ffa4u: goto label_40ffa4;
        case 0x40ffa8u: goto label_40ffa8;
        case 0x40ffacu: goto label_40ffac;
        case 0x40ffb0u: goto label_40ffb0;
        case 0x40ffb4u: goto label_40ffb4;
        case 0x40ffb8u: goto label_40ffb8;
        case 0x40ffbcu: goto label_40ffbc;
        case 0x40ffc0u: goto label_40ffc0;
        case 0x40ffc4u: goto label_40ffc4;
        case 0x40ffc8u: goto label_40ffc8;
        case 0x40ffccu: goto label_40ffcc;
        case 0x40ffd0u: goto label_40ffd0;
        case 0x40ffd4u: goto label_40ffd4;
        case 0x40ffd8u: goto label_40ffd8;
        case 0x40ffdcu: goto label_40ffdc;
        case 0x40ffe0u: goto label_40ffe0;
        case 0x40ffe4u: goto label_40ffe4;
        case 0x40ffe8u: goto label_40ffe8;
        case 0x40ffecu: goto label_40ffec;
        case 0x40fff0u: goto label_40fff0;
        case 0x40fff4u: goto label_40fff4;
        case 0x40fff8u: goto label_40fff8;
        case 0x40fffcu: goto label_40fffc;
        case 0x410000u: goto label_410000;
        case 0x410004u: goto label_410004;
        case 0x410008u: goto label_410008;
        case 0x41000cu: goto label_41000c;
        case 0x410010u: goto label_410010;
        case 0x410014u: goto label_410014;
        case 0x410018u: goto label_410018;
        case 0x41001cu: goto label_41001c;
        case 0x410020u: goto label_410020;
        case 0x410024u: goto label_410024;
        case 0x410028u: goto label_410028;
        case 0x41002cu: goto label_41002c;
        case 0x410030u: goto label_410030;
        case 0x410034u: goto label_410034;
        case 0x410038u: goto label_410038;
        case 0x41003cu: goto label_41003c;
        case 0x410040u: goto label_410040;
        case 0x410044u: goto label_410044;
        case 0x410048u: goto label_410048;
        case 0x41004cu: goto label_41004c;
        case 0x410050u: goto label_410050;
        case 0x410054u: goto label_410054;
        case 0x410058u: goto label_410058;
        case 0x41005cu: goto label_41005c;
        case 0x410060u: goto label_410060;
        case 0x410064u: goto label_410064;
        case 0x410068u: goto label_410068;
        case 0x41006cu: goto label_41006c;
        case 0x410070u: goto label_410070;
        case 0x410074u: goto label_410074;
        case 0x410078u: goto label_410078;
        case 0x41007cu: goto label_41007c;
        case 0x410080u: goto label_410080;
        case 0x410084u: goto label_410084;
        case 0x410088u: goto label_410088;
        case 0x41008cu: goto label_41008c;
        case 0x410090u: goto label_410090;
        case 0x410094u: goto label_410094;
        case 0x410098u: goto label_410098;
        case 0x41009cu: goto label_41009c;
        case 0x4100a0u: goto label_4100a0;
        case 0x4100a4u: goto label_4100a4;
        case 0x4100a8u: goto label_4100a8;
        case 0x4100acu: goto label_4100ac;
        case 0x4100b0u: goto label_4100b0;
        case 0x4100b4u: goto label_4100b4;
        case 0x4100b8u: goto label_4100b8;
        case 0x4100bcu: goto label_4100bc;
        case 0x4100c0u: goto label_4100c0;
        case 0x4100c4u: goto label_4100c4;
        case 0x4100c8u: goto label_4100c8;
        case 0x4100ccu: goto label_4100cc;
        case 0x4100d0u: goto label_4100d0;
        case 0x4100d4u: goto label_4100d4;
        case 0x4100d8u: goto label_4100d8;
        case 0x4100dcu: goto label_4100dc;
        case 0x4100e0u: goto label_4100e0;
        case 0x4100e4u: goto label_4100e4;
        case 0x4100e8u: goto label_4100e8;
        case 0x4100ecu: goto label_4100ec;
        case 0x4100f0u: goto label_4100f0;
        case 0x4100f4u: goto label_4100f4;
        case 0x4100f8u: goto label_4100f8;
        case 0x4100fcu: goto label_4100fc;
        case 0x410100u: goto label_410100;
        case 0x410104u: goto label_410104;
        case 0x410108u: goto label_410108;
        case 0x41010cu: goto label_41010c;
        case 0x410110u: goto label_410110;
        case 0x410114u: goto label_410114;
        case 0x410118u: goto label_410118;
        case 0x41011cu: goto label_41011c;
        case 0x410120u: goto label_410120;
        case 0x410124u: goto label_410124;
        case 0x410128u: goto label_410128;
        case 0x41012cu: goto label_41012c;
        case 0x410130u: goto label_410130;
        case 0x410134u: goto label_410134;
        case 0x410138u: goto label_410138;
        case 0x41013cu: goto label_41013c;
        case 0x410140u: goto label_410140;
        case 0x410144u: goto label_410144;
        case 0x410148u: goto label_410148;
        case 0x41014cu: goto label_41014c;
        case 0x410150u: goto label_410150;
        case 0x410154u: goto label_410154;
        case 0x410158u: goto label_410158;
        case 0x41015cu: goto label_41015c;
        case 0x410160u: goto label_410160;
        case 0x410164u: goto label_410164;
        case 0x410168u: goto label_410168;
        case 0x41016cu: goto label_41016c;
        case 0x410170u: goto label_410170;
        case 0x410174u: goto label_410174;
        case 0x410178u: goto label_410178;
        case 0x41017cu: goto label_41017c;
        case 0x410180u: goto label_410180;
        case 0x410184u: goto label_410184;
        case 0x410188u: goto label_410188;
        case 0x41018cu: goto label_41018c;
        case 0x410190u: goto label_410190;
        case 0x410194u: goto label_410194;
        case 0x410198u: goto label_410198;
        case 0x41019cu: goto label_41019c;
        case 0x4101a0u: goto label_4101a0;
        case 0x4101a4u: goto label_4101a4;
        case 0x4101a8u: goto label_4101a8;
        case 0x4101acu: goto label_4101ac;
        case 0x4101b0u: goto label_4101b0;
        case 0x4101b4u: goto label_4101b4;
        case 0x4101b8u: goto label_4101b8;
        case 0x4101bcu: goto label_4101bc;
        case 0x4101c0u: goto label_4101c0;
        case 0x4101c4u: goto label_4101c4;
        case 0x4101c8u: goto label_4101c8;
        case 0x4101ccu: goto label_4101cc;
        case 0x4101d0u: goto label_4101d0;
        case 0x4101d4u: goto label_4101d4;
        case 0x4101d8u: goto label_4101d8;
        case 0x4101dcu: goto label_4101dc;
        case 0x4101e0u: goto label_4101e0;
        case 0x4101e4u: goto label_4101e4;
        case 0x4101e8u: goto label_4101e8;
        case 0x4101ecu: goto label_4101ec;
        case 0x4101f0u: goto label_4101f0;
        case 0x4101f4u: goto label_4101f4;
        case 0x4101f8u: goto label_4101f8;
        case 0x4101fcu: goto label_4101fc;
        case 0x410200u: goto label_410200;
        case 0x410204u: goto label_410204;
        case 0x410208u: goto label_410208;
        case 0x41020cu: goto label_41020c;
        case 0x410210u: goto label_410210;
        case 0x410214u: goto label_410214;
        case 0x410218u: goto label_410218;
        case 0x41021cu: goto label_41021c;
        case 0x410220u: goto label_410220;
        case 0x410224u: goto label_410224;
        case 0x410228u: goto label_410228;
        case 0x41022cu: goto label_41022c;
        default: break;
    }

    ctx->pc = 0x40fec8u;

label_40fec8:
    // 0x40fec8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x40fec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_40fecc:
    // 0x40fecc: 0x8f82ad28  lw          $v0, -0x52D8($gp)
    ctx->pc = 0x40feccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946088)));
label_40fed0:
    // 0x40fed0: 0x7fb60020  sq          $s6, 0x20($sp)
    ctx->pc = 0x40fed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 22));
label_40fed4:
    // 0x40fed4: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x40fed4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_40fed8:
    // 0x40fed8: 0x24160010  addiu       $s6, $zero, 0x10
    ctx->pc = 0x40fed8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40fedc:
    // 0x40fedc: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x40fedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_40fee0:
    // 0x40fee0: 0x2882b  sltu        $s1, $zero, $v0
    ctx->pc = 0x40fee0u;
    SET_GPR_U64(ctx, 17, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_40fee4:
    // 0x40fee4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40fee4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_40fee8:
    // 0x40fee8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x40fee8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40feec:
    // 0x40feec: 0x7fb50030  sq          $s5, 0x30($sp)
    ctx->pc = 0x40feecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 21));
label_40fef0:
    // 0x40fef0: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x40fef0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40fef4:
    // 0x40fef4: 0x8f88ad30  lw          $t0, -0x52D0($gp)
    ctx->pc = 0x40fef4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946096)));
label_40fef8:
    // 0x40fef8: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x40fef8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_40fefc:
    // 0x40fefc: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x40fefcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_40ff00:
    // 0x40ff00: 0xc6b00b  movn        $s6, $a2, $a2
    ctx->pc = 0x40ff00u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 6));
label_40ff04:
    // 0x40ff04: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x40ff04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_40ff08:
    // 0x40ff08: 0x7fb70010  sq          $s7, 0x10($sp)
    ctx->pc = 0x40ff08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 23));
label_40ff0c:
    // 0x40ff0c: 0x11000007  beqz        $t0, . + 4 + (0x7 << 2)
label_40ff10:
    if (ctx->pc == 0x40FF10u) {
        ctx->pc = 0x40FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF0Cu;
        // 0x40ff10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FF14u;
        goto label_40ff14;
    }
    ctx->pc = 0x40FF0Cu;
    {
        const bool branch_taken_0x40ff0c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF0Cu;
        // 0x40ff10: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff0c) {
            ctx->pc = 0x40FF2Cu;
            goto label_40ff2c;
        }
    }
    ctx->pc = 0x40FF14u;
label_40ff14:
    // 0x40ff14: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40ff14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40ff18:
    // 0x40ff18: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x40ff18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_40ff1c:
    // 0x40ff1c: 0x8c62e998  lw          $v0, -0x1668($v1)
    ctx->pc = 0x40ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961560)));
label_40ff20:
    // 0x40ff20: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x40ff20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_40ff24:
    // 0x40ff24: 0x10000006  b           . + 4 + (0x6 << 2)
label_40ff28:
    if (ctx->pc == 0x40FF28u) {
        ctx->pc = 0x40FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF24u;
        // 0x40ff28: 0x2a52824  and         $a1, $s5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FF2Cu;
        goto label_40ff2c;
    }
    ctx->pc = 0x40FF24u;
    {
        const bool branch_taken_0x40ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF24u;
        // 0x40ff28: 0x2a52824  and         $a1, $s5, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff24) {
            ctx->pc = 0x40FF40u;
            goto label_40ff40;
        }
    }
    ctx->pc = 0x40FF2Cu;
label_40ff2c:
    // 0x40ff2c: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x40ff2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_40ff30:
    // 0x40ff30: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x40ff30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_40ff34:
    // 0x40ff34: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x40ff34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_40ff38:
    // 0x40ff38: 0x2a52824  and         $a1, $s5, $a1
    ctx->pc = 0x40ff38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 5));
label_40ff3c:
    // 0x40ff3c: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x40ff3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_40ff40:
    // 0x40ff40: 0x40f809  jalr        $v0
label_40ff44:
    if (ctx->pc == 0x40FF44u) {
        ctx->pc = 0x40FF48u;
        goto label_40ff48;
    }
    ctx->pc = 0x40FF40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40FF48u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FF40u, 0x40FF48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40FF48u;
label_40ff48:
    // 0x40ff48: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40ff48u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40ff4c:
    // 0x40ff4c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_40ff50:
    if (ctx->pc == 0x40FF50u) {
        ctx->pc = 0x40FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF4Cu;
        // 0x40ff50: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FF54u;
        goto label_40ff54;
    }
    ctx->pc = 0x40FF4Cu;
    {
        const bool branch_taken_0x40ff4c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40FF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF4Cu;
        // 0x40ff50: 0x2642ffff  addiu       $v0, $s2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff4c) {
            ctx->pc = 0x40FF6Cu;
            goto label_40ff6c;
        }
    }
    ctx->pc = 0x40FF54u;
label_40ff54:
    // 0x40ff54: 0x100000aa  b           . + 4 + (0xAA << 2)
label_40ff58:
    if (ctx->pc == 0x40FF58u) {
        ctx->pc = 0x40FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF54u;
        // 0x40ff58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FF5Cu;
        goto label_40ff5c;
    }
    ctx->pc = 0x40FF54u;
    {
        const bool branch_taken_0x40ff54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF54u;
        // 0x40ff58: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff54) {
            ctx->pc = 0x410200u;
            goto label_410200;
        }
    }
    ctx->pc = 0x40FF5Cu;
label_40ff5c:
    // 0x40ff5c: 0xc104472  jal         func_4111C8
label_40ff60:
    if (ctx->pc == 0x40FF60u) {
        ctx->pc = 0x40FF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF5Cu;
        // 0x40ff60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FF64u;
        goto label_40ff64;
    }
    ctx->pc = 0x40FF5Cu;
    SET_GPR_U32(ctx, 31, 0x40FF64u);
    ctx->pc = 0x40FF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40FF5Cu;
    // 0x40ff60: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4111C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4111C8u, 0x40FF5Cu, 0x40FF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40FF64u;
label_40ff64:
    // 0x40ff64: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_40ff68:
    if (ctx->pc == 0x40FF68u) {
        ctx->pc = 0x40FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF64u;
        // 0x40ff68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FF6Cu;
        goto label_40ff6c;
    }
    ctx->pc = 0x40FF64u;
    {
        const bool branch_taken_0x40ff64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FF64u;
        // 0x40ff68: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ff64) {
            ctx->pc = 0x410200u;
            goto label_410200;
        }
    }
    ctx->pc = 0x40FF6Cu;
label_40ff6c:
    // 0x40ff6c: 0x162023  negu        $a0, $s6
    ctx->pc = 0x40ff6cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 22)));
label_40ff70:
    // 0x40ff70: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x40ff70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_40ff74:
    // 0x40ff74: 0x26630007  addiu       $v1, $s3, 0x7
    ctx->pc = 0x40ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 7));
label_40ff78:
    // 0x40ff78: 0x442824  and         $a1, $v0, $a0
    ctx->pc = 0x40ff78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_40ff7c:
    // 0x40ff7c: 0x390c2  srl         $s2, $v1, 3
    ctx->pc = 0x40ff7cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
label_40ff80:
    // 0x40ff80: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x40ff80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_40ff84:
    // 0x40ff84: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x40ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_40ff88:
    // 0x40ff88: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x40ff88u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40ff8c:
    // 0x40ff8c: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x40ff8cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_40ff90:
    // 0x40ff90: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x40ff90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
label_40ff94:
    // 0x40ff94: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x40ff94u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_40ff98:
    // 0x40ff98: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x40ff98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
label_40ff9c:
    // 0x40ff9c: 0xae120008  sw          $s2, 0x8($s0)
    ctx->pc = 0x40ff9cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 18));
label_40ffa0:
    // 0x40ffa0: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x40ffa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
label_40ffa4:
    // 0x40ffa4: 0x1220008d  beqz        $s1, . + 4 + (0x8D << 2)
label_40ffa8:
    if (ctx->pc == 0x40FFA8u) {
        ctx->pc = 0x40FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFA4u;
        // 0x40ffa8: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FFACu;
        goto label_40ffac;
    }
    ctx->pc = 0x40FFA4u;
    {
        const bool branch_taken_0x40ffa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFA4u;
        // 0x40ffa8: 0xae040014  sw          $a0, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffa4) {
            ctx->pc = 0x4101DCu;
            goto label_4101dc;
        }
    }
    ctx->pc = 0x40FFACu;
label_40ffac:
    // 0x40ffac: 0x2652018  mult        $a0, $s3, $a1
    ctx->pc = 0x40ffacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_40ffb0:
    // 0x40ffb0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x40ffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_40ffb4:
    // 0x40ffb4: 0x111823  negu        $v1, $s1
    ctx->pc = 0x40ffb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 17)));
label_40ffb8:
    // 0x40ffb8: 0x2457e880  addiu       $s7, $v0, -0x1780
    ctx->pc = 0x40ffb8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_40ffbc:
    // 0x40ffbc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x40ffbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_40ffc0:
    // 0x40ffc0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x40ffc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_40ffc4:
    // 0x40ffc4: 0x2442021  addu        $a0, $s2, $a0
    ctx->pc = 0x40ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 4)));
label_40ffc8:
    // 0x40ffc8: 0x10600039  beqz        $v1, . + 4 + (0x39 << 2)
label_40ffcc:
    if (ctx->pc == 0x40FFCCu) {
        ctx->pc = 0x40FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFC8u;
        // 0x40ffcc: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FFD0u;
        goto label_40ffd0;
    }
    ctx->pc = 0x40FFC8u;
    {
        const bool branch_taken_0x40ffc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFC8u;
        // 0x40ffcc: 0x969821  addu        $s3, $a0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffc8) {
            ctx->pc = 0x4100B0u;
            goto label_4100b0;
        }
    }
    ctx->pc = 0x40FFD0u;
label_40ffd0:
    // 0x40ffd0: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x40ffd0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_40ffd4:
    // 0x40ffd4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
label_40ffd8:
    if (ctx->pc == 0x40FFD8u) {
        ctx->pc = 0x40FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFD4u;
        // 0x40ffd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FFDCu;
        goto label_40ffdc;
    }
    ctx->pc = 0x40FFD4u;
    {
        const bool branch_taken_0x40ffd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFD4u;
        // 0x40ffd8: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffd4) {
            ctx->pc = 0x410078u;
            goto label_410078;
        }
    }
    ctx->pc = 0x40FFDCu;
label_40ffdc:
    // 0x40ffdc: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_40ffe0:
    if (ctx->pc == 0x40FFE0u) {
        ctx->pc = 0x40FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFDCu;
        // 0x40ffe0: 0x2664ffff  addiu       $a0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FFE4u;
        goto label_40ffe4;
    }
    ctx->pc = 0x40FFDCu;
    {
        const bool branch_taken_0x40ffdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFDCu;
        // 0x40ffe0: 0x2664ffff  addiu       $a0, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ffdc) {
            ctx->pc = 0x41002Cu;
            goto label_41002c;
        }
    }
    ctx->pc = 0x40FFE4u;
label_40ffe4:
    // 0x40ffe4: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x40ffe4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_40ffe8:
    // 0x40ffe8: 0x40f809  jalr        $v0
label_40ffec:
    if (ctx->pc == 0x40FFECu) {
        ctx->pc = 0x40FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFE8u;
        // 0x40ffec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FFF0u;
        goto label_40fff0;
    }
    ctx->pc = 0x40FFE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40FFF0u);
        ctx->pc = 0x40FFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFE8u;
        // 0x40ffec: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40FFE8u, 0x40FFF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40FFF0u;
label_40fff0:
    // 0x40fff0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x40fff0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40fff4:
    // 0x40fff4: 0x10e0ffd9  beqz        $a3, . + 4 + (-0x27 << 2)
label_40fff8:
    if (ctx->pc == 0x40FFF8u) {
        ctx->pc = 0x40FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFF4u;
        // 0x40fff8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40FFFCu;
        goto label_40fffc;
    }
    ctx->pc = 0x40FFF4u;
    {
        const bool branch_taken_0x40fff4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x40FFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40FFF4u;
        // 0x40fff8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40fff4) {
            ctx->pc = 0x40FF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ff5c;
        }
    }
    ctx->pc = 0x40FFFCu;
label_40fffc:
    // 0x40fffc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x40fffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410000:
    // 0x410000: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_410004:
    // 0x410004: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410004u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410008:
    // 0x410008: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410008u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41000c:
    // 0x41000c: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x41000cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_410010:
    // 0x410010: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x410010u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410014:
    // 0x410014: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x410014u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_410018:
    // 0x410018: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x410018u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_41001c:
    // 0x41001c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x41001cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410020:
    // 0x410020: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x410020u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_410024:
    // 0x410024: 0xc0bb7e6  jal         func_2EDF98
label_410028:
    if (ctx->pc == 0x410028u) {
        ctx->pc = 0x410028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410024u;
        // 0x410028: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41002Cu;
        goto label_41002c;
    }
    ctx->pc = 0x410024u;
    SET_GPR_U32(ctx, 31, 0x41002Cu);
    ctx->pc = 0x410028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410024u;
    // 0x410028: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x410024u, 0x41002Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41002Cu;
label_41002c:
    // 0x41002c: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x41002cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_410030:
    // 0x410030: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x410030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410034:
    // 0x410034: 0x40f809  jalr        $v0
label_410038:
    if (ctx->pc == 0x410038u) {
        ctx->pc = 0x410038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410034u;
        // 0x410038: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41003Cu;
        goto label_41003c;
    }
    ctx->pc = 0x410034u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x41003Cu);
        ctx->pc = 0x410038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410034u;
        // 0x410038: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410034u, 0x41003Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x41003Cu;
label_41003c:
    // 0x41003c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x41003cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410040:
    // 0x410040: 0x10e0ffc6  beqz        $a3, . + 4 + (-0x3A << 2)
label_410044:
    if (ctx->pc == 0x410044u) {
        ctx->pc = 0x410044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410040u;
        // 0x410044: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410048u;
        goto label_410048;
    }
    ctx->pc = 0x410040u;
    {
        const bool branch_taken_0x410040 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410040u;
        // 0x410044: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410040) {
            ctx->pc = 0x40FF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ff5c;
        }
    }
    ctx->pc = 0x410048u;
label_410048:
    // 0x410048: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x410048u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_41004c:
    // 0x41004c: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x41004cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_410050:
    // 0x410050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410054:
    // 0x410054: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410054u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410058:
    // 0x410058: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x410058u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_41005c:
    // 0x41005c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x41005cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410060:
    // 0x410060: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x410060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_410064:
    // 0x410064: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x410064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_410068:
    // 0x410068: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x410068u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41006c:
    // 0x41006c: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x41006cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_410070:
    // 0x410070: 0xc0bb7e6  jal         func_2EDF98
label_410074:
    if (ctx->pc == 0x410074u) {
        ctx->pc = 0x410074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410070u;
        // 0x410074: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410078u;
        goto label_410078;
    }
    ctx->pc = 0x410070u;
    SET_GPR_U32(ctx, 31, 0x410078u);
    ctx->pc = 0x410074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410070u;
    // 0x410074: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x410070u, 0x410078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410078u;
label_410078:
    // 0x410078: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x410078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_41007c:
    // 0x41007c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x41007cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410080:
    // 0x410080: 0x40f809  jalr        $v0
label_410084:
    if (ctx->pc == 0x410084u) {
        ctx->pc = 0x410084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410080u;
        // 0x410084: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410088u;
        goto label_410088;
    }
    ctx->pc = 0x410080u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410088u);
        ctx->pc = 0x410084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410080u;
        // 0x410084: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410080u, 0x410088u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410088u;
label_410088:
    // 0x410088: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410088u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41008c:
    // 0x41008c: 0x10e0ffb3  beqz        $a3, . + 4 + (-0x4D << 2)
label_410090:
    if (ctx->pc == 0x410090u) {
        ctx->pc = 0x410090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41008Cu;
        // 0x410090: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410094u;
        goto label_410094;
    }
    ctx->pc = 0x41008Cu;
    {
        const bool branch_taken_0x41008c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41008Cu;
        // 0x410090: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41008c) {
            ctx->pc = 0x40FF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ff5c;
        }
    }
    ctx->pc = 0x410094u;
label_410094:
    // 0x410094: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x410094u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410098:
    // 0x410098: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410098u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_41009c:
    // 0x41009c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41009cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4100a0:
    // 0x4100a0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4100a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4100a4:
    // 0x4100a4: 0x10000044  b           . + 4 + (0x44 << 2)
label_4100a8:
    if (ctx->pc == 0x4100A8u) {
        ctx->pc = 0x4100A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100A4u;
        // 0x4100a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4100ACu;
        goto label_4100ac;
    }
    ctx->pc = 0x4100A4u;
    {
        const bool branch_taken_0x4100a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4100A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100A4u;
        // 0x4100a8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4100a4) {
            ctx->pc = 0x4101B8u;
            goto label_4101b8;
        }
    }
    ctx->pc = 0x4100ACu;
label_4100ac:
    // 0x4100ac: 0x0  nop
    ctx->pc = 0x4100acu;
    // NOP
label_4100b0:
    // 0x4100b0: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4100b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4100b4:
    // 0x4100b4: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4100b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_4100b8:
    // 0x4100b8: 0x40f809  jalr        $v0
label_4100bc:
    if (ctx->pc == 0x4100BCu) {
        ctx->pc = 0x4100BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100B8u;
        // 0x4100bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4100C0u;
        goto label_4100c0;
    }
    ctx->pc = 0x4100B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4100C0u);
        ctx->pc = 0x4100BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100B8u;
        // 0x4100bc: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4100B8u, 0x4100C0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4100C0u;
label_4100c0:
    // 0x4100c0: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x4100c0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4100c4:
    // 0x4100c4: 0x10e0ffa5  beqz        $a3, . + 4 + (-0x5B << 2)
label_4100c8:
    if (ctx->pc == 0x4100C8u) {
        ctx->pc = 0x4100C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100C4u;
        // 0x4100c8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4100CCu;
        goto label_4100cc;
    }
    ctx->pc = 0x4100C4u;
    {
        const bool branch_taken_0x4100c4 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4100C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100C4u;
        // 0x4100c8: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4100c4) {
            ctx->pc = 0x40FF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ff5c;
        }
    }
    ctx->pc = 0x4100CCu;
label_4100cc:
    // 0x4100cc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x4100ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_4100d0:
    // 0x4100d0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4100d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4100d4:
    // 0x4100d4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4100d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4100d8:
    // 0x4100d8: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4100d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4100dc:
    // 0x4100dc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4100dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4100e0:
    // 0x4100e0: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x4100e0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_4100e4:
    // 0x4100e4: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x4100e4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_4100e8:
    // 0x4100e8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4100e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4100ec:
    // 0x4100ec: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x4100ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_4100f0:
    // 0x4100f0: 0xc0bb7e6  jal         func_2EDF98
label_4100f4:
    if (ctx->pc == 0x4100F4u) {
        ctx->pc = 0x4100F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4100F0u;
        // 0x4100f4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4100F8u;
        goto label_4100f8;
    }
    ctx->pc = 0x4100F0u;
    SET_GPR_U32(ctx, 31, 0x4100F8u);
    ctx->pc = 0x4100F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4100F0u;
    // 0x4100f4: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4100F0u, 0x4100F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4100F8u;
label_4100f8:
    // 0x4100f8: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x4100f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_4100fc:
    // 0x4100fc: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x4100fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410100:
    // 0x410100: 0x40f809  jalr        $v0
label_410104:
    if (ctx->pc == 0x410104u) {
        ctx->pc = 0x410104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410100u;
        // 0x410104: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410108u;
        goto label_410108;
    }
    ctx->pc = 0x410100u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410108u);
        ctx->pc = 0x410104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410100u;
        // 0x410104: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410100u, 0x410108u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410108u;
label_410108:
    // 0x410108: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410108u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41010c:
    // 0x41010c: 0x10e0ff93  beqz        $a3, . + 4 + (-0x6D << 2)
label_410110:
    if (ctx->pc == 0x410110u) {
        ctx->pc = 0x410110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41010Cu;
        // 0x410110: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410114u;
        goto label_410114;
    }
    ctx->pc = 0x41010Cu;
    {
        const bool branch_taken_0x41010c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41010Cu;
        // 0x410110: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41010c) {
            ctx->pc = 0x40FF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ff5c;
        }
    }
    ctx->pc = 0x410114u;
label_410114:
    // 0x410114: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x410114u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410118:
    // 0x410118: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410118u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_41011c:
    // 0x41011c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41011cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410120:
    // 0x410120: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_410124:
    // 0x410124: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x410124u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410128:
    // 0x410128: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x410128u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_41012c:
    // 0x41012c: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x41012cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_410130:
    // 0x410130: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x410130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410134:
    // 0x410134: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x410134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_410138:
    // 0x410138: 0xc0bb7e6  jal         func_2EDF98
label_41013c:
    if (ctx->pc == 0x41013Cu) {
        ctx->pc = 0x41013Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410138u;
        // 0x41013c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410140u;
        goto label_410140;
    }
    ctx->pc = 0x410138u;
    SET_GPR_U32(ctx, 31, 0x410140u);
    ctx->pc = 0x41013Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410138u;
    // 0x41013c: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x410138u, 0x410140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410140u;
label_410140:
    // 0x410140: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x410140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_410144:
    // 0x410144: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x410144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410148:
    // 0x410148: 0x40f809  jalr        $v0
label_41014c:
    if (ctx->pc == 0x41014Cu) {
        ctx->pc = 0x41014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410148u;
        // 0x41014c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410150u;
        goto label_410150;
    }
    ctx->pc = 0x410148u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410150u);
        ctx->pc = 0x41014Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410148u;
        // 0x41014c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410148u, 0x410150u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410150u;
label_410150:
    // 0x410150: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410150u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_410154:
    // 0x410154: 0x10e0ff81  beqz        $a3, . + 4 + (-0x7F << 2)
label_410158:
    if (ctx->pc == 0x410158u) {
        ctx->pc = 0x410158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410154u;
        // 0x410158: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x41015Cu;
        goto label_41015c;
    }
    ctx->pc = 0x410154u;
    {
        const bool branch_taken_0x410154 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x410158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410154u;
        // 0x410158: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x410154) {
            ctx->pc = 0x40FF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ff5c;
        }
    }
    ctx->pc = 0x41015Cu;
label_41015c:
    // 0x41015c: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x41015cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_410160:
    // 0x410160: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x410160u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_410164:
    // 0x410164: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x410164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_410168:
    // 0x410168: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x410168u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_41016c:
    // 0x41016c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x41016cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_410170:
    // 0x410170: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x410170u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_410174:
    // 0x410174: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x410174u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_410178:
    // 0x410178: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x410178u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_41017c:
    // 0x41017c: 0xac670004  sw          $a3, 0x4($v1)
    ctx->pc = 0x41017cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 7));
label_410180:
    // 0x410180: 0xc0bb7e6  jal         func_2EDF98
label_410184:
    if (ctx->pc == 0x410184u) {
        ctx->pc = 0x410184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410180u;
        // 0x410184: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410188u;
        goto label_410188;
    }
    ctx->pc = 0x410180u;
    SET_GPR_U32(ctx, 31, 0x410188u);
    ctx->pc = 0x410184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x410180u;
    // 0x410184: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x410180u, 0x410188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x410188u;
label_410188:
    // 0x410188: 0x8ee20108  lw          $v0, 0x108($s7)
    ctx->pc = 0x410188u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
label_41018c:
    // 0x41018c: 0x2664ffff  addiu       $a0, $s3, -0x1
    ctx->pc = 0x41018cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_410190:
    // 0x410190: 0x40f809  jalr        $v0
label_410194:
    if (ctx->pc == 0x410194u) {
        ctx->pc = 0x410194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410190u;
        // 0x410194: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410198u;
        goto label_410198;
    }
    ctx->pc = 0x410190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x410198u);
        ctx->pc = 0x410194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410190u;
        // 0x410194: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410190u, 0x410198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x410198u;
label_410198:
    // 0x410198: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x410198u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_41019c:
    // 0x41019c: 0x10e0ff6f  beqz        $a3, . + 4 + (-0x91 << 2)
label_4101a0:
    if (ctx->pc == 0x4101A0u) {
        ctx->pc = 0x4101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41019Cu;
        // 0x4101a0: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4101A4u;
        goto label_4101a4;
    }
    ctx->pc = 0x41019Cu;
    {
        const bool branch_taken_0x41019c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x4101A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41019Cu;
        // 0x4101a0: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41019c) {
            ctx->pc = 0x40FF5Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ff5c;
        }
    }
    ctx->pc = 0x4101A4u;
label_4101a4:
    // 0x4101a4: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x4101a4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
label_4101a8:
    // 0x4101a8: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x4101a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
label_4101ac:
    // 0x4101ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4101acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4101b0:
    // 0x4101b0: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x4101b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4101b4:
    // 0x4101b4: 0x2631fffc  addiu       $s1, $s1, -0x4
    ctx->pc = 0x4101b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967292));
label_4101b8:
    // 0x4101b8: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x4101b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4101bc:
    // 0x4101bc: 0xacf40004  sw          $s4, 0x4($a3)
    ctx->pc = 0x4101bcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 20));
label_4101c0:
    // 0x4101c0: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x4101c0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_4101c4:
    // 0x4101c4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x4101c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_4101c8:
    // 0x4101c8: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x4101c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_4101cc:
    // 0x4101cc: 0xc0bb7e6  jal         func_2EDF98
label_4101d0:
    if (ctx->pc == 0x4101D0u) {
        ctx->pc = 0x4101D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4101CCu;
        // 0x4101d0: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4101D4u;
        goto label_4101d4;
    }
    ctx->pc = 0x4101CCu;
    SET_GPR_U32(ctx, 31, 0x4101D4u);
    ctx->pc = 0x4101D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4101CCu;
    // 0x4101d0: 0xae070010  sw          $a3, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4101CCu, 0x4101D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4101D4u;
label_4101d4:
    // 0x4101d4: 0x5620ffb7  bnel        $s1, $zero, . + 4 + (-0x49 << 2)
label_4101d8:
    if (ctx->pc == 0x4101D8u) {
        ctx->pc = 0x4101D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4101D4u;
        // 0x4101d8: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4101DCu;
        goto label_4101dc;
    }
    ctx->pc = 0x4101D4u;
    {
        const bool branch_taken_0x4101d4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x4101d4) {
            ctx->pc = 0x4101D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4101D4u;
            // 0x4101d8: 0x8ee20108  lw          $v0, 0x108($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4100B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4100b4;
        }
    }
    ctx->pc = 0x4101DCu;
label_4101dc:
    // 0x4101dc: 0x8f84bdc8  lw          $a0, -0x4238($gp)
    ctx->pc = 0x4101dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
label_4101e0:
    // 0x4101e0: 0x2782bdc8  addiu       $v0, $gp, -0x4238
    ctx->pc = 0x4101e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294950344));
label_4101e4:
    // 0x4101e4: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x4101e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_4101e8:
    // 0x4101e8: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x4101e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
label_4101ec:
    // 0x4101ec: 0xae04001c  sw          $a0, 0x1C($s0)
    ctx->pc = 0x4101ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 4));
label_4101f0:
    // 0x4101f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4101f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4101f4:
    // 0x4101f4: 0x8f82bdc8  lw          $v0, -0x4238($gp)
    ctx->pc = 0x4101f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950344)));
label_4101f8:
    // 0x4101f8: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x4101f8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
label_4101fc:
    // 0x4101fc: 0xaf83bdc8  sw          $v1, -0x4238($gp)
    ctx->pc = 0x4101fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950344), GPR_U32(ctx, 3));
label_410200:
    // 0x410200: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x410200u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_410204:
    // 0x410204: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x410204u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_410208:
    // 0x410208: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x410208u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_41020c:
    // 0x41020c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x41020cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_410210:
    // 0x410210: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x410210u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_410214:
    // 0x410214: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x410214u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_410218:
    // 0x410218: 0x7bb50030  lq          $s5, 0x30($sp)
    ctx->pc = 0x410218u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_41021c:
    // 0x41021c: 0x7bb60020  lq          $s6, 0x20($sp)
    ctx->pc = 0x41021cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_410220:
    // 0x410220: 0x7bb70010  lq          $s7, 0x10($sp)
    ctx->pc = 0x410220u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_410224:
    // 0x410224: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x410224u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_410228:
    // 0x410228: 0x3e00008  jr          $ra
label_41022c:
    if (ctx->pc == 0x41022Cu) {
        ctx->pc = 0x41022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410228u;
        // 0x41022c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x410230u;
        goto label_fallthrough_0x410228;
    }
    ctx->pc = 0x410228u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41022Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x410228u;
        // 0x41022c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x410228u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x410228:
    ctx->pc = 0x410230u;
}
