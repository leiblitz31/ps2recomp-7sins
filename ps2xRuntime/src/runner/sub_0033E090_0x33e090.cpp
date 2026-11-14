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

// Function: sub_0033E090
// Address: 0x33e090 - 0x33e1e8
void sub_0033E090_0x33e090(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033E090_0x33e090");
#endif

    switch (ctx->pc) {
        case 0x33e0c0u: goto label_33e0c0;
        case 0x33e0d8u: goto label_33e0d8;
        case 0x33e104u: goto label_33e104;
        case 0x33e120u: goto label_33e120;
        case 0x33e138u: goto label_33e138;
        case 0x33e164u: goto label_33e164;
        case 0x33e180u: goto label_33e180;
        case 0x33e198u: goto label_33e198;
        case 0x33e1c4u: goto label_33e1c4;
        default: break;
    }

    ctx->pc = 0x33e090u;

    // 0x33e090: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x33e090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x33e094: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x33e094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x33e098: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x33e098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x33e09c: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x33e09cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x33e0a0: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x33e0a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e0a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x33e0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x33e0a8: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x33e0a8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e0ac: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e0acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e0b0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e0b4: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33e0b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33e0b8: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E0B8u;
    SET_GPR_U32(ctx, 31, 0x33E0C0u);
    ctx->pc = 0x33E0BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0B8u;
    // 0x33e0bc: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E0B8u, 0x33E0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0C0u;
label_33e0c0:
    // 0x33e0c0: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x33e0c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33e0c4: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e0c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e0c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33e0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e0cc: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x33e0ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x33e0d0: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E0D0u;
    SET_GPR_U32(ctx, 31, 0x33E0D8u);
    ctx->pc = 0x33E0D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0D0u;
    // 0x33e0d4: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E0D0u, 0x33E0D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E0D8u;
label_33e0d8:
    // 0x33e0d8: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x33E0D8u;
    {
        const bool branch_taken_0x33e0d8 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33E0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0D8u;
        // 0x33e0dc: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0d8) {
            ctx->pc = 0x33E10Cu;
            goto label_33e10c;
        }
    }
    ctx->pc = 0x33E0E0u;
    // 0x33e0e0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33E0E0u;
    {
        const bool branch_taken_0x33e0e0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33E0E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E0E0u;
        // 0x33e0e4: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e0e0) {
            ctx->pc = 0x33E10Cu;
            goto label_33e10c;
        }
    }
    ctx->pc = 0x33E0E8u;
    // 0x33e0e8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x33e0e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33e0ec: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x33e0ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33e0f0: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x33e0f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x33e0f4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e0f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e0f8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x33e0f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33e0fc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x33E0FCu;
    SET_GPR_U32(ctx, 31, 0x33E104u);
    ctx->pc = 0x33E100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E0FCu;
    // 0x33e100: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x33E0FCu, 0x33E104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E104u;
label_33e104:
    // 0x33e104: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x33e104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x33e108: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33e108u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33e10c:
    // 0x33e10c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e110: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e110u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e114: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x33e114u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x33e118: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E118u;
    SET_GPR_U32(ctx, 31, 0x33E120u);
    ctx->pc = 0x33E11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E118u;
    // 0x33e11c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E118u, 0x33E120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E120u;
label_33e120:
    // 0x33e120: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x33e120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33e124: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e124u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e128: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33e128u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e12c: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x33e12cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x33e130: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E130u;
    SET_GPR_U32(ctx, 31, 0x33E138u);
    ctx->pc = 0x33E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E130u;
    // 0x33e134: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E130u, 0x33E138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E138u;
label_33e138:
    // 0x33e138: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x33E138u;
    {
        const bool branch_taken_0x33e138 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33E13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E138u;
        // 0x33e13c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e138) {
            ctx->pc = 0x33E16Cu;
            goto label_33e16c;
        }
    }
    ctx->pc = 0x33E140u;
    // 0x33e140: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33E140u;
    {
        const bool branch_taken_0x33e140 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33E144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E140u;
        // 0x33e144: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e140) {
            ctx->pc = 0x33E16Cu;
            goto label_33e16c;
        }
    }
    ctx->pc = 0x33E148u;
    // 0x33e148: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x33e148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x33e14c: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x33e14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33e150: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x33e150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x33e154: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e158: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x33e158u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33e15c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x33E15Cu;
    SET_GPR_U32(ctx, 31, 0x33E164u);
    ctx->pc = 0x33E160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E15Cu;
    // 0x33e160: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x33E15Cu, 0x33E164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E164u;
label_33e164:
    // 0x33e164: 0x2603001c  addiu       $v1, $s0, 0x1C
    ctx->pc = 0x33e164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x33e168: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33e168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33e16c:
    // 0x33e16c: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x33e16cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x33e170: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e170u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e174: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x33e174u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x33e178: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E178u;
    SET_GPR_U32(ctx, 31, 0x33E180u);
    ctx->pc = 0x33E17Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E178u;
    // 0x33e17c: 0x8c440010  lw          $a0, 0x10($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E178u, 0x33E180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E180u;
label_33e180:
    // 0x33e180: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x33e180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x33e184: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x33e184u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
    // 0x33e188: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x33e188u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e18c: 0x34a50005  ori         $a1, $a1, 0x5
    ctx->pc = 0x33e18cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)5);
    // 0x33e190: 0xc0d120c  jal         func_344830
    ctx->pc = 0x33E190u;
    SET_GPR_U32(ctx, 31, 0x33E198u);
    ctx->pc = 0x33E194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E190u;
    // 0x33e194: 0x8c640010  lw          $a0, 0x10($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x344830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x344830u, 0x33E190u, 0x33E198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E198u;
label_33e198:
    // 0x33e198: 0x600000c  bltz        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x33E198u;
    {
        const bool branch_taken_0x33e198 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x33E19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E198u;
        // 0x33e19c: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e198) {
            ctx->pc = 0x33E1CCu;
            goto label_33e1cc;
        }
    }
    ctx->pc = 0x33E1A0u;
    // 0x33e1a0: 0x460000a  bltz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x33E1A0u;
    {
        const bool branch_taken_0x33e1a0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x33E1A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1A0u;
        // 0x33e1a4: 0x2502821  addu        $a1, $s2, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33e1a0) {
            ctx->pc = 0x33E1CCu;
            goto label_33e1cc;
        }
    }
    ctx->pc = 0x33E1A8u;
    // 0x33e1a8: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x33e1a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x33e1ac: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x33e1acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33e1b0: 0x2238021  addu        $s0, $s1, $v1
    ctx->pc = 0x33e1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x33e1b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x33e1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e1b8: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x33e1b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x33e1bc: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x33E1BCu;
    SET_GPR_U32(ctx, 31, 0x33E1C4u);
    ctx->pc = 0x33E1C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33E1BCu;
    // 0x33e1c0: 0x24c60014  addiu       $a2, $a2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x33E1BCu, 0x33E1C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33E1C4u;
label_33e1c4:
    // 0x33e1c4: 0x26030014  addiu       $v1, $s0, 0x14
    ctx->pc = 0x33e1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x33e1c8: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x33e1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_33e1cc:
    // 0x33e1cc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x33e1ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33e1d0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x33e1d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33e1d4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x33e1d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33e1d8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x33e1d8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33e1dc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x33e1dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33e1e0: 0x3e00008  jr          $ra
    ctx->pc = 0x33E1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33E1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33E1E0u;
        // 0x33e1e4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33E1E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33E1E8u;
}
