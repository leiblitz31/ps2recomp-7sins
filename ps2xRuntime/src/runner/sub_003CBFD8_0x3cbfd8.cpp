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

// Function: sub_003CBFD8
// Address: 0x3cbfd8 - 0x3cc1e0
void sub_003CBFD8_0x3cbfd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003CBFD8_0x3cbfd8");
#endif

    switch (ctx->pc) {
        case 0x3cbfd8u: goto label_3cbfd8;
        case 0x3cbfdcu: goto label_3cbfdc;
        case 0x3cbfe0u: goto label_3cbfe0;
        case 0x3cbfe4u: goto label_3cbfe4;
        case 0x3cbfe8u: goto label_3cbfe8;
        case 0x3cbfecu: goto label_3cbfec;
        case 0x3cbff0u: goto label_3cbff0;
        case 0x3cbff4u: goto label_3cbff4;
        case 0x3cbff8u: goto label_3cbff8;
        case 0x3cbffcu: goto label_3cbffc;
        case 0x3cc000u: goto label_3cc000;
        case 0x3cc004u: goto label_3cc004;
        case 0x3cc008u: goto label_3cc008;
        case 0x3cc00cu: goto label_3cc00c;
        case 0x3cc010u: goto label_3cc010;
        case 0x3cc014u: goto label_3cc014;
        case 0x3cc018u: goto label_3cc018;
        case 0x3cc01cu: goto label_3cc01c;
        case 0x3cc020u: goto label_3cc020;
        case 0x3cc024u: goto label_3cc024;
        case 0x3cc028u: goto label_3cc028;
        case 0x3cc02cu: goto label_3cc02c;
        case 0x3cc030u: goto label_3cc030;
        case 0x3cc034u: goto label_3cc034;
        case 0x3cc038u: goto label_3cc038;
        case 0x3cc03cu: goto label_3cc03c;
        case 0x3cc040u: goto label_3cc040;
        case 0x3cc044u: goto label_3cc044;
        case 0x3cc048u: goto label_3cc048;
        case 0x3cc04cu: goto label_3cc04c;
        case 0x3cc050u: goto label_3cc050;
        case 0x3cc054u: goto label_3cc054;
        case 0x3cc058u: goto label_3cc058;
        case 0x3cc05cu: goto label_3cc05c;
        case 0x3cc060u: goto label_3cc060;
        case 0x3cc064u: goto label_3cc064;
        case 0x3cc068u: goto label_3cc068;
        case 0x3cc06cu: goto label_3cc06c;
        case 0x3cc070u: goto label_3cc070;
        case 0x3cc074u: goto label_3cc074;
        case 0x3cc078u: goto label_3cc078;
        case 0x3cc07cu: goto label_3cc07c;
        case 0x3cc080u: goto label_3cc080;
        case 0x3cc084u: goto label_3cc084;
        case 0x3cc088u: goto label_3cc088;
        case 0x3cc08cu: goto label_3cc08c;
        case 0x3cc090u: goto label_3cc090;
        case 0x3cc094u: goto label_3cc094;
        case 0x3cc098u: goto label_3cc098;
        case 0x3cc09cu: goto label_3cc09c;
        case 0x3cc0a0u: goto label_3cc0a0;
        case 0x3cc0a4u: goto label_3cc0a4;
        case 0x3cc0a8u: goto label_3cc0a8;
        case 0x3cc0acu: goto label_3cc0ac;
        case 0x3cc0b0u: goto label_3cc0b0;
        case 0x3cc0b4u: goto label_3cc0b4;
        case 0x3cc0b8u: goto label_3cc0b8;
        case 0x3cc0bcu: goto label_3cc0bc;
        case 0x3cc0c0u: goto label_3cc0c0;
        case 0x3cc0c4u: goto label_3cc0c4;
        case 0x3cc0c8u: goto label_3cc0c8;
        case 0x3cc0ccu: goto label_3cc0cc;
        case 0x3cc0d0u: goto label_3cc0d0;
        case 0x3cc0d4u: goto label_3cc0d4;
        case 0x3cc0d8u: goto label_3cc0d8;
        case 0x3cc0dcu: goto label_3cc0dc;
        case 0x3cc0e0u: goto label_3cc0e0;
        case 0x3cc0e4u: goto label_3cc0e4;
        case 0x3cc0e8u: goto label_3cc0e8;
        case 0x3cc0ecu: goto label_3cc0ec;
        case 0x3cc0f0u: goto label_3cc0f0;
        case 0x3cc0f4u: goto label_3cc0f4;
        case 0x3cc0f8u: goto label_3cc0f8;
        case 0x3cc0fcu: goto label_3cc0fc;
        case 0x3cc100u: goto label_3cc100;
        case 0x3cc104u: goto label_3cc104;
        case 0x3cc108u: goto label_3cc108;
        case 0x3cc10cu: goto label_3cc10c;
        case 0x3cc110u: goto label_3cc110;
        case 0x3cc114u: goto label_3cc114;
        case 0x3cc118u: goto label_3cc118;
        case 0x3cc11cu: goto label_3cc11c;
        case 0x3cc120u: goto label_3cc120;
        case 0x3cc124u: goto label_3cc124;
        case 0x3cc128u: goto label_3cc128;
        case 0x3cc12cu: goto label_3cc12c;
        case 0x3cc130u: goto label_3cc130;
        case 0x3cc134u: goto label_3cc134;
        case 0x3cc138u: goto label_3cc138;
        case 0x3cc13cu: goto label_3cc13c;
        case 0x3cc140u: goto label_3cc140;
        case 0x3cc144u: goto label_3cc144;
        case 0x3cc148u: goto label_3cc148;
        case 0x3cc14cu: goto label_3cc14c;
        case 0x3cc150u: goto label_3cc150;
        case 0x3cc154u: goto label_3cc154;
        case 0x3cc158u: goto label_3cc158;
        case 0x3cc15cu: goto label_3cc15c;
        case 0x3cc160u: goto label_3cc160;
        case 0x3cc164u: goto label_3cc164;
        case 0x3cc168u: goto label_3cc168;
        case 0x3cc16cu: goto label_3cc16c;
        case 0x3cc170u: goto label_3cc170;
        case 0x3cc174u: goto label_3cc174;
        case 0x3cc178u: goto label_3cc178;
        case 0x3cc17cu: goto label_3cc17c;
        case 0x3cc180u: goto label_3cc180;
        case 0x3cc184u: goto label_3cc184;
        case 0x3cc188u: goto label_3cc188;
        case 0x3cc18cu: goto label_3cc18c;
        case 0x3cc190u: goto label_3cc190;
        case 0x3cc194u: goto label_3cc194;
        case 0x3cc198u: goto label_3cc198;
        case 0x3cc19cu: goto label_3cc19c;
        case 0x3cc1a0u: goto label_3cc1a0;
        case 0x3cc1a4u: goto label_3cc1a4;
        case 0x3cc1a8u: goto label_3cc1a8;
        case 0x3cc1acu: goto label_3cc1ac;
        case 0x3cc1b0u: goto label_3cc1b0;
        case 0x3cc1b4u: goto label_3cc1b4;
        case 0x3cc1b8u: goto label_3cc1b8;
        case 0x3cc1bcu: goto label_3cc1bc;
        case 0x3cc1c0u: goto label_3cc1c0;
        case 0x3cc1c4u: goto label_3cc1c4;
        case 0x3cc1c8u: goto label_3cc1c8;
        case 0x3cc1ccu: goto label_3cc1cc;
        case 0x3cc1d0u: goto label_3cc1d0;
        case 0x3cc1d4u: goto label_3cc1d4;
        case 0x3cc1d8u: goto label_3cc1d8;
        case 0x3cc1dcu: goto label_3cc1dc;
        default: break;
    }

    ctx->pc = 0x3cbfd8u;

label_3cbfd8:
    // 0x3cbfd8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3cbfd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3cbfdc:
    // 0x3cbfdc: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3cbfdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_3cbfe0:
    // 0x3cbfe0: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3cbfe0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_3cbfe4:
    // 0x3cbfe4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3cbfe4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3cbfe8:
    // 0x3cbfe8: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3cbfe8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_3cbfec:
    // 0x3cbfec: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x3cbfecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3cbff0:
    // 0x3cbff0: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3cbff0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_3cbff4:
    // 0x3cbff4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x3cbff4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3cbff8:
    // 0x3cbff8: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3cbff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_3cbffc:
    // 0x3cbffc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x3cbffcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3cc000:
    // 0x3cc000: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3cc000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_3cc004:
    // 0x3cc004: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3cc004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc008:
    // 0x3cc008: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3cc008u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc00c:
    // 0x3cc00c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3cc00cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3cc010:
    // 0x3cc010: 0xc0bb7e6  jal         func_2EDF98
label_3cc014:
    if (ctx->pc == 0x3CC014u) {
        ctx->pc = 0x3CC014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC010u;
        // 0x3cc014: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC018u;
        goto label_3cc018;
    }
    ctx->pc = 0x3CC010u;
    SET_GPR_U32(ctx, 31, 0x3CC018u);
    ctx->pc = 0x3CC014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC010u;
    // 0x3cc014: 0x24060040  addiu       $a2, $zero, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x3CC010u, 0x3CC018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC018u;
label_3cc018:
    // 0x3cc018: 0xc0f5386  jal         func_3D4E18
label_3cc01c:
    if (ctx->pc == 0x3CC01Cu) {
        ctx->pc = 0x3CC01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC018u;
        // 0x3cc01c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC020u;
        goto label_3cc020;
    }
    ctx->pc = 0x3CC018u;
    SET_GPR_U32(ctx, 31, 0x3CC020u);
    ctx->pc = 0x3CC01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC018u;
    // 0x3cc01c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4E18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4E18u, 0x3CC018u, 0x3CC020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC020u;
label_3cc020:
    // 0x3cc020: 0x8e720018  lw          $s2, 0x18($s3)
    ctx->pc = 0x3cc020u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_3cc024:
    // 0x3cc024: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3cc024u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3cc028:
    // 0x3cc028: 0x8c50b1e4  lw          $s0, -0x4E1C($v0)
    ctx->pc = 0x3cc028u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947300)));
label_3cc02c:
    // 0x3cc02c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc02cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc030:
    // 0x3cc030: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x3cc030u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_3cc034:
    // 0x3cc034: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x3cc034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_3cc038:
    // 0x3cc038: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x3cc038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_3cc03c:
    // 0x3cc03c: 0x2708021  addu        $s0, $s3, $s0
    ctx->pc = 0x3cc03cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_3cc040:
    // 0x3cc040: 0xafa5000c  sw          $a1, 0xC($sp)
    ctx->pc = 0x3cc040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
label_3cc044:
    // 0x3cc044: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x3cc044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_3cc048:
    // 0x3cc048: 0xafb10000  sw          $s1, 0x0($sp)
    ctx->pc = 0x3cc048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 17));
label_3cc04c:
    // 0x3cc04c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3cc04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
label_3cc050:
    // 0x3cc050: 0xc0e2048  jal         func_388120
label_3cc054:
    if (ctx->pc == 0x3CC054u) {
        ctx->pc = 0x3CC054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC050u;
        // 0x3cc054: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC058u;
        goto label_3cc058;
    }
    ctx->pc = 0x3CC050u;
    SET_GPR_U32(ctx, 31, 0x3CC058u);
    ctx->pc = 0x3CC054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC050u;
    // 0x3cc054: 0xafb00004  sw          $s0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x388120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x388120u, 0x3CC050u, 0x3CC058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC058u;
label_3cc058:
    // 0x3cc058: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3cc058u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3cc05c:
    // 0x3cc05c: 0xc106784  jal         func_419E10
label_3cc060:
    if (ctx->pc == 0x3CC060u) {
        ctx->pc = 0x3CC060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC05Cu;
        // 0x3cc060: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC064u;
        goto label_3cc064;
    }
    ctx->pc = 0x3CC05Cu;
    SET_GPR_U32(ctx, 31, 0x3CC064u);
    ctx->pc = 0x3CC060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC05Cu;
    // 0x3cc060: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x3CC05Cu, 0x3CC064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC064u;
label_3cc064:
    // 0x3cc064: 0x8e45005c  lw          $a1, 0x5C($s2)
    ctx->pc = 0x3cc064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 92)));
label_3cc068:
    // 0x3cc068: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3cc068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3cc06c:
    // 0x3cc06c: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x3cc06cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_3cc070:
    // 0x3cc070: 0x8e480014  lw          $t0, 0x14($s2)
    ctx->pc = 0x3cc070u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_3cc074:
    // 0x3cc074: 0x30840002  andi        $a0, $a0, 0x2
    ctx->pc = 0x3cc074u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_3cc078:
    // 0x3cc078: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x3cc078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_3cc07c:
    // 0x3cc07c: 0x8e470038  lw          $a3, 0x38($s2)
    ctx->pc = 0x3cc07cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_3cc080:
    // 0x3cc080: 0x8ca30018  lw          $v1, 0x18($a1)
    ctx->pc = 0x3cc080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_3cc084:
    // 0x3cc084: 0x8e460030  lw          $a2, 0x30($s2)
    ctx->pc = 0x3cc084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_3cc088:
    // 0x3cc088: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x3cc088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
label_3cc08c:
    // 0x3cc08c: 0xafa80020  sw          $t0, 0x20($sp)
    ctx->pc = 0x3cc08cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 8));
label_3cc090:
    // 0x3cc090: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3cc090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
label_3cc094:
    // 0x3cc094: 0xafa70030  sw          $a3, 0x30($sp)
    ctx->pc = 0x3cc094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 7));
label_3cc098:
    // 0x3cc098: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_3cc09c:
    if (ctx->pc == 0x3CC09Cu) {
        ctx->pc = 0x3CC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC098u;
        // 0x3cc09c: 0xafa60034  sw          $a2, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0A0u;
        goto label_3cc0a0;
    }
    ctx->pc = 0x3CC098u;
    {
        const bool branch_taken_0x3cc098 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC098u;
        // 0x3cc09c: 0xafa60034  sw          $a2, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc098) {
            ctx->pc = 0x3CC0ACu;
            goto label_3cc0ac;
        }
    }
    ctx->pc = 0x3CC0A0u;
label_3cc0a0:
    // 0x3cc0a0: 0x9642000c  lhu         $v0, 0xC($s2)
    ctx->pc = 0x3cc0a0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 12)));
label_3cc0a4:
    // 0x3cc0a4: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x3cc0a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
label_3cc0a8:
    // 0x3cc0a8: 0xa642000c  sh          $v0, 0xC($s2)
    ctx->pc = 0x3cc0a8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 12), (uint16_t)GPR_U32(ctx, 2));
label_3cc0ac:
    // 0x3cc0ac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x3cc0acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_3cc0b0:
    // 0x3cc0b0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3cc0b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_3cc0b4:
    // 0x3cc0b4: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
label_3cc0b8:
    if (ctx->pc == 0x3CC0B8u) {
        ctx->pc = 0x3CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0B4u;
        // 0x3cc0b8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0BCu;
        goto label_3cc0bc;
    }
    ctx->pc = 0x3CC0B4u;
    {
        const bool branch_taken_0x3cc0b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0B4u;
        // 0x3cc0b8: 0x3c050001  lui         $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc0b4) {
            ctx->pc = 0x3CC180u;
            goto label_3cc180;
        }
    }
    ctx->pc = 0x3CC0BCu;
label_3cc0bc:
    // 0x3cc0bc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3cc0bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3cc0c0:
    // 0x3cc0c0: 0xc103642  jal         func_40D908
label_3cc0c4:
    if (ctx->pc == 0x3CC0C4u) {
        ctx->pc = 0x3CC0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0C0u;
        // 0x3cc0c4: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC0C8u;
        goto label_3cc0c8;
    }
    ctx->pc = 0x3CC0C0u;
    SET_GPR_U32(ctx, 31, 0x3CC0C8u);
    ctx->pc = 0x3CC0C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC0C0u;
    // 0x3cc0c4: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3CC0C0u, 0x3CC0C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC0C8u;
label_3cc0c8:
    // 0x3cc0c8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3cc0c8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc0cc:
    // 0x3cc0cc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3cc0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3cc0d0:
    // 0x3cc0d0: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3cc0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3cc0d4:
    // 0x3cc0d4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3cc0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
label_3cc0d8:
    // 0x3cc0d8: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x3cc0d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3cc0dc:
    // 0x3cc0dc: 0xac83b34c  sw          $v1, -0x4CB4($a0)
    ctx->pc = 0x3cc0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294947660), GPR_U32(ctx, 3));
label_3cc0e0:
    // 0x3cc0e0: 0x9602000a  lhu         $v0, 0xA($s0)
    ctx->pc = 0x3cc0e0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
label_3cc0e4:
    // 0x3cc0e4: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x3cc0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
label_3cc0e8:
    // 0x3cc0e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3cc0e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3cc0ec:
    // 0x3cc0ec: 0x24a5d558  addiu       $a1, $a1, -0x2AA8
    ctx->pc = 0x3cc0ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956376));
label_3cc0f0:
    // 0x3cc0f0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3cc0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3cc0f4:
    // 0x3cc0f4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3cc0f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3cc0f8:
    // 0x3cc0f8: 0xc0e70a4  jal         func_39C290
label_3cc0fc:
    if (ctx->pc == 0x3CC0FCu) {
        ctx->pc = 0x3CC0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC0F8u;
        // 0x3cc0fc: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC100u;
        goto label_3cc100;
    }
    ctx->pc = 0x3CC0F8u;
    SET_GPR_U32(ctx, 31, 0x3CC100u);
    ctx->pc = 0x3CC0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC0F8u;
    // 0x3cc0fc: 0xa602000a  sh          $v0, 0xA($s0) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39C290u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39C290u, 0x3CC0F8u, 0x3CC100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC100u;
label_3cc100:
    // 0x3cc100: 0xc10376a  jal         func_40DDA8
label_3cc104:
    if (ctx->pc == 0x3CC104u) {
        ctx->pc = 0x3CC104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC100u;
        // 0x3cc104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC108u;
        goto label_3cc108;
    }
    ctx->pc = 0x3CC100u;
    SET_GPR_U32(ctx, 31, 0x3CC108u);
    ctx->pc = 0x3CC104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC100u;
    // 0x3cc104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3CC100u, 0x3CC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC108u;
label_3cc108:
    // 0x3cc108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3cc108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3cc10c:
    // 0x3cc10c: 0x10800018  beqz        $a0, . + 4 + (0x18 << 2)
label_3cc110:
    if (ctx->pc == 0x3CC110u) {
        ctx->pc = 0x3CC110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC10Cu;
        // 0x3cc110: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC114u;
        goto label_3cc114;
    }
    ctx->pc = 0x3CC10Cu;
    {
        const bool branch_taken_0x3cc10c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC10Cu;
        // 0x3cc110: 0xafa4003c  sw          $a0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc10c) {
            ctx->pc = 0x3CC170u;
            goto label_3cc170;
        }
    }
    ctx->pc = 0x3CC114u;
label_3cc114:
    // 0x3cc114: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x3cc114u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_3cc118:
    // 0x3cc118: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3cc118u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3cc11c:
    // 0x3cc11c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3cc11cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3cc120:
    // 0x3cc120: 0x40f809  jalr        $v0
label_3cc124:
    if (ctx->pc == 0x3CC124u) {
        ctx->pc = 0x3CC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC120u;
        // 0x3cc124: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC128u;
        goto label_3cc128;
    }
    ctx->pc = 0x3CC120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC128u);
        ctx->pc = 0x3CC124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC120u;
        // 0x3cc124: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC120u, 0x3CC128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC128u;
label_3cc128:
    // 0x3cc128: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3cc128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc12c:
    // 0x3cc12c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3cc12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3cc130:
    // 0x3cc130: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
label_3cc134:
    if (ctx->pc == 0x3CC134u) {
        ctx->pc = 0x3CC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC130u;
        // 0x3cc134: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC138u;
        goto label_3cc138;
    }
    ctx->pc = 0x3CC130u;
    {
        const bool branch_taken_0x3cc130 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x3CC134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC130u;
        // 0x3cc134: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc130) {
            ctx->pc = 0x3CC170u;
            goto label_3cc170;
        }
    }
    ctx->pc = 0x3CC138u;
label_3cc138:
    // 0x3cc138: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3cc138u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3cc13c:
    // 0x3cc13c: 0x0  nop
    ctx->pc = 0x3cc13cu;
    // NOP
label_3cc140:
    // 0x3cc140: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3cc140u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc144:
    // 0x3cc144: 0xc1036da  jal         func_40DB68
label_3cc148:
    if (ctx->pc == 0x3CC148u) {
        ctx->pc = 0x3CC148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC144u;
        // 0x3cc148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC14Cu;
        goto label_3cc14c;
    }
    ctx->pc = 0x3CC144u;
    SET_GPR_U32(ctx, 31, 0x3CC14Cu);
    ctx->pc = 0x3CC148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC144u;
    // 0x3cc148: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3CC144u, 0x3CC14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC14Cu;
label_3cc14c:
    // 0x3cc14c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3cc14cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3cc150:
    // 0x3cc150: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3cc150u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3cc154:
    // 0x3cc154: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3cc154u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3cc158:
    // 0x3cc158: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x3cc158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3cc15c:
    // 0x3cc15c: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x3cc15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
label_3cc160:
    // 0x3cc160: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x3cc160u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_3cc164:
    // 0x3cc164: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3cc164u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3cc168:
    // 0x3cc168: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_3cc16c:
    if (ctx->pc == 0x3CC16Cu) {
        ctx->pc = 0x3CC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC168u;
        // 0x3cc16c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC170u;
        goto label_3cc170;
    }
    ctx->pc = 0x3CC168u;
    {
        const bool branch_taken_0x3cc168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3CC16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC168u;
        // 0x3cc16c: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc168) {
            ctx->pc = 0x3CC140u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3cc140;
        }
    }
    ctx->pc = 0x3CC170u;
label_3cc170:
    // 0x3cc170: 0xc103684  jal         func_40DA10
label_3cc174:
    if (ctx->pc == 0x3CC174u) {
        ctx->pc = 0x3CC174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC170u;
        // 0x3cc174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC178u;
        goto label_3cc178;
    }
    ctx->pc = 0x3CC170u;
    SET_GPR_U32(ctx, 31, 0x3CC178u);
    ctx->pc = 0x3CC174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC170u;
    // 0x3cc174: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3CC170u, 0x3CC178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC178u;
label_3cc178:
    // 0x3cc178: 0x10000004  b           . + 4 + (0x4 << 2)
label_3cc17c:
    if (ctx->pc == 0x3CC17Cu) {
        ctx->pc = 0x3CC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC178u;
        // 0x3cc17c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC180u;
        goto label_3cc180;
    }
    ctx->pc = 0x3CC178u;
    {
        const bool branch_taken_0x3cc178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC178u;
        // 0x3cc17c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc178) {
            ctx->pc = 0x3CC18Cu;
            goto label_3cc18c;
        }
    }
    ctx->pc = 0x3CC180u;
label_3cc180:
    // 0x3cc180: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x3cc180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_3cc184:
    // 0x3cc184: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x3cc184u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_3cc188:
    // 0x3cc188: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3cc188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3cc18c:
    // 0x3cc18c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3cc18cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3cc190:
    // 0x3cc190: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3cc190u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3cc194:
    // 0x3cc194: 0xc0f2974  jal         func_3CA5D0
label_3cc198:
    if (ctx->pc == 0x3CC198u) {
        ctx->pc = 0x3CC198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC194u;
        // 0x3cc198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC19Cu;
        goto label_3cc19c;
    }
    ctx->pc = 0x3CC194u;
    SET_GPR_U32(ctx, 31, 0x3CC19Cu);
    ctx->pc = 0x3CC198u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3CC194u;
    // 0x3cc198: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3CA5D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3CA5D0u, 0x3CC194u, 0x3CC19Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3CC19Cu;
label_3cc19c:
    // 0x3cc19c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3cc19cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_3cc1a0:
    // 0x3cc1a0: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3cc1a4:
    if (ctx->pc == 0x3CC1A4u) {
        ctx->pc = 0x3CC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1A0u;
        // 0x3cc1a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC1A8u;
        goto label_3cc1a8;
    }
    ctx->pc = 0x3CC1A0u;
    {
        const bool branch_taken_0x3cc1a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3CC1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1A0u;
        // 0x3cc1a4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3cc1a0) {
            ctx->pc = 0x3CC1B8u;
            goto label_3cc1b8;
        }
    }
    ctx->pc = 0x3CC1A8u;
label_3cc1a8:
    // 0x3cc1a8: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3cc1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3cc1ac:
    // 0x3cc1ac: 0x8c62e98c  lw          $v0, -0x1674($v1)
    ctx->pc = 0x3cc1acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961548)));
label_3cc1b0:
    // 0x3cc1b0: 0x40f809  jalr        $v0
label_3cc1b4:
    if (ctx->pc == 0x3CC1B4u) {
        ctx->pc = 0x3CC1B8u;
        goto label_3cc1b8;
    }
    ctx->pc = 0x3CC1B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3CC1B8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC1B0u, 0x3CC1B8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3CC1B8u;
label_3cc1b8:
    // 0x3cc1b8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3cc1b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3cc1bc:
    // 0x3cc1bc: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3cc1bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3cc1c0:
    // 0x3cc1c0: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3cc1c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3cc1c4:
    // 0x3cc1c4: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3cc1c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3cc1c8:
    // 0x3cc1c8: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3cc1c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3cc1cc:
    // 0x3cc1cc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3cc1ccu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3cc1d0:
    // 0x3cc1d0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3cc1d0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3cc1d4:
    // 0x3cc1d4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3cc1d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3cc1d8:
    // 0x3cc1d8: 0x3e00008  jr          $ra
label_3cc1dc:
    if (ctx->pc == 0x3CC1DCu) {
        ctx->pc = 0x3CC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1D8u;
        // 0x3cc1dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3CC1E0u;
        goto label_fallthrough_0x3cc1d8;
    }
    ctx->pc = 0x3CC1D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3CC1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3CC1D8u;
        // 0x3cc1dc: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3CC1D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3cc1d8:
    ctx->pc = 0x3CC1E0u;
}
