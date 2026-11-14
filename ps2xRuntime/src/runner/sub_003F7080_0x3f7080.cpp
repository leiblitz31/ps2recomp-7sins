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

// Function: sub_003F7080
// Address: 0x3f7080 - 0x3f73b0
void sub_003F7080_0x3f7080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F7080_0x3f7080");
#endif

    switch (ctx->pc) {
        case 0x3f70c0u: goto label_3f70c0;
        case 0x3f70f4u: goto label_3f70f4;
        case 0x3f7108u: goto label_3f7108;
        case 0x3f7120u: goto label_3f7120;
        case 0x3f7130u: goto label_3f7130;
        case 0x3f7154u: goto label_3f7154;
        case 0x3f7164u: goto label_3f7164;
        case 0x3f716cu: goto label_3f716c;
        case 0x3f71d0u: goto label_3f71d0;
        case 0x3f71e8u: goto label_3f71e8;
        case 0x3f7200u: goto label_3f7200;
        case 0x3f7210u: goto label_3f7210;
        case 0x3f7234u: goto label_3f7234;
        case 0x3f7244u: goto label_3f7244;
        case 0x3f724cu: goto label_3f724c;
        case 0x3f7294u: goto label_3f7294;
        case 0x3f72a8u: goto label_3f72a8;
        case 0x3f72c0u: goto label_3f72c0;
        case 0x3f72d0u: goto label_3f72d0;
        case 0x3f72d8u: goto label_3f72d8;
        case 0x3f7324u: goto label_3f7324;
        case 0x3f7338u: goto label_3f7338;
        case 0x3f7390u: goto label_3f7390;
        default: break;
    }

    ctx->pc = 0x3f7080u;

    // 0x3f7080: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3f7080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3f7084: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3f7084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3f7088: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3f7088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3f708c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x3f708cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7090: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3f7090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3f7094: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3f7094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3f7098: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f7098u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f709c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3f709cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3f70a0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f70a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f70a4: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f70a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f70a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3f70a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3f70ac: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F70ACu;
    {
        const bool branch_taken_0x3f70ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F70B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F70ACu;
        // 0x3f70b0: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f70ac) {
            ctx->pc = 0x3F70C8u;
            goto label_3f70c8;
        }
    }
    ctx->pc = 0x3F70B4u;
    // 0x3f70b4: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f70b4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f70b8: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F70B8u;
    SET_GPR_U32(ctx, 31, 0x3F70C0u);
    ctx->pc = 0x3F70BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F70B8u;
    // 0x3f70bc: 0x24a5f560  addiu       $a1, $a1, -0xAA0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F70B8u, 0x3F70C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F70C0u;
label_3f70c0:
    // 0x3f70c0: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x3F70C0u;
    {
        const bool branch_taken_0x3f70c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F70C0u;
        // 0x3f70c4: 0xde4300f8  ld          $v1, 0xF8($s2) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f70c0) {
            ctx->pc = 0x3F719Cu;
            goto label_3f719c;
        }
    }
    ctx->pc = 0x3F70C8u;
label_3f70c8:
    // 0x3f70c8: 0x52200034  beql        $s1, $zero, . + 4 + (0x34 << 2)
    ctx->pc = 0x3F70C8u;
    {
        const bool branch_taken_0x3f70c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f70c8) {
            ctx->pc = 0x3F70CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F70C8u;
            // 0x3f70cc: 0xde4300f8  ld          $v1, 0xF8($s2) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F719Cu;
            goto label_3f719c;
        }
    }
    ctx->pc = 0x3F70D0u;
    // 0x3f70d0: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3f70d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3f70d4: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f70d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f70d8: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
    ctx->pc = 0x3F70D8u;
    {
        const bool branch_taken_0x3f70d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F70D8u;
        // 0x3f70dc: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f70d8) {
            ctx->pc = 0x3F7198u;
            goto label_3f7198;
        }
    }
    ctx->pc = 0x3F70E0u;
    // 0x3f70e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f70e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f70e4: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f70e4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f70e8: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f70e8u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f70ec: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F70ECu;
    SET_GPR_U32(ctx, 31, 0x3F70F4u);
    ctx->pc = 0x3F70F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F70ECu;
    // 0x3f70f0: 0x24a5f578  addiu       $a1, $a1, -0xA88 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F70ECu, 0x3F70F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F70F4u;
label_3f70f4:
    // 0x3f70f4: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f70f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f70f8: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f70f8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f70fc: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x3F70FCu;
    {
        const bool branch_taken_0x3f70fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f70fc) {
            ctx->pc = 0x3F713Cu;
            goto label_3f713c;
        }
    }
    ctx->pc = 0x3F7104u;
    // 0x3f7104: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f7104u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
label_3f7108:
    // 0x3f7108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f710c: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f710cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f7110: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f7110u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f7114: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7114u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7118: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F7118u;
    SET_GPR_U32(ctx, 31, 0x3F7120u);
    ctx->pc = 0x3F711Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7118u;
    // 0x3f711c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F7118u, 0x3F7120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7120u;
label_3f7120:
    // 0x3f7120: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7120u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7124: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f7124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7128: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F7128u;
    SET_GPR_U32(ctx, 31, 0x3F7130u);
    ctx->pc = 0x3F712Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7128u;
    // 0x3f712c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F7128u, 0x3F7130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7130u;
label_3f7130:
    // 0x3f7130: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f7130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f7134: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F7134u;
    {
        const bool branch_taken_0x3f7134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f7134) {
            ctx->pc = 0x3F7138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7134u;
            // 0x3f7138: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F7108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f7108;
        }
    }
    ctx->pc = 0x3F713Cu;
label_3f713c:
    // 0x3f713c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F713Cu;
    {
        const bool branch_taken_0x3f713c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F713Cu;
        // 0x3f7140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f713c) {
            ctx->pc = 0x3F7164u;
            goto label_3f7164;
        }
    }
    ctx->pc = 0x3F7144u;
    // 0x3f7144: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f7144u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f7148: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f7148u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f714c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F714Cu;
    SET_GPR_U32(ctx, 31, 0x3F7154u);
    ctx->pc = 0x3F7150u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F714Cu;
    // 0x3f7150: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F714Cu, 0x3F7154u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7154u;
label_3f7154:
    // 0x3f7154: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f7154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7158: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f7158u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f715c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F715Cu;
    SET_GPR_U32(ctx, 31, 0x3F7164u);
    ctx->pc = 0x3F7160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F715Cu;
    // 0x3f7160: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F715Cu, 0x3F7164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7164u;
label_3f7164:
    // 0x3f7164: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F7164u;
    SET_GPR_U32(ctx, 31, 0x3F716Cu);
    ctx->pc = 0x3F7168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7164u;
    // 0x3f7168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F7164u, 0x3F716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F716Cu;
label_3f716c:
    // 0x3f716c: 0x10400089  beqz        $v0, . + 4 + (0x89 << 2)
    ctx->pc = 0x3F716Cu;
    {
        const bool branch_taken_0x3f716c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F716Cu;
        // 0x3f7170: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f716c) {
            ctx->pc = 0x3F7394u;
            goto label_3f7394;
        }
    }
    ctx->pc = 0x3F7174u;
    // 0x3f7174: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f7174u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f7178: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f7178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f717c: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x3F717Cu;
    {
        const bool branch_taken_0x3f717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F717Cu;
        // 0x3f7180: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f717c) {
            ctx->pc = 0x3F7264u;
            goto label_3f7264;
        }
    }
    ctx->pc = 0x3F7184u;
    // 0x3f7184: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f7184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f7188: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x3F7188u;
    {
        const bool branch_taken_0x3f7188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7188u;
        // 0x3f718c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7188) {
            ctx->pc = 0x3F7288u;
            goto label_3f7288;
        }
    }
    ctx->pc = 0x3F7190u;
    // 0x3f7190: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x3F7190u;
    {
        const bool branch_taken_0x3f7190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7190u;
        // 0x3f7194: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7190) {
            ctx->pc = 0x3F72A0u;
            goto label_3f72a0;
        }
    }
    ctx->pc = 0x3F7198u;
label_3f7198:
    // 0x3f7198: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f7198u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
label_3f719c:
    // 0x3f719c: 0x30620004  andi        $v0, $v1, 0x4
    ctx->pc = 0x3f719cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x3f71a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F71A0u;
    {
        const bool branch_taken_0x3f71a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F71A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F71A0u;
        // 0x3f71a4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f71a0) {
            ctx->pc = 0x3F71B0u;
            goto label_3f71b0;
        }
    }
    ctx->pc = 0x3F71A8u;
    // 0x3f71a8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3f71a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f71ac: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x3f71acu;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
label_3f71b0:
    // 0x3f71b0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x3f71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x3f71b4: 0x1202003e  beq         $s0, $v0, . + 4 + (0x3E << 2)
    ctx->pc = 0x3F71B4u;
    {
        const bool branch_taken_0x3f71b4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x3F71B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F71B4u;
        // 0x3f71b8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f71b4) {
            ctx->pc = 0x3F72B0u;
            goto label_3f72b0;
        }
    }
    ctx->pc = 0x3F71BCu;
    // 0x3f71bc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f71bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f71c0: 0x10983c  dsll32      $s3, $s0, 0
    ctx->pc = 0x3f71c0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 16) << (32 + 0));
    // 0x3f71c4: 0x13983f  dsra32      $s3, $s3, 0
    ctx->pc = 0x3f71c4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 0));
    // 0x3f71c8: 0xc0f8782  jal         func_3E1E08
    ctx->pc = 0x3F71C8u;
    SET_GPR_U32(ctx, 31, 0x3F71D0u);
    ctx->pc = 0x3F71CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F71C8u;
    // 0x3f71cc: 0x24a5f590  addiu       $a1, $a1, -0xA70 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1E08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1E08u, 0x3F71C8u, 0x3F71D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F71D0u;
label_3f71d0:
    // 0x3f71d0: 0x8e54015c  lw          $s4, 0x15C($s2)
    ctx->pc = 0x3f71d0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f71d4: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f71d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f71d8: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x3F71D8u;
    {
        const bool branch_taken_0x3f71d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f71d8) {
            ctx->pc = 0x3F721Cu;
            goto label_3f721c;
        }
    }
    ctx->pc = 0x3F71E0u;
    // 0x3f71e0: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f71e0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f71e4: 0x0  nop
    ctx->pc = 0x3f71e4u;
    // NOP
label_3f71e8:
    // 0x3f71e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f71e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f71ec: 0x8e50015c  lw          $s0, 0x15C($s2)
    ctx->pc = 0x3f71ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
    // 0x3f71f0: 0x2749823  subu        $s3, $s3, $s4
    ctx->pc = 0x3f71f0u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
    // 0x3f71f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f71f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f71f8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F71F8u;
    SET_GPR_U32(ctx, 31, 0x3F7200u);
    ctx->pc = 0x3F71FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F71F8u;
    // 0x3f71fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F71F8u, 0x3F7200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7200u;
label_3f7200:
    // 0x3f7200: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7200u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7204: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f7204u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7208: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F7208u;
    SET_GPR_U32(ctx, 31, 0x3F7210u);
    ctx->pc = 0x3F720Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7208u;
    // 0x3f720c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F7208u, 0x3F7210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7210u;
label_3f7210:
    // 0x3f7210: 0x293102b  sltu        $v0, $s4, $s3
    ctx->pc = 0x3f7210u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x3f7214: 0x5440fff4  bnel        $v0, $zero, . + 4 + (-0xC << 2)
    ctx->pc = 0x3F7214u;
    {
        const bool branch_taken_0x3f7214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f7214) {
            ctx->pc = 0x3F7218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F7214u;
            // 0x3f7218: 0x8e510158  lw          $s1, 0x158($s2) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F71E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f71e8;
        }
    }
    ctx->pc = 0x3F721Cu;
label_3f721c:
    // 0x3f721c: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x3F721Cu;
    {
        const bool branch_taken_0x3f721c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F721Cu;
        // 0x3f7220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f721c) {
            ctx->pc = 0x3F7244u;
            goto label_3f7244;
        }
    }
    ctx->pc = 0x3F7224u;
    // 0x3f7224: 0x8e500158  lw          $s0, 0x158($s2)
    ctx->pc = 0x3f7224u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f7228: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f7228u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f722c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F722Cu;
    SET_GPR_U32(ctx, 31, 0x3F7234u);
    ctx->pc = 0x3F7230u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F722Cu;
    // 0x3f7230: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F722Cu, 0x3F7234u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7234u;
label_3f7234:
    // 0x3f7234: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f7234u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7238: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x3f7238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f723c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F723Cu;
    SET_GPR_U32(ctx, 31, 0x3F7244u);
    ctx->pc = 0x3F7240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F723Cu;
    // 0x3f7240: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F723Cu, 0x3F7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7244u;
label_3f7244:
    // 0x3f7244: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F7244u;
    SET_GPR_U32(ctx, 31, 0x3F724Cu);
    ctx->pc = 0x3F7248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7244u;
    // 0x3f7248: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F7244u, 0x3F724Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F724Cu;
label_3f724c:
    // 0x3f724c: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3F724Cu;
    {
        const bool branch_taken_0x3f724c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F724Cu;
        // 0x3f7250: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f724c) {
            ctx->pc = 0x3F7394u;
            goto label_3f7394;
        }
    }
    ctx->pc = 0x3F7254u;
    // 0x3f7254: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f7254u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f7258: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f7258u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f725c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F725Cu;
    {
        const bool branch_taken_0x3f725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F725Cu;
        // 0x3f7260: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f725c) {
            ctx->pc = 0x3F7278u;
            goto label_3f7278;
        }
    }
    ctx->pc = 0x3F7264u;
label_3f7264:
    // 0x3f7264: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f7264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f7268: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F7268u;
    {
        const bool branch_taken_0x3f7268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F726Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7268u;
        // 0x3f726c: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7268) {
            ctx->pc = 0x3F7284u;
            goto label_3f7284;
        }
    }
    ctx->pc = 0x3F7270u;
    // 0x3f7270: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3F7270u;
    {
        const bool branch_taken_0x3f7270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7270u;
        // 0x3f7274: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7270) {
            ctx->pc = 0x3F72A0u;
            goto label_3f72a0;
        }
    }
    ctx->pc = 0x3F7278u;
label_3f7278:
    // 0x3f7278: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f7278u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f727c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F727Cu;
    {
        const bool branch_taken_0x3f727c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F727Cu;
        // 0x3f7280: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f727c) {
            ctx->pc = 0x3F729Cu;
            goto label_3f729c;
        }
    }
    ctx->pc = 0x3F7284u;
label_3f7284:
    // 0x3f7284: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f7284u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
label_3f7288:
    // 0x3f7288: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f728c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F728Cu;
    SET_GPR_U32(ctx, 31, 0x3F7294u);
    ctx->pc = 0x3F7290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F728Cu;
    // 0x3f7290: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F728Cu, 0x3F7294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7294u;
label_3f7294:
    // 0x3f7294: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x3F7294u;
    {
        const bool branch_taken_0x3f7294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7294u;
        // 0x3f7298: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7294) {
            ctx->pc = 0x3F7394u;
            goto label_3f7394;
        }
    }
    ctx->pc = 0x3F729Cu;
label_3f729c:
    // 0x3f729c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f729cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f72a0:
    // 0x3f72a0: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F72A0u;
    SET_GPR_U32(ctx, 31, 0x3F72A8u);
    ctx->pc = 0x3F72A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F72A0u;
    // 0x3f72a4: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F72A0u, 0x3F72A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F72A8u;
label_3f72a8:
    // 0x3f72a8: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x3F72A8u;
    {
        const bool branch_taken_0x3f72a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F72ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72A8u;
        // 0x3f72ac: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72a8) {
            ctx->pc = 0x3F7394u;
            goto label_3f7394;
        }
    }
    ctx->pc = 0x3F72B0u;
label_3f72b0:
    // 0x3f72b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f72b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f72b4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f72b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f72b8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F72B8u;
    SET_GPR_U32(ctx, 31, 0x3F72C0u);
    ctx->pc = 0x3F72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F72B8u;
    // 0x3f72bc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F72B8u, 0x3F72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F72C0u;
label_3f72c0:
    // 0x3f72c0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f72c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f72c4: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3f72c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f72c8: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F72C8u;
    SET_GPR_U32(ctx, 31, 0x3F72D0u);
    ctx->pc = 0x3F72CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F72C8u;
    // 0x3f72cc: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F72C8u, 0x3F72D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F72D0u;
label_3f72d0:
    // 0x3f72d0: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F72D0u;
    SET_GPR_U32(ctx, 31, 0x3F72D8u);
    ctx->pc = 0x3F72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F72D0u;
    // 0x3f72d4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F72D0u, 0x3F72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F72D8u;
label_3f72d8:
    // 0x3f72d8: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x3F72D8u;
    {
        const bool branch_taken_0x3f72d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F72DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72D8u;
        // 0x3f72dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72d8) {
            ctx->pc = 0x3F733Cu;
            goto label_3f733c;
        }
    }
    ctx->pc = 0x3F72E0u;
    // 0x3f72e0: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f72e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f72e4: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f72e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f72e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F72E8u;
    {
        const bool branch_taken_0x3f72e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F72ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72E8u;
        // 0x3f72ec: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72e8) {
            ctx->pc = 0x3F7308u;
            goto label_3f7308;
        }
    }
    ctx->pc = 0x3F72F0u;
    // 0x3f72f0: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f72f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f72f4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F72F4u;
    {
        const bool branch_taken_0x3f72f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F72F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72F4u;
        // 0x3f72f8: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72f4) {
            ctx->pc = 0x3F7314u;
            goto label_3f7314;
        }
    }
    ctx->pc = 0x3F72FCu;
    // 0x3f72fc: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3F72FCu;
    {
        const bool branch_taken_0x3f72fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F72FCu;
        // 0x3f7300: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f72fc) {
            ctx->pc = 0x3F7330u;
            goto label_3f7330;
        }
    }
    ctx->pc = 0x3F7304u;
    // 0x3f7304: 0x0  nop
    ctx->pc = 0x3f7304u;
    // NOP
label_3f7308:
    // 0x3f7308: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f7308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f730c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F730Cu;
    {
        const bool branch_taken_0x3f730c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F730Cu;
        // 0x3f7310: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f730c) {
            ctx->pc = 0x3F732Cu;
            goto label_3f732c;
        }
    }
    ctx->pc = 0x3F7314u;
label_3f7314:
    // 0x3f7314: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x3f7314u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x3f7318: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7318u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f731c: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F731Cu;
    SET_GPR_U32(ctx, 31, 0x3F7324u);
    ctx->pc = 0x3F7320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F731Cu;
    // 0x3f7320: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F731Cu, 0x3F7324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7324u;
label_3f7324:
    // 0x3f7324: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3F7324u;
    {
        const bool branch_taken_0x3f7324 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F7328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F7324u;
        // 0x3f7328: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f7324) {
            ctx->pc = 0x3F733Cu;
            goto label_3f733c;
        }
    }
    ctx->pc = 0x3F732Cu;
label_3f732c:
    // 0x3f732c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f732cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3f7330:
    // 0x3f7330: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F7330u;
    SET_GPR_U32(ctx, 31, 0x3F7338u);
    ctx->pc = 0x3F7334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7330u;
    // 0x3f7334: 0x24a5ea40  addiu       $a1, $a1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F7330u, 0x3F7338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7338u;
label_3f7338:
    // 0x3f7338: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f7338u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3f733c:
    // 0x3f733c: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3F733Cu;
    {
        const bool branch_taken_0x3f733c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F7340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F733Cu;
        // 0x3f7340: 0x7bb00070  lq          $s0, 0x70($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f733c) {
            ctx->pc = 0x3F7394u;
            goto label_3f7394;
        }
    }
    ctx->pc = 0x3F7344u;
    // 0x3f7344: 0x93a20000  lbu         $v0, 0x0($sp)
    ctx->pc = 0x3f7344u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3f7348: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f7348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f734c: 0x93a30001  lbu         $v1, 0x1($sp)
    ctx->pc = 0x3f734cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
    // 0x3f7350: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f7350u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f7354: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x3f7354u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x3f7358: 0x93a90006  lbu         $t1, 0x6($sp)
    ctx->pc = 0x3f7358u;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 6)));
    // 0x3f735c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f735cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f7360: 0x93aa0005  lbu         $t2, 0x5($sp)
    ctx->pc = 0x3f7360u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 5)));
    // 0x3f7364: 0x93a80004  lbu         $t0, 0x4($sp)
    ctx->pc = 0x3f7364u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3f7368: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x3f7368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3f736c: 0x93a20003  lbu         $v0, 0x3($sp)
    ctx->pc = 0x3f736cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 3)));
    // 0x3f7370: 0x93a70002  lbu         $a3, 0x2($sp)
    ctx->pc = 0x3f7370u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 2)));
    // 0x3f7374: 0xa3a90016  sb          $t1, 0x16($sp)
    ctx->pc = 0x3f7374u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 9));
    // 0x3f7378: 0xa3aa0015  sb          $t2, 0x15($sp)
    ctx->pc = 0x3f7378u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 10));
    // 0x3f737c: 0xa3a80014  sb          $t0, 0x14($sp)
    ctx->pc = 0x3f737cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 8));
    // 0x3f7380: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x3f7380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
    // 0x3f7384: 0xa3a70012  sb          $a3, 0x12($sp)
    ctx->pc = 0x3f7384u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 7));
    // 0x3f7388: 0xc0fee3c  jal         func_3FB8F0
    ctx->pc = 0x3F7388u;
    SET_GPR_U32(ctx, 31, 0x3F7390u);
    ctx->pc = 0x3F738Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F7388u;
    // 0x3f738c: 0xa7a30010  sh          $v1, 0x10($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3FB8F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3FB8F0u, 0x3F7388u, 0x3F7390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F7390u;
label_3f7390:
    // 0x3f7390: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3f7390u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3f7394:
    // 0x3f7394: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3f7394u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f7398: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3f7398u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f739c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3f739cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f73a0: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3f73a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f73a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f73a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f73a8: 0x3e00008  jr          $ra
    ctx->pc = 0x3F73A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F73ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F73A8u;
        // 0x3f73ac: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F73A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F73B0u;
}
