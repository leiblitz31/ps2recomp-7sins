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

// Function: sub_003B40E0
// Address: 0x3b40e0 - 0x3b41b8
void sub_003B40E0_0x3b40e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B40E0_0x3b40e0");
#endif

    switch (ctx->pc) {
        case 0x3b40e0u: goto label_3b40e0;
        case 0x3b40e4u: goto label_3b40e4;
        case 0x3b40e8u: goto label_3b40e8;
        case 0x3b40ecu: goto label_3b40ec;
        case 0x3b40f0u: goto label_3b40f0;
        case 0x3b40f4u: goto label_3b40f4;
        case 0x3b40f8u: goto label_3b40f8;
        case 0x3b40fcu: goto label_3b40fc;
        case 0x3b4100u: goto label_3b4100;
        case 0x3b4104u: goto label_3b4104;
        case 0x3b4108u: goto label_3b4108;
        case 0x3b410cu: goto label_3b410c;
        case 0x3b4110u: goto label_3b4110;
        case 0x3b4114u: goto label_3b4114;
        case 0x3b4118u: goto label_3b4118;
        case 0x3b411cu: goto label_3b411c;
        case 0x3b4120u: goto label_3b4120;
        case 0x3b4124u: goto label_3b4124;
        case 0x3b4128u: goto label_3b4128;
        case 0x3b412cu: goto label_3b412c;
        case 0x3b4130u: goto label_3b4130;
        case 0x3b4134u: goto label_3b4134;
        case 0x3b4138u: goto label_3b4138;
        case 0x3b413cu: goto label_3b413c;
        case 0x3b4140u: goto label_3b4140;
        case 0x3b4144u: goto label_3b4144;
        case 0x3b4148u: goto label_3b4148;
        case 0x3b414cu: goto label_3b414c;
        case 0x3b4150u: goto label_3b4150;
        case 0x3b4154u: goto label_3b4154;
        case 0x3b4158u: goto label_3b4158;
        case 0x3b415cu: goto label_3b415c;
        case 0x3b4160u: goto label_3b4160;
        case 0x3b4164u: goto label_3b4164;
        case 0x3b4168u: goto label_3b4168;
        case 0x3b416cu: goto label_3b416c;
        case 0x3b4170u: goto label_3b4170;
        case 0x3b4174u: goto label_3b4174;
        case 0x3b4178u: goto label_3b4178;
        case 0x3b417cu: goto label_3b417c;
        case 0x3b4180u: goto label_3b4180;
        case 0x3b4184u: goto label_3b4184;
        case 0x3b4188u: goto label_3b4188;
        case 0x3b418cu: goto label_3b418c;
        case 0x3b4190u: goto label_3b4190;
        case 0x3b4194u: goto label_3b4194;
        case 0x3b4198u: goto label_3b4198;
        case 0x3b419cu: goto label_3b419c;
        case 0x3b41a0u: goto label_3b41a0;
        case 0x3b41a4u: goto label_3b41a4;
        case 0x3b41a8u: goto label_3b41a8;
        case 0x3b41acu: goto label_3b41ac;
        case 0x3b41b0u: goto label_3b41b0;
        case 0x3b41b4u: goto label_3b41b4;
        default: break;
    }

    ctx->pc = 0x3b40e0u;

label_3b40e0:
    // 0x3b40e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b40e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3b40e4:
    // 0x3b40e4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3b40e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3b40e8:
    // 0x3b40e8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b40e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_3b40ec:
    // 0x3b40ec: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b40ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3b40f0:
    // 0x3b40f0: 0xc0ed30a  jal         func_3B4C28
label_3b40f4:
    if (ctx->pc == 0x3B40F4u) {
        ctx->pc = 0x3B40F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40F0u;
        // 0x3b40f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B40F8u;
        goto label_3b40f8;
    }
    ctx->pc = 0x3B40F0u;
    SET_GPR_U32(ctx, 31, 0x3B40F8u);
    ctx->pc = 0x3B40F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B40F0u;
    // 0x3b40f4: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C28u, 0x3B40F0u, 0x3B40F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B40F8u;
label_3b40f8:
    // 0x3b40f8: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x3b40f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_3b40fc:
    // 0x3b40fc: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_3b4100:
    if (ctx->pc == 0x3B4100u) {
        ctx->pc = 0x3B4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40FCu;
        // 0x3b4100: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4104u;
        goto label_3b4104;
    }
    ctx->pc = 0x3B40FCu;
    {
        const bool branch_taken_0x3b40fc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B40FCu;
        // 0x3b4100: 0x24500008  addiu       $s0, $v0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b40fc) {
            ctx->pc = 0x3B4174u;
            goto label_3b4174;
        }
    }
    ctx->pc = 0x3B4104u;
label_3b4104:
    // 0x3b4104: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x3b4104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_3b4108:
    // 0x3b4108: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x3b4108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_3b410c:
    // 0x3b410c: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_3b4110:
    if (ctx->pc == 0x3B4110u) {
        ctx->pc = 0x3B4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B410Cu;
        // 0x3b4110: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4114u;
        goto label_3b4114;
    }
    ctx->pc = 0x3B410Cu;
    {
        const bool branch_taken_0x3b410c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B410Cu;
        // 0x3b4110: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b410c) {
            ctx->pc = 0x3B4164u;
            goto label_3b4164;
        }
    }
    ctx->pc = 0x3B4114u;
label_3b4114:
    // 0x3b4114: 0xc0eb422  jal         func_3AD088
label_3b4118:
    if (ctx->pc == 0x3B4118u) {
        ctx->pc = 0x3B411Cu;
        goto label_3b411c;
    }
    ctx->pc = 0x3B4114u;
    SET_GPR_U32(ctx, 31, 0x3B411Cu);
    ctx->pc = 0x3AD088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AD088u, 0x3B4114u, 0x3B411Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B411Cu;
label_3b411c:
    // 0x3b411c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_3b4120:
    if (ctx->pc == 0x3B4120u) {
        ctx->pc = 0x3B4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B411Cu;
        // 0x3b4120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4124u;
        goto label_3b4124;
    }
    ctx->pc = 0x3B411Cu;
    {
        const bool branch_taken_0x3b411c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B411Cu;
        // 0x3b4120: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b411c) {
            ctx->pc = 0x3B4160u;
            goto label_3b4160;
        }
    }
    ctx->pc = 0x3B4124u;
label_3b4124:
    // 0x3b4124: 0x10000003  b           . + 4 + (0x3 << 2)
label_3b4128:
    if (ctx->pc == 0x3B4128u) {
        ctx->pc = 0x3B4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4124u;
        // 0x3b4128: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B412Cu;
        goto label_3b412c;
    }
    ctx->pc = 0x3B4124u;
    {
        const bool branch_taken_0x3b4124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4124u;
        // 0x3b4128: 0x8e2300b0  lw          $v1, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4124) {
            ctx->pc = 0x3B4134u;
            goto label_3b4134;
        }
    }
    ctx->pc = 0x3B412Cu;
label_3b412c:
    // 0x3b412c: 0x0  nop
    ctx->pc = 0x3b412cu;
    // NOP
label_3b4130:
    // 0x3b4130: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x3b4130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
label_3b4134:
    // 0x3b4134: 0x80620000  lb          $v0, 0x0($v1)
    ctx->pc = 0x3b4134u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_3b4138:
    // 0x3b4138: 0x0  nop
    ctx->pc = 0x3b4138u;
    // NOP
label_3b413c:
    // 0x3b413c: 0x0  nop
    ctx->pc = 0x3b413cu;
    // NOP
label_3b4140:
    // 0x3b4140: 0x0  nop
    ctx->pc = 0x3b4140u;
    // NOP
label_3b4144:
    // 0x3b4144: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_3b4148:
    if (ctx->pc == 0x3B4148u) {
        ctx->pc = 0x3B4148u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4144u;
        // 0x3b4148: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B414Cu;
        goto label_3b414c;
    }
    ctx->pc = 0x3B4144u;
    {
        const bool branch_taken_0x3b4144 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b4144) {
            ctx->pc = 0x3B4148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B4144u;
            // 0x3b4148: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4130;
        }
    }
    ctx->pc = 0x3B414Cu;
label_3b414c:
    // 0x3b414c: 0x80620001  lb          $v0, 0x1($v1)
    ctx->pc = 0x3b414cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
label_3b4150:
    // 0x3b4150: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3b4154:
    if (ctx->pc == 0x3B4154u) {
        ctx->pc = 0x3B4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4150u;
        // 0x3b4154: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4158u;
        goto label_3b4158;
    }
    ctx->pc = 0x3B4150u;
    {
        const bool branch_taken_0x3b4150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B4154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4150u;
        // 0x3b4154: 0x24630002  addiu       $v1, $v1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4150) {
            ctx->pc = 0x3B4130u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b4130;
        }
    }
    ctx->pc = 0x3B4158u;
label_3b4158:
    // 0x3b4158: 0x10000006  b           . + 4 + (0x6 << 2)
label_3b415c:
    if (ctx->pc == 0x3B415Cu) {
        ctx->pc = 0x3B415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4158u;
        // 0x3b415c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4160u;
        goto label_3b4160;
    }
    ctx->pc = 0x3B4158u;
    {
        const bool branch_taken_0x3b4158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B415Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4158u;
        // 0x3b415c: 0x2048021  addu        $s0, $s0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4158) {
            ctx->pc = 0x3B4174u;
            goto label_3b4174;
        }
    }
    ctx->pc = 0x3B4160u;
label_3b4160:
    // 0x3b4160: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3b4160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3b4164:
    // 0x3b4164: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x3b4164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_3b4168:
    // 0x3b4168: 0x40f809  jalr        $v0
label_3b416c:
    if (ctx->pc == 0x3B416Cu) {
        ctx->pc = 0x3B416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4168u;
        // 0x3b416c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4170u;
        goto label_3b4170;
    }
    ctx->pc = 0x3B4168u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4170u);
        ctx->pc = 0x3B416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4168u;
        // 0x3b416c: 0x8e2400b0  lw          $a0, 0xB0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4168u, 0x3B4170u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4170u;
label_3b4170:
    // 0x3b4170: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b4170u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b4174:
    // 0x3b4174: 0x8e2400c0  lw          $a0, 0xC0($s1)
    ctx->pc = 0x3b4174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_3b4178:
    // 0x3b4178: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
label_3b417c:
    if (ctx->pc == 0x3B417Cu) {
        ctx->pc = 0x3B417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4178u;
        // 0x3b417c: 0x26100005  addiu       $s0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B4180u;
        goto label_3b4180;
    }
    ctx->pc = 0x3B4178u;
    {
        const bool branch_taken_0x3b4178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4178u;
        // 0x3b417c: 0x26100005  addiu       $s0, $s0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4178) {
            ctx->pc = 0x3B419Cu;
            goto label_3b419c;
        }
    }
    ctx->pc = 0x3B4180u;
label_3b4180:
    // 0x3b4180: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3b4180u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3b4184:
    // 0x3b4184: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_3b4188:
    if (ctx->pc == 0x3B4188u) {
        ctx->pc = 0x3B4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4184u;
        // 0x3b4188: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B418Cu;
        goto label_3b418c;
    }
    ctx->pc = 0x3B4184u;
    {
        const bool branch_taken_0x3b4184 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B4188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4184u;
        // 0x3b4188: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b4184) {
            ctx->pc = 0x3B419Cu;
            goto label_3b419c;
        }
    }
    ctx->pc = 0x3B418Cu;
label_3b418c:
    // 0x3b418c: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x3b418cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_3b4190:
    // 0x3b4190: 0x40f809  jalr        $v0
label_3b4194:
    if (ctx->pc == 0x3B4194u) {
        ctx->pc = 0x3B4198u;
        goto label_3b4198;
    }
    ctx->pc = 0x3B4190u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B4198u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4190u, 0x3B4198u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B4198u;
label_3b4198:
    // 0x3b4198: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x3b4198u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_3b419c:
    // 0x3b419c: 0x2602000d  addiu       $v0, $s0, 0xD
    ctx->pc = 0x3b419cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_3b41a0:
    // 0x3b41a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3b41a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3b41a4:
    // 0x3b41a4: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b41a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3b41a8:
    // 0x3b41a8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b41a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3b41ac:
    // 0x3b41ac: 0x3e00008  jr          $ra
label_3b41b0:
    if (ctx->pc == 0x3B41B0u) {
        ctx->pc = 0x3B41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41ACu;
        // 0x3b41b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B41B4u;
        goto label_3b41b4;
    }
    ctx->pc = 0x3B41ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B41ACu;
        // 0x3b41b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B41ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B41B4u;
label_3b41b4:
    // 0x3b41b4: 0x0  nop
    ctx->pc = 0x3b41b4u;
    // NOP
    ctx->pc = 0x3b41b8u;
}
