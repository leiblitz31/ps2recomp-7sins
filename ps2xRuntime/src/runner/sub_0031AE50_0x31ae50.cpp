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

// Function: sub_0031AE50
// Address: 0x31ae50 - 0x31b1a8
void sub_0031AE50_0x31ae50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031AE50_0x31ae50");
#endif

    switch (ctx->pc) {
        case 0x31ae50u: goto label_31ae50;
        case 0x31ae54u: goto label_31ae54;
        case 0x31ae58u: goto label_31ae58;
        case 0x31ae5cu: goto label_31ae5c;
        case 0x31ae60u: goto label_31ae60;
        case 0x31ae64u: goto label_31ae64;
        case 0x31ae68u: goto label_31ae68;
        case 0x31ae6cu: goto label_31ae6c;
        case 0x31ae70u: goto label_31ae70;
        case 0x31ae74u: goto label_31ae74;
        case 0x31ae78u: goto label_31ae78;
        case 0x31ae7cu: goto label_31ae7c;
        case 0x31ae80u: goto label_31ae80;
        case 0x31ae84u: goto label_31ae84;
        case 0x31ae88u: goto label_31ae88;
        case 0x31ae8cu: goto label_31ae8c;
        case 0x31ae90u: goto label_31ae90;
        case 0x31ae94u: goto label_31ae94;
        case 0x31ae98u: goto label_31ae98;
        case 0x31ae9cu: goto label_31ae9c;
        case 0x31aea0u: goto label_31aea0;
        case 0x31aea4u: goto label_31aea4;
        case 0x31aea8u: goto label_31aea8;
        case 0x31aeacu: goto label_31aeac;
        case 0x31aeb0u: goto label_31aeb0;
        case 0x31aeb4u: goto label_31aeb4;
        case 0x31aeb8u: goto label_31aeb8;
        case 0x31aebcu: goto label_31aebc;
        case 0x31aec0u: goto label_31aec0;
        case 0x31aec4u: goto label_31aec4;
        case 0x31aec8u: goto label_31aec8;
        case 0x31aeccu: goto label_31aecc;
        case 0x31aed0u: goto label_31aed0;
        case 0x31aed4u: goto label_31aed4;
        case 0x31aed8u: goto label_31aed8;
        case 0x31aedcu: goto label_31aedc;
        case 0x31aee0u: goto label_31aee0;
        case 0x31aee4u: goto label_31aee4;
        case 0x31aee8u: goto label_31aee8;
        case 0x31aeecu: goto label_31aeec;
        case 0x31aef0u: goto label_31aef0;
        case 0x31aef4u: goto label_31aef4;
        case 0x31aef8u: goto label_31aef8;
        case 0x31aefcu: goto label_31aefc;
        case 0x31af00u: goto label_31af00;
        case 0x31af04u: goto label_31af04;
        case 0x31af08u: goto label_31af08;
        case 0x31af0cu: goto label_31af0c;
        case 0x31af10u: goto label_31af10;
        case 0x31af14u: goto label_31af14;
        case 0x31af18u: goto label_31af18;
        case 0x31af1cu: goto label_31af1c;
        case 0x31af20u: goto label_31af20;
        case 0x31af24u: goto label_31af24;
        case 0x31af28u: goto label_31af28;
        case 0x31af2cu: goto label_31af2c;
        case 0x31af30u: goto label_31af30;
        case 0x31af34u: goto label_31af34;
        case 0x31af38u: goto label_31af38;
        case 0x31af3cu: goto label_31af3c;
        case 0x31af40u: goto label_31af40;
        case 0x31af44u: goto label_31af44;
        case 0x31af48u: goto label_31af48;
        case 0x31af4cu: goto label_31af4c;
        case 0x31af50u: goto label_31af50;
        case 0x31af54u: goto label_31af54;
        case 0x31af58u: goto label_31af58;
        case 0x31af5cu: goto label_31af5c;
        case 0x31af60u: goto label_31af60;
        case 0x31af64u: goto label_31af64;
        case 0x31af68u: goto label_31af68;
        case 0x31af6cu: goto label_31af6c;
        case 0x31af70u: goto label_31af70;
        case 0x31af74u: goto label_31af74;
        case 0x31af78u: goto label_31af78;
        case 0x31af7cu: goto label_31af7c;
        case 0x31af80u: goto label_31af80;
        case 0x31af84u: goto label_31af84;
        case 0x31af88u: goto label_31af88;
        case 0x31af8cu: goto label_31af8c;
        case 0x31af90u: goto label_31af90;
        case 0x31af94u: goto label_31af94;
        case 0x31af98u: goto label_31af98;
        case 0x31af9cu: goto label_31af9c;
        case 0x31afa0u: goto label_31afa0;
        case 0x31afa4u: goto label_31afa4;
        case 0x31afa8u: goto label_31afa8;
        case 0x31afacu: goto label_31afac;
        case 0x31afb0u: goto label_31afb0;
        case 0x31afb4u: goto label_31afb4;
        case 0x31afb8u: goto label_31afb8;
        case 0x31afbcu: goto label_31afbc;
        case 0x31afc0u: goto label_31afc0;
        case 0x31afc4u: goto label_31afc4;
        case 0x31afc8u: goto label_31afc8;
        case 0x31afccu: goto label_31afcc;
        case 0x31afd0u: goto label_31afd0;
        case 0x31afd4u: goto label_31afd4;
        case 0x31afd8u: goto label_31afd8;
        case 0x31afdcu: goto label_31afdc;
        case 0x31afe0u: goto label_31afe0;
        case 0x31afe4u: goto label_31afe4;
        case 0x31afe8u: goto label_31afe8;
        case 0x31afecu: goto label_31afec;
        case 0x31aff0u: goto label_31aff0;
        case 0x31aff4u: goto label_31aff4;
        case 0x31aff8u: goto label_31aff8;
        case 0x31affcu: goto label_31affc;
        case 0x31b000u: goto label_31b000;
        case 0x31b004u: goto label_31b004;
        case 0x31b008u: goto label_31b008;
        case 0x31b00cu: goto label_31b00c;
        case 0x31b010u: goto label_31b010;
        case 0x31b014u: goto label_31b014;
        case 0x31b018u: goto label_31b018;
        case 0x31b01cu: goto label_31b01c;
        case 0x31b020u: goto label_31b020;
        case 0x31b024u: goto label_31b024;
        case 0x31b028u: goto label_31b028;
        case 0x31b02cu: goto label_31b02c;
        case 0x31b030u: goto label_31b030;
        case 0x31b034u: goto label_31b034;
        case 0x31b038u: goto label_31b038;
        case 0x31b03cu: goto label_31b03c;
        case 0x31b040u: goto label_31b040;
        case 0x31b044u: goto label_31b044;
        case 0x31b048u: goto label_31b048;
        case 0x31b04cu: goto label_31b04c;
        case 0x31b050u: goto label_31b050;
        case 0x31b054u: goto label_31b054;
        case 0x31b058u: goto label_31b058;
        case 0x31b05cu: goto label_31b05c;
        case 0x31b060u: goto label_31b060;
        case 0x31b064u: goto label_31b064;
        case 0x31b068u: goto label_31b068;
        case 0x31b06cu: goto label_31b06c;
        case 0x31b070u: goto label_31b070;
        case 0x31b074u: goto label_31b074;
        case 0x31b078u: goto label_31b078;
        case 0x31b07cu: goto label_31b07c;
        case 0x31b080u: goto label_31b080;
        case 0x31b084u: goto label_31b084;
        case 0x31b088u: goto label_31b088;
        case 0x31b08cu: goto label_31b08c;
        case 0x31b090u: goto label_31b090;
        case 0x31b094u: goto label_31b094;
        case 0x31b098u: goto label_31b098;
        case 0x31b09cu: goto label_31b09c;
        case 0x31b0a0u: goto label_31b0a0;
        case 0x31b0a4u: goto label_31b0a4;
        case 0x31b0a8u: goto label_31b0a8;
        case 0x31b0acu: goto label_31b0ac;
        case 0x31b0b0u: goto label_31b0b0;
        case 0x31b0b4u: goto label_31b0b4;
        case 0x31b0b8u: goto label_31b0b8;
        case 0x31b0bcu: goto label_31b0bc;
        case 0x31b0c0u: goto label_31b0c0;
        case 0x31b0c4u: goto label_31b0c4;
        case 0x31b0c8u: goto label_31b0c8;
        case 0x31b0ccu: goto label_31b0cc;
        case 0x31b0d0u: goto label_31b0d0;
        case 0x31b0d4u: goto label_31b0d4;
        case 0x31b0d8u: goto label_31b0d8;
        case 0x31b0dcu: goto label_31b0dc;
        case 0x31b0e0u: goto label_31b0e0;
        case 0x31b0e4u: goto label_31b0e4;
        case 0x31b0e8u: goto label_31b0e8;
        case 0x31b0ecu: goto label_31b0ec;
        case 0x31b0f0u: goto label_31b0f0;
        case 0x31b0f4u: goto label_31b0f4;
        case 0x31b0f8u: goto label_31b0f8;
        case 0x31b0fcu: goto label_31b0fc;
        case 0x31b100u: goto label_31b100;
        case 0x31b104u: goto label_31b104;
        case 0x31b108u: goto label_31b108;
        case 0x31b10cu: goto label_31b10c;
        case 0x31b110u: goto label_31b110;
        case 0x31b114u: goto label_31b114;
        case 0x31b118u: goto label_31b118;
        case 0x31b11cu: goto label_31b11c;
        case 0x31b120u: goto label_31b120;
        case 0x31b124u: goto label_31b124;
        case 0x31b128u: goto label_31b128;
        case 0x31b12cu: goto label_31b12c;
        case 0x31b130u: goto label_31b130;
        case 0x31b134u: goto label_31b134;
        case 0x31b138u: goto label_31b138;
        case 0x31b13cu: goto label_31b13c;
        case 0x31b140u: goto label_31b140;
        case 0x31b144u: goto label_31b144;
        case 0x31b148u: goto label_31b148;
        case 0x31b14cu: goto label_31b14c;
        case 0x31b150u: goto label_31b150;
        case 0x31b154u: goto label_31b154;
        case 0x31b158u: goto label_31b158;
        case 0x31b15cu: goto label_31b15c;
        case 0x31b160u: goto label_31b160;
        case 0x31b164u: goto label_31b164;
        case 0x31b168u: goto label_31b168;
        case 0x31b16cu: goto label_31b16c;
        case 0x31b170u: goto label_31b170;
        case 0x31b174u: goto label_31b174;
        case 0x31b178u: goto label_31b178;
        case 0x31b17cu: goto label_31b17c;
        case 0x31b180u: goto label_31b180;
        case 0x31b184u: goto label_31b184;
        case 0x31b188u: goto label_31b188;
        case 0x31b18cu: goto label_31b18c;
        case 0x31b190u: goto label_31b190;
        case 0x31b194u: goto label_31b194;
        case 0x31b198u: goto label_31b198;
        case 0x31b19cu: goto label_31b19c;
        case 0x31b1a0u: goto label_31b1a0;
        case 0x31b1a4u: goto label_31b1a4;
        default: break;
    }

    ctx->pc = 0x31ae50u;

label_31ae50:
    // 0x31ae50: 0x27bdfd20  addiu       $sp, $sp, -0x2E0
    ctx->pc = 0x31ae50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966560));
label_31ae54:
    // 0x31ae54: 0x7fb102c0  sq          $s1, 0x2C0($sp)
    ctx->pc = 0x31ae54u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 17));
label_31ae58:
    // 0x31ae58: 0x7fb202b0  sq          $s2, 0x2B0($sp)
    ctx->pc = 0x31ae58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 18));
label_31ae5c:
    // 0x31ae5c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x31ae5cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31ae60:
    // 0x31ae60: 0x7fb302a0  sq          $s3, 0x2A0($sp)
    ctx->pc = 0x31ae60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 672), GPR_VEC(ctx, 19));
label_31ae64:
    // 0x31ae64: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x31ae64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31ae68:
    // 0x31ae68: 0x7fb40290  sq          $s4, 0x290($sp)
    ctx->pc = 0x31ae68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 20));
label_31ae6c:
    // 0x31ae6c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x31ae6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_31ae70:
    // 0x31ae70: 0x7fb002d0  sq          $s0, 0x2D0($sp)
    ctx->pc = 0x31ae70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 16));
label_31ae74:
    // 0x31ae74: 0x7fb50280  sq          $s5, 0x280($sp)
    ctx->pc = 0x31ae74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 640), GPR_VEC(ctx, 21));
label_31ae78:
    // 0x31ae78: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x31ae78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
label_31ae7c:
    // 0x31ae7c: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x31ae7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_31ae80:
    // 0x31ae80: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x31ae80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_31ae84:
    // 0x31ae84: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x31ae84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_31ae88:
    // 0x31ae88: 0x104000bd  beqz        $v0, . + 4 + (0xBD << 2)
label_31ae8c:
    if (ctx->pc == 0x31AE8Cu) {
        ctx->pc = 0x31AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE88u;
        // 0x31ae8c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AE90u;
        goto label_31ae90;
    }
    ctx->pc = 0x31AE88u;
    {
        const bool branch_taken_0x31ae88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AE88u;
        // 0x31ae8c: 0xe0a02d  daddu       $s4, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ae88) {
            ctx->pc = 0x31B180u;
            goto label_31b180;
        }
    }
    ctx->pc = 0x31AE90u;
label_31ae90:
    // 0x31ae90: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x31ae90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
label_31ae94:
    // 0x31ae94: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x31ae94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_31ae98:
    // 0x31ae98: 0x2442b6b0  addiu       $v0, $v0, -0x4950
    ctx->pc = 0x31ae98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948528));
label_31ae9c:
    // 0x31ae9c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x31ae9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_31aea0:
    // 0x31aea0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31aea0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31aea4:
    // 0x31aea4: 0x800008  jr          $a0
label_31aea8:
    if (ctx->pc == 0x31AEA8u) {
        ctx->pc = 0x31AEACu;
        goto label_31aeac;
    }
    ctx->pc = 0x31AEA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x31AEACu: goto label_31aeac;
            case 0x31AFF4u: goto label_31aff4;
            case 0x31B010u: goto label_31b010;
            case 0x31B028u: goto label_31b028;
            case 0x31B13Cu: goto label_31b13c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AEA4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x31AEACu;
label_31aeac:
    // 0x31aeac: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x31aeacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_31aeb0:
    // 0x31aeb0: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x31aeb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31aeb4:
    // 0x31aeb4: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x31aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31aeb8:
    // 0x31aeb8: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x31aeb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31aebc:
    // 0x31aebc: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x31aebcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31aec0:
    // 0x31aec0: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x31aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_31aec4:
    // 0x31aec4: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x31aec4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_31aec8:
    // 0x31aec8: 0x6a290007  ldl         $t1, 0x7($s1)
    ctx->pc = 0x31aec8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_31aecc:
    // 0x31aecc: 0x6e290000  ldr         $t1, 0x0($s1)
    ctx->pc = 0x31aeccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_31aed0:
    // 0x31aed0: 0x8e2a0008  lw          $t2, 0x8($s1)
    ctx->pc = 0x31aed0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_31aed4:
    // 0x31aed4: 0xb3a90007  sdl         $t1, 0x7($sp)
    ctx->pc = 0x31aed4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31aed8:
    // 0x31aed8: 0xb7a90000  sdr         $t1, 0x0($sp)
    ctx->pc = 0x31aed8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31aedc:
    // 0x31aedc: 0xafaa0008  sw          $t2, 0x8($sp)
    ctx->pc = 0x31aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 10));
label_31aee0:
    // 0x31aee0: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x31aee0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_31aee4:
    // 0x31aee4: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x31aee4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_31aee8:
    // 0x31aee8: 0x6ba4000f  ldl         $a0, 0xF($sp)
    ctx->pc = 0x31aee8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_31aeec:
    // 0x31aeec: 0x6fa40008  ldr         $a0, 0x8($sp)
    ctx->pc = 0x31aeecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_31aef0:
    // 0x31aef0: 0x6ba50017  ldl         $a1, 0x17($sp)
    ctx->pc = 0x31aef0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_31aef4:
    // 0x31aef4: 0x6fa50010  ldr         $a1, 0x10($sp)
    ctx->pc = 0x31aef4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_31aef8:
    // 0x31aef8: 0xb3a30027  sdl         $v1, 0x27($sp)
    ctx->pc = 0x31aef8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31aefc:
    // 0x31aefc: 0xb7a30020  sdr         $v1, 0x20($sp)
    ctx->pc = 0x31aefcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31af00:
    // 0x31af00: 0xb3a4002f  sdl         $a0, 0x2F($sp)
    ctx->pc = 0x31af00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31af04:
    // 0x31af04: 0xb7a40028  sdr         $a0, 0x28($sp)
    ctx->pc = 0x31af04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31af08:
    // 0x31af08: 0xb3a50037  sdl         $a1, 0x37($sp)
    ctx->pc = 0x31af08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31af0c:
    // 0x31af0c: 0xb7a50030  sdr         $a1, 0x30($sp)
    ctx->pc = 0x31af0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31af10:
    // 0x31af10: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x31af10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_31af14:
    // 0x31af14: 0x27a3003c  addiu       $v1, $sp, 0x3C
    ctx->pc = 0x31af14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
label_31af18:
    // 0x31af18: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x31af18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_31af1c:
    // 0x31af1c: 0xafa20038  sw          $v0, 0x38($sp)
    ctx->pc = 0x31af1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
label_31af20:
    // 0x31af20: 0x27a30038  addiu       $v1, $sp, 0x38
    ctx->pc = 0x31af20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
label_31af24:
    // 0x31af24: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x31af24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_31af28:
    // 0x31af28: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x31af28u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31af2c:
    // 0x31af2c: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x31af2cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31af30:
    // 0x31af30: 0x10600094  beqz        $v1, . + 4 + (0x94 << 2)
label_31af34:
    if (ctx->pc == 0x31AF34u) {
        ctx->pc = 0x31AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF30u;
        // 0x31af34: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF38u;
        goto label_31af38;
    }
    ctx->pc = 0x31AF30u;
    {
        const bool branch_taken_0x31af30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF30u;
        // 0x31af34: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af30) {
            ctx->pc = 0x31B184u;
            goto label_31b184;
        }
    }
    ctx->pc = 0x31AF38u;
label_31af38:
    // 0x31af38: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x31af38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_31af3c:
    // 0x31af3c: 0x0  nop
    ctx->pc = 0x31af3cu;
    // NOP
label_31af40:
    // 0x31af40: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x31af40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_31af44:
    // 0x31af44: 0xafa3013c  sw          $v1, 0x13C($sp)
    ctx->pc = 0x31af44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 3));
label_31af48:
    // 0x31af48: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31af48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31af4c:
    // 0x31af4c: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_31af50:
    if (ctx->pc == 0x31AF50u) {
        ctx->pc = 0x31AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF4Cu;
        // 0x31af50: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF54u;
        goto label_31af54;
    }
    ctx->pc = 0x31AF4Cu;
    {
        const bool branch_taken_0x31af4c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x31AF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF4Cu;
        // 0x31af50: 0x8fa2013c  lw          $v0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af4c) {
            ctx->pc = 0x31AFC8u;
            goto label_31afc8;
        }
    }
    ctx->pc = 0x31AF54u;
label_31af54:
    // 0x31af54: 0x8fa4013c  lw          $a0, 0x13C($sp)
    ctx->pc = 0x31af54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_31af58:
    // 0x31af58: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31af58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31af5c:
    // 0x31af5c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31af60:
    // 0x31af60: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31af60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31af64:
    // 0x31af64: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x31af64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31af68:
    // 0x31af68: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31af68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31af6c:
    // 0x31af6c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31af6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31af70:
    // 0x31af70: 0x0  nop
    ctx->pc = 0x31af70u;
    // NOP
label_31af74:
    // 0x31af74: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_31af78:
    if (ctx->pc == 0x31AF78u) {
        ctx->pc = 0x31AF78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF74u;
        // 0x31af78: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF7Cu;
        goto label_31af7c;
    }
    ctx->pc = 0x31AF74u;
    {
        const bool branch_taken_0x31af74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31af74) {
            ctx->pc = 0x31AF78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AF74u;
            // 0x31af78: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF88u;
            goto label_31af88;
        }
    }
    ctx->pc = 0x31AF7Cu;
label_31af7c:
    // 0x31af7c: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31af7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_31af80:
    // 0x31af80: 0x1000000b  b           . + 4 + (0xB << 2)
label_31af84:
    if (ctx->pc == 0x31AF84u) {
        ctx->pc = 0x31AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF80u;
        // 0x31af84: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AF88u;
        goto label_31af88;
    }
    ctx->pc = 0x31AF80u;
    {
        const bool branch_taken_0x31af80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF80u;
        // 0x31af84: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af80) {
            ctx->pc = 0x31AFB0u;
            goto label_31afb0;
        }
    }
    ctx->pc = 0x31AF88u;
label_31af88:
    // 0x31af88: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x31af88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31af8c:
    // 0x31af8c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31af8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31af90:
    // 0x31af90: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31af90u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31af94:
    // 0x31af94: 0x0  nop
    ctx->pc = 0x31af94u;
    // NOP
label_31af98:
    // 0x31af98: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31af9c:
    if (ctx->pc == 0x31AF9Cu) {
        ctx->pc = 0x31AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF98u;
        // 0x31af9c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFA0u;
        goto label_31afa0;
    }
    ctx->pc = 0x31AF98u;
    {
        const bool branch_taken_0x31af98 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31AF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AF98u;
        // 0x31af9c: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31af98) {
            ctx->pc = 0x31AFB0u;
            goto label_31afb0;
        }
    }
    ctx->pc = 0x31AFA0u;
label_31afa0:
    // 0x31afa0: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x31afa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_31afa4:
    // 0x31afa4: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x31afa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_31afa8:
    // 0x31afa8: 0xafa2013c  sw          $v0, 0x13C($sp)
    ctx->pc = 0x31afa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 316), GPR_U32(ctx, 2));
label_31afac:
    // 0x31afac: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31afacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_31afb0:
    // 0x31afb0: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x31afb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_31afb4:
    // 0x31afb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31afb8:
    // 0x31afb8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31afb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31afbc:
    // 0x31afbc: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_31afc0:
    if (ctx->pc == 0x31AFC0u) {
        ctx->pc = 0x31AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFBCu;
        // 0x31afc0: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFC4u;
        goto label_31afc4;
    }
    ctx->pc = 0x31AFBCu;
    {
        const bool branch_taken_0x31afbc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x31AFC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFBCu;
        // 0x31afc0: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afbc) {
            ctx->pc = 0x31AF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af58;
        }
    }
    ctx->pc = 0x31AFC4u;
label_31afc4:
    // 0x31afc4: 0x8fa2013c  lw          $v0, 0x13C($sp)
    ctx->pc = 0x31afc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
label_31afc8:
    // 0x31afc8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31afc8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31afcc:
    // 0x31afcc: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x31afccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31afd0:
    // 0x31afd0: 0x260f809  jalr        $s3
label_31afd4:
    if (ctx->pc == 0x31AFD4u) {
        ctx->pc = 0x31AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFD0u;
        // 0x31afd4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFD8u;
        goto label_31afd8;
    }
    ctx->pc = 0x31AFD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x31AFD8u);
        ctx->pc = 0x31AFD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFD0u;
        // 0x31afd4: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31AFD0u, 0x31AFD8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31AFD8u;
label_31afd8:
    // 0x31afd8: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
label_31afdc:
    if (ctx->pc == 0x31AFDCu) {
        ctx->pc = 0x31AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFD8u;
        // 0x31afdc: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFE0u;
        goto label_31afe0;
    }
    ctx->pc = 0x31AFD8u;
    {
        const bool branch_taken_0x31afd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFD8u;
        // 0x31afdc: 0x8fa4013c  lw          $a0, 0x13C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 316)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afd8) {
            ctx->pc = 0x31B180u;
            goto label_31b180;
        }
    }
    ctx->pc = 0x31AFE0u;
label_31afe0:
    // 0x31afe0: 0x2a4102b  sltu        $v0, $s5, $a0
    ctx->pc = 0x31afe0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31afe4:
    // 0x31afe4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_31afe8:
    if (ctx->pc == 0x31AFE8u) {
        ctx->pc = 0x31AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFE4u;
        // 0x31afe8: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFECu;
        goto label_31afec;
    }
    ctx->pc = 0x31AFE4u;
    {
        const bool branch_taken_0x31afe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31afe4) {
            ctx->pc = 0x31AFE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31AFE4u;
            // 0x31afe8: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31AF40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31af40;
        }
    }
    ctx->pc = 0x31AFECu;
label_31afec:
    // 0x31afec: 0x10000065  b           . + 4 + (0x65 << 2)
label_31aff0:
    if (ctx->pc == 0x31AFF0u) {
        ctx->pc = 0x31AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFECu;
        // 0x31aff0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31AFF4u;
        goto label_31aff4;
    }
    ctx->pc = 0x31AFECu;
    {
        const bool branch_taken_0x31afec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31AFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31AFECu;
        // 0x31aff0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31afec) {
            ctx->pc = 0x31B184u;
            goto label_31b184;
        }
    }
    ctx->pc = 0x31AFF4u;
label_31aff4:
    // 0x31aff4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31aff4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31aff8:
    // 0x31aff8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x31aff8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31affc:
    // 0x31affc: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x31affcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31b000:
    // 0x31b000: 0xc0c5530  jal         func_3154C0
label_31b004:
    if (ctx->pc == 0x31B004u) {
        ctx->pc = 0x31B004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B000u;
        // 0x31b004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B008u;
        goto label_31b008;
    }
    ctx->pc = 0x31B000u;
    SET_GPR_U32(ctx, 31, 0x31B008u);
    ctx->pc = 0x31B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B000u;
    // 0x31b004: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3154C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3154C0u, 0x31B000u, 0x31B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B008u;
label_31b008:
    // 0x31b008: 0x1000005e  b           . + 4 + (0x5E << 2)
label_31b00c:
    if (ctx->pc == 0x31B00Cu) {
        ctx->pc = 0x31B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B008u;
        // 0x31b00c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B010u;
        goto label_31b010;
    }
    ctx->pc = 0x31B008u;
    {
        const bool branch_taken_0x31b008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B008u;
        // 0x31b00c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b008) {
            ctx->pc = 0x31B184u;
            goto label_31b184;
        }
    }
    ctx->pc = 0x31B010u;
label_31b010:
    // 0x31b010: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x31b010u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31b014:
    // 0x31b014: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31b014u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b018:
    // 0x31b018: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31b018u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31b01c:
    // 0x31b01c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31b01cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b020:
    // 0x31b020: 0x10000055  b           . + 4 + (0x55 << 2)
label_31b024:
    if (ctx->pc == 0x31B024u) {
        ctx->pc = 0x31B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B020u;
        // 0x31b024: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B028u;
        goto label_31b028;
    }
    ctx->pc = 0x31B020u;
    {
        const bool branch_taken_0x31b020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B020u;
        // 0x31b024: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b020) {
            ctx->pc = 0x31B178u;
            goto label_31b178;
        }
    }
    ctx->pc = 0x31B028u;
label_31b028:
    // 0x31b028: 0x27b00140  addiu       $s0, $sp, 0x140
    ctx->pc = 0x31b028u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
label_31b02c:
    // 0x31b02c: 0x6a2a0007  ldl         $t2, 0x7($s1)
    ctx->pc = 0x31b02cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_31b030:
    // 0x31b030: 0x6e2a0000  ldr         $t2, 0x0($s1)
    ctx->pc = 0x31b030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_31b034:
    // 0x31b034: 0x6a2b000f  ldl         $t3, 0xF($s1)
    ctx->pc = 0x31b034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_31b038:
    // 0x31b038: 0x6e2b0008  ldr         $t3, 0x8($s1)
    ctx->pc = 0x31b038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_31b03c:
    // 0x31b03c: 0x6a220017  ldl         $v0, 0x17($s1)
    ctx->pc = 0x31b03cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_31b040:
    // 0x31b040: 0x6e220010  ldr         $v0, 0x10($s1)
    ctx->pc = 0x31b040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_31b044:
    // 0x31b044: 0xb3aa0147  sdl         $t2, 0x147($sp)
    ctx->pc = 0x31b044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 327); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b048:
    // 0x31b048: 0xb7aa0140  sdr         $t2, 0x140($sp)
    ctx->pc = 0x31b048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 320); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b04c:
    // 0x31b04c: 0xb3ab014f  sdl         $t3, 0x14F($sp)
    ctx->pc = 0x31b04cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 335); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b050:
    // 0x31b050: 0xb7ab0148  sdr         $t3, 0x148($sp)
    ctx->pc = 0x31b050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 328); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b054:
    // 0x31b054: 0xb3a20157  sdl         $v0, 0x157($sp)
    ctx->pc = 0x31b054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 343); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b058:
    // 0x31b058: 0xb7a20150  sdr         $v0, 0x150($sp)
    ctx->pc = 0x31b058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 336); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b05c:
    // 0x31b05c: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x31b05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_31b060:
    // 0x31b060: 0x27a3015c  addiu       $v1, $sp, 0x15C
    ctx->pc = 0x31b060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 348));
label_31b064:
    // 0x31b064: 0xae03011c  sw          $v1, 0x11C($s0)
    ctx->pc = 0x31b064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 284), GPR_U32(ctx, 3));
label_31b068:
    // 0x31b068: 0xafa20158  sw          $v0, 0x158($sp)
    ctx->pc = 0x31b068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 2));
label_31b06c:
    // 0x31b06c: 0x27a30158  addiu       $v1, $sp, 0x158
    ctx->pc = 0x31b06cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 344));
label_31b070:
    // 0x31b070: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x31b070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_31b074:
    // 0x31b074: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x31b074u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31b078:
    // 0x31b078: 0x64182b  sltu        $v1, $v1, $a0
    ctx->pc = 0x31b078u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31b07c:
    // 0x31b07c: 0x10600041  beqz        $v1, . + 4 + (0x41 << 2)
label_31b080:
    if (ctx->pc == 0x31B080u) {
        ctx->pc = 0x31B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B07Cu;
        // 0x31b080: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B084u;
        goto label_31b084;
    }
    ctx->pc = 0x31B07Cu;
    {
        const bool branch_taken_0x31b07c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B07Cu;
        // 0x31b080: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b07c) {
            ctx->pc = 0x31B184u;
            goto label_31b184;
        }
    }
    ctx->pc = 0x31B084u;
label_31b084:
    // 0x31b084: 0x8c82fffc  lw          $v0, -0x4($a0)
    ctx->pc = 0x31b084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
label_31b088:
    // 0x31b088: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x31b088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_31b08c:
    // 0x31b08c: 0xafa3025c  sw          $v1, 0x25C($sp)
    ctx->pc = 0x31b08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 3));
label_31b090:
    // 0x31b090: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x31b090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31b094:
    // 0x31b094: 0x480001e  bltz        $a0, . + 4 + (0x1E << 2)
label_31b098:
    if (ctx->pc == 0x31B098u) {
        ctx->pc = 0x31B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B094u;
        // 0x31b098: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B09Cu;
        goto label_31b09c;
    }
    ctx->pc = 0x31B094u;
    {
        const bool branch_taken_0x31b094 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x31B098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B094u;
        // 0x31b098: 0x8fa2025c  lw          $v0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b094) {
            ctx->pc = 0x31B110u;
            goto label_31b110;
        }
    }
    ctx->pc = 0x31B09Cu;
label_31b09c:
    // 0x31b09c: 0x8fa4025c  lw          $a0, 0x25C($sp)
    ctx->pc = 0x31b09cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_31b0a0:
    // 0x31b0a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x31b0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_31b0a4:
    // 0x31b0a4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x31b0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31b0a8:
    // 0x31b0a8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x31b0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_31b0ac:
    // 0x31b0ac: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x31b0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31b0b0:
    // 0x31b0b0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x31b0b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_31b0b4:
    // 0x31b0b4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x31b0b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31b0b8:
    // 0x31b0b8: 0x0  nop
    ctx->pc = 0x31b0b8u;
    // NOP
label_31b0bc:
    // 0x31b0bc: 0x45020004  bc1fl       . + 4 + (0x4 << 2)
label_31b0c0:
    if (ctx->pc == 0x31B0C0u) {
        ctx->pc = 0x31B0C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0BCu;
        // 0x31b0c0: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0C4u;
        goto label_31b0c4;
    }
    ctx->pc = 0x31B0BCu;
    {
        const bool branch_taken_0x31b0bc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x31b0bc) {
            ctx->pc = 0x31B0C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B0BCu;
            // 0x31b0c0: 0xc440000c  lwc1        $f0, 0xC($v0) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B0D0u;
            goto label_31b0d0;
        }
    }
    ctx->pc = 0x31B0C4u;
label_31b0c4:
    // 0x31b0c4: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x31b0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_31b0c8:
    // 0x31b0c8: 0x1000000b  b           . + 4 + (0xB << 2)
label_31b0cc:
    if (ctx->pc == 0x31B0CCu) {
        ctx->pc = 0x31B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0C8u;
        // 0x31b0cc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0D0u;
        goto label_31b0d0;
    }
    ctx->pc = 0x31B0C8u;
    {
        const bool branch_taken_0x31b0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0C8u;
        // 0x31b0cc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0c8) {
            ctx->pc = 0x31B0F8u;
            goto label_31b0f8;
        }
    }
    ctx->pc = 0x31B0D0u;
label_31b0d0:
    // 0x31b0d0: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x31b0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_31b0d4:
    // 0x31b0d4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x31b0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_31b0d8:
    // 0x31b0d8: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x31b0d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_31b0dc:
    // 0x31b0dc: 0x0  nop
    ctx->pc = 0x31b0dcu;
    // NOP
label_31b0e0:
    // 0x31b0e0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_31b0e4:
    if (ctx->pc == 0x31B0E4u) {
        ctx->pc = 0x31B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0E0u;
        // 0x31b0e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B0E8u;
        goto label_31b0e8;
    }
    ctx->pc = 0x31B0E0u;
    {
        const bool branch_taken_0x31b0e0 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x31B0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B0E0u;
        // 0x31b0e4: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b0e0) {
            ctx->pc = 0x31B0F8u;
            goto label_31b0f8;
        }
    }
    ctx->pc = 0x31B0E8u;
label_31b0e8:
    // 0x31b0e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x31b0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_31b0ec:
    // 0x31b0ec: 0x24820004  addiu       $v0, $a0, 0x4
    ctx->pc = 0x31b0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_31b0f0:
    // 0x31b0f0: 0xafa2025c  sw          $v0, 0x25C($sp)
    ctx->pc = 0x31b0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 604), GPR_U32(ctx, 2));
label_31b0f4:
    // 0x31b0f4: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x31b0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
label_31b0f8:
    // 0x31b0f8: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x31b0f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_31b0fc:
    // 0x31b0fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x31b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31b100:
    // 0x31b100: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x31b100u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_31b104:
    // 0x31b104: 0x481ffe6  bgez        $a0, . + 4 + (-0x1A << 2)
label_31b108:
    if (ctx->pc == 0x31B108u) {
        ctx->pc = 0x31B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B104u;
        // 0x31b108: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B10Cu;
        goto label_31b10c;
    }
    ctx->pc = 0x31B104u;
    {
        const bool branch_taken_0x31b104 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x31B108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B104u;
        // 0x31b108: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b104) {
            ctx->pc = 0x31B0A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b0a0;
        }
    }
    ctx->pc = 0x31B10Cu;
label_31b10c:
    // 0x31b10c: 0x8fa2025c  lw          $v0, 0x25C($sp)
    ctx->pc = 0x31b10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
label_31b110:
    // 0x31b110: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31b110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31b114:
    // 0x31b114: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x31b114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_31b118:
    // 0x31b118: 0x260f809  jalr        $s3
label_31b11c:
    if (ctx->pc == 0x31B11Cu) {
        ctx->pc = 0x31B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B118u;
        // 0x31b11c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B120u;
        goto label_31b120;
    }
    ctx->pc = 0x31B118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x31B120u);
        ctx->pc = 0x31B11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B118u;
        // 0x31b11c: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B118u, 0x31B120u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31B120u;
label_31b120:
    // 0x31b120: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_31b124:
    if (ctx->pc == 0x31B124u) {
        ctx->pc = 0x31B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B120u;
        // 0x31b124: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B128u;
        goto label_31b128;
    }
    ctx->pc = 0x31B120u;
    {
        const bool branch_taken_0x31b120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B120u;
        // 0x31b124: 0x8fa4025c  lw          $a0, 0x25C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 604)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b120) {
            ctx->pc = 0x31B180u;
            goto label_31b180;
        }
    }
    ctx->pc = 0x31B128u;
label_31b128:
    // 0x31b128: 0x2a4102b  sltu        $v0, $s5, $a0
    ctx->pc = 0x31b128u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_31b12c:
    // 0x31b12c: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_31b130:
    if (ctx->pc == 0x31B130u) {
        ctx->pc = 0x31B130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B12Cu;
        // 0x31b130: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B134u;
        goto label_31b134;
    }
    ctx->pc = 0x31B12Cu;
    {
        const bool branch_taken_0x31b12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31b12c) {
            ctx->pc = 0x31B130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31B12Cu;
            // 0x31b130: 0x8c82fffc  lw          $v0, -0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31B088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31b088;
        }
    }
    ctx->pc = 0x31B134u;
label_31b134:
    // 0x31b134: 0x10000013  b           . + 4 + (0x13 << 2)
label_31b138:
    if (ctx->pc == 0x31B138u) {
        ctx->pc = 0x31B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B134u;
        // 0x31b138: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B13Cu;
        goto label_31b13c;
    }
    ctx->pc = 0x31B134u;
    {
        const bool branch_taken_0x31b134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31B138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B134u;
        // 0x31b138: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31b134) {
            ctx->pc = 0x31B184u;
            goto label_31b184;
        }
    }
    ctx->pc = 0x31B13Cu;
label_31b13c:
    // 0x31b13c: 0xc0e2048  jal         func_388120
label_31b140:
    if (ctx->pc == 0x31B140u) {
        ctx->pc = 0x31B140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B13Cu;
        // 0x31b140: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B144u;
        goto label_31b144;
    }
    ctx->pc = 0x31B13Cu;
    SET_GPR_U32(ctx, 31, 0x31B144u);
    ctx->pc = 0x31B140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31B13Cu;
    // 0x31b140: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x31B13Cu, 0x31B144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B144u;
label_31b144:
    // 0x31b144: 0x68490007  ldl         $t1, 0x7($v0)
    ctx->pc = 0x31b144u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_31b148:
    // 0x31b148: 0x6c490000  ldr         $t1, 0x0($v0)
    ctx->pc = 0x31b148u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_31b14c:
    // 0x31b14c: 0x684a000f  ldl         $t2, 0xF($v0)
    ctx->pc = 0x31b14cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_31b150:
    // 0x31b150: 0x6c4a0008  ldr         $t2, 0x8($v0)
    ctx->pc = 0x31b150u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_31b154:
    // 0x31b154: 0xb3a90267  sdl         $t1, 0x267($sp)
    ctx->pc = 0x31b154u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 615); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b158:
    // 0x31b158: 0xb7a90260  sdr         $t1, 0x260($sp)
    ctx->pc = 0x31b158u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 608); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b15c:
    // 0x31b15c: 0xb3aa026f  sdl         $t2, 0x26F($sp)
    ctx->pc = 0x31b15cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 623); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b160:
    // 0x31b160: 0xb7aa0268  sdr         $t2, 0x268($sp)
    ctx->pc = 0x31b160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 616); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_31b164:
    // 0x31b164: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x31b164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31b168:
    // 0x31b168: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x31b168u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_31b16c:
    // 0x31b16c: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x31b16cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_31b170:
    // 0x31b170: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b174:
    // 0x31b174: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x31b174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
label_31b178:
    // 0x31b178: 0xc0c5604  jal         func_315810
label_31b17c:
    if (ctx->pc == 0x31B17Cu) {
        ctx->pc = 0x31B180u;
        goto label_31b180;
    }
    ctx->pc = 0x31B178u;
    SET_GPR_U32(ctx, 31, 0x31B180u);
    ctx->pc = 0x315810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x315810u, 0x31B178u, 0x31B180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31B180u;
label_31b180:
    // 0x31b180: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x31b180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_31b184:
    // 0x31b184: 0x7bb002d0  lq          $s0, 0x2D0($sp)
    ctx->pc = 0x31b184u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 720)));
label_31b188:
    // 0x31b188: 0x7bb102c0  lq          $s1, 0x2C0($sp)
    ctx->pc = 0x31b188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 704)));
label_31b18c:
    // 0x31b18c: 0x7bb202b0  lq          $s2, 0x2B0($sp)
    ctx->pc = 0x31b18cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 688)));
label_31b190:
    // 0x31b190: 0x7bb302a0  lq          $s3, 0x2A0($sp)
    ctx->pc = 0x31b190u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 672)));
label_31b194:
    // 0x31b194: 0x7bb40290  lq          $s4, 0x290($sp)
    ctx->pc = 0x31b194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 656)));
label_31b198:
    // 0x31b198: 0x7bb50280  lq          $s5, 0x280($sp)
    ctx->pc = 0x31b198u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 640)));
label_31b19c:
    // 0x31b19c: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x31b19cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_31b1a0:
    // 0x31b1a0: 0x3e00008  jr          $ra
label_31b1a4:
    if (ctx->pc == 0x31B1A4u) {
        ctx->pc = 0x31B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1A0u;
        // 0x31b1a4: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31B1A8u;
        goto label_fallthrough_0x31b1a0;
    }
    ctx->pc = 0x31B1A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31B1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31B1A0u;
        // 0x31b1a4: 0x27bd02e0  addiu       $sp, $sp, 0x2E0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31B1A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x31b1a0:
    ctx->pc = 0x31B1A8u;
}
