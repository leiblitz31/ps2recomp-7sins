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

// Function: sub_003D4120
// Address: 0x3d4120 - 0x3d4478
void sub_003D4120_0x3d4120(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D4120_0x3d4120");
#endif

    switch (ctx->pc) {
        case 0x3d4168u: goto label_3d4168;
        case 0x3d4178u: goto label_3d4178;
        case 0x3d4190u: goto label_3d4190;
        case 0x3d41a8u: goto label_3d41a8;
        case 0x3d41b0u: goto label_3d41b0;
        case 0x3d4200u: goto label_3d4200;
        case 0x3d4218u: goto label_3d4218;
        case 0x3d4280u: goto label_3d4280;
        case 0x3d4288u: goto label_3d4288;
        case 0x3d42b8u: goto label_3d42b8;
        case 0x3d4310u: goto label_3d4310;
        case 0x3d4318u: goto label_3d4318;
        case 0x3d4358u: goto label_3d4358;
        case 0x3d439cu: goto label_3d439c;
        case 0x3d43a4u: goto label_3d43a4;
        case 0x3d43b8u: goto label_3d43b8;
        case 0x3d43d0u: goto label_3d43d0;
        case 0x3d43f8u: goto label_3d43f8;
        case 0x3d4408u: goto label_3d4408;
        case 0x3d441cu: goto label_3d441c;
        case 0x3d4424u: goto label_3d4424;
        case 0x3d443cu: goto label_3d443c;
        case 0x3d4444u: goto label_3d4444;
        default: break;
    }

    ctx->pc = 0x3d4120u;

    // 0x3d4120: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3d4120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3d4124: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3d4124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3d4128: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3d4128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3d412c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3d412cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4130: 0xe7b400b0  swc1        $f20, 0xB0($sp)
    ctx->pc = 0x3d4130u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 176), bits); }
    // 0x3d4134: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x3d4134u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4138: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3d4138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3d413c: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3d413cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3d4140: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3d4140u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3d4144: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3d4144u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3d4148: 0x3c10005e  lui         $s0, 0x5E
    ctx->pc = 0x3d4148u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)94 << 16));
    // 0x3d414c: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3d414cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3d4150: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d4150u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4154: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3d4154u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3d4158: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x3d4158u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d415c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3d415cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x3d4160: 0xc0f511e  jal         func_3D4478
    ctx->pc = 0x3D4160u;
    SET_GPR_U32(ctx, 31, 0x3D4168u);
    ctx->pc = 0x3D4164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4160u;
    // 0x3d4164: 0x3c150062  lui         $s5, 0x62 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)98 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D4478u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D4478u, 0x3D4160u, 0x3D4168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4168u;
label_3d4168:
    // 0x3d4168: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3d4168u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
    // 0x3d416c: 0x24040210  addiu       $a0, $zero, 0x210
    ctx->pc = 0x3d416cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 528));
    // 0x3d4170: 0xc103642  jal         func_40D908
    ctx->pc = 0x3D4170u;
    SET_GPR_U32(ctx, 31, 0x3D4178u);
    ctx->pc = 0x3D4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4170u;
    // 0x3d4174: 0x34a50114  ori         $a1, $a1, 0x114 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)276);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D908u, 0x3D4170u, 0x3D4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4178u;
label_3d4178:
    // 0x3d4178: 0x2610b298  addiu       $s0, $s0, -0x4D68
    ctx->pc = 0x3d4178u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294947480));
    // 0x3d417c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x3d417cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4180: 0xae02009c  sw          $v0, 0x9C($s0)
    ctx->pc = 0x3d4180u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 2));
    // 0x3d4184: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3d4184u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4188: 0xc0f4df6  jal         func_3D37D8
    ctx->pc = 0x3D4188u;
    SET_GPR_U32(ctx, 31, 0x3D4190u);
    ctx->pc = 0x3D418Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4188u;
    // 0x3d418c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D37D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D37D8u, 0x3D4188u, 0x3D4190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4190u;
label_3d4190:
    // 0x3d4190: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3d4190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d4194: 0x5060002b  beql        $v1, $zero, . + 4 + (0x2B << 2)
    ctx->pc = 0x3D4194u;
    {
        const bool branch_taken_0x3d4194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4194) {
            ctx->pc = 0x3D4198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4194u;
            // 0x3d4198: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4244u;
            goto label_3d4244;
        }
    }
    ctx->pc = 0x3D419Cu;
    // 0x3d419c: 0x26b4b1e0  addiu       $s4, $s5, -0x4E20
    ctx->pc = 0x3d419cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947296));
    // 0x3d41a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d41a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d41a4: 0x0  nop
    ctx->pc = 0x3d41a4u;
    // NOP
label_3d41a8:
    // 0x3d41a8: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D41A8u;
    SET_GPR_U32(ctx, 31, 0x3D41B0u);
    ctx->pc = 0x3D41ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D41A8u;
    // 0x3d41ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D41A8u, 0x3D41B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D41B0u;
label_3d41b0:
    // 0x3d41b0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3d41b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d41b4: 0x8e83000c  lw          $v1, 0xC($s4)
    ctx->pc = 0x3d41b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
    // 0x3d41b8: 0x838021  addu        $s0, $a0, $v1
    ctx->pc = 0x3d41b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x3d41bc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d41bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d41c0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d41c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d41c4: 0x1040001a  beqz        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x3D41C4u;
    {
        const bool branch_taken_0x3d41c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41C4u;
        // 0x3d41c8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41c4) {
            ctx->pc = 0x3D4230u;
            goto label_3d4230;
        }
    }
    ctx->pc = 0x3D41CCu;
    // 0x3d41cc: 0x94820084  lhu         $v0, 0x84($a0)
    ctx->pc = 0x3d41ccu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 132)));
    // 0x3d41d0: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3D41D0u;
    {
        const bool branch_taken_0x3d41d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D41D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41D0u;
        // 0x3d41d4: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41d0) {
            ctx->pc = 0x3D4230u;
            goto label_3d4230;
        }
    }
    ctx->pc = 0x3D41D8u;
    // 0x3d41d8: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x3d41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x3d41dc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x3d41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3d41e0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x3d41e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x3d41e4: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D41E4u;
    {
        const bool branch_taken_0x3d41e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D41E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D41E4u;
        // 0x3d41e8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d41e4) {
            ctx->pc = 0x3D4230u;
            goto label_3d4230;
        }
    }
    ctx->pc = 0x3D41ECu;
    // 0x3d41ec: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d41ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d41f0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D41F0u;
    {
        const bool branch_taken_0x3d41f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d41f0) {
            ctx->pc = 0x3D41F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D41F0u;
            // 0x3d41f4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D4208u;
            goto label_3d4208;
        }
    }
    ctx->pc = 0x3D41F8u;
    // 0x3d41f8: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D41F8u;
    SET_GPR_U32(ctx, 31, 0x3D4200u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D41F8u, 0x3D4200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4200u;
label_3d4200:
    // 0x3d4200: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3d4200u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3d4204: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d4204u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4208:
    // 0x3d4208: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D4208u;
    {
        const bool branch_taken_0x3d4208 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D420Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4208u;
        // 0x3d420c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4208) {
            ctx->pc = 0x3D421Cu;
            goto label_3d421c;
        }
    }
    ctx->pc = 0x3D4210u;
    // 0x3d4210: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D4210u;
    SET_GPR_U32(ctx, 31, 0x3D4218u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D4210u, 0x3D4218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4218u;
label_3d4218:
    // 0x3d4218: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3d4218u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3d421c:
    // 0x3d421c: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3d421cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3d4220: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3d4220u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4224: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3d4224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3d4228: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x3D4228u;
    {
        const bool branch_taken_0x3d4228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4228u;
        // 0x3d422c: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4228) {
            ctx->pc = 0x3D444Cu;
            goto label_3d444c;
        }
    }
    ctx->pc = 0x3D4230u;
label_3d4230:
    // 0x3d4230: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d4230u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d4234: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d4234u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d4238: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x3D4238u;
    {
        const bool branch_taken_0x3d4238 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D423Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4238u;
        // 0x3d423c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4238) {
            ctx->pc = 0x3D41A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d41a8;
        }
    }
    ctx->pc = 0x3D4240u;
    // 0x3d4240: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x3d4240u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3d4244:
    // 0x3d4244: 0x26a5b1e0  addiu       $a1, $s5, -0x4E20
    ctx->pc = 0x3d4244u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294947296));
    // 0x3d4248: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3d4248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3d424c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x3d424cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x3d4250: 0xafa00024  sw          $zero, 0x24($sp)
    ctx->pc = 0x3d4250u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 0));
    // 0x3d4254: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x3d4254u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3d4258: 0xe4940004  swc1        $f20, 0x4($a0)
    ctx->pc = 0x3d4258u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4), bits); }
    // 0x3d425c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d4260: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x3d4260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x3d4264: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x3d4264u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x3d4268: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3d4268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d426c: 0x10600020  beqz        $v1, . + 4 + (0x20 << 2)
    ctx->pc = 0x3D426Cu;
    {
        const bool branch_taken_0x3d426c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D426Cu;
        // 0x3d4270: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d426c) {
            ctx->pc = 0x3D42F0u;
            goto label_3d42f0;
        }
    }
    ctx->pc = 0x3D4274u;
    // 0x3d4274: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3d4274u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4278: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x3d4278u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d427c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d427cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d4280:
    // 0x3d4280: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D4280u;
    SET_GPR_U32(ctx, 31, 0x3D4288u);
    ctx->pc = 0x3D4284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4280u;
    // 0x3d4284: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D4280u, 0x3D4288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4288u;
label_3d4288:
    // 0x3d4288: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d4288u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d428c: 0x8ea3000c  lw          $v1, 0xC($s5)
    ctx->pc = 0x3d428cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
    // 0x3d4290: 0xa38021  addu        $s0, $a1, $v1
    ctx->pc = 0x3d4290u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x3d4294: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d4294u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d4298: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d4298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d429c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D429Cu;
    {
        const bool branch_taken_0x3d429c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d429c) {
            ctx->pc = 0x3D42B8u;
            goto label_3d42b8;
        }
    }
    ctx->pc = 0x3D42A4u;
    // 0x3d42a4: 0x94a20084  lhu         $v0, 0x84($a1)
    ctx->pc = 0x3d42a4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 132)));
    // 0x3d42a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D42A8u;
    {
        const bool branch_taken_0x3d42a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42A8u;
        // 0x3d42ac: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42a8) {
            ctx->pc = 0x3D42B8u;
            goto label_3d42b8;
        }
    }
    ctx->pc = 0x3D42B0u;
    // 0x3d42b0: 0xc0f4746  jal         func_3D1D18
    ctx->pc = 0x3D42B0u;
    SET_GPR_U32(ctx, 31, 0x3D42B8u);
    ctx->pc = 0x3D42B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D42B0u;
    // 0x3d42b4: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1D18u, 0x3D42B0u, 0x3D42B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D42B8u;
label_3d42b8:
    // 0x3d42b8: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D42B8u;
    {
        const bool branch_taken_0x3d42b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d42b8) {
            ctx->pc = 0x3D42BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D42B8u;
            // 0x3d42bc: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D42DCu;
            goto label_3d42dc;
        }
    }
    ctx->pc = 0x3D42C0u;
    // 0x3d42c0: 0xa214000c  sb          $s4, 0xC($s0)
    ctx->pc = 0x3d42c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 20));
    // 0x3d42c4: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x3d42c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3d42c8: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x3d42c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3d42cc: 0xaa020010  swl         $v0, 0x10($s0)
    ctx->pc = 0x3d42ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3d42d0: 0xba02000d  swr         $v0, 0xD($s0)
    ctx->pc = 0x3d42d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3d42d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D42D4u;
    {
        const bool branch_taken_0x3d42d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42D4u;
        // 0x3d42d8: 0x8fa2000c  lw          $v0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42d4) {
            ctx->pc = 0x3D42E0u;
            goto label_3d42e0;
        }
    }
    ctx->pc = 0x3D42DCu;
label_3d42dc:
    // 0x3d42dc: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x3d42dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3d42e0:
    // 0x3d42e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d42e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d42e4: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d42e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d42e8: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
    ctx->pc = 0x3D42E8u;
    {
        const bool branch_taken_0x3d42e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D42ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42E8u;
        // 0x3d42ec: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42e8) {
            ctx->pc = 0x3D4280u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4280;
        }
    }
    ctx->pc = 0x3D42F0u;
label_3d42f0:
    // 0x3d42f0: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d42f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d42f4: 0x10400026  beqz        $v0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3D42F4u;
    {
        const bool branch_taken_0x3d42f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D42F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D42F4u;
        // 0x3d42f8: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d42f4) {
            ctx->pc = 0x3D4390u;
            goto label_3d4390;
        }
    }
    ctx->pc = 0x3D42FCu;
    // 0x3d42fc: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3d42fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3d4300: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3d4300u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d4304: 0x2454b1e0  addiu       $s4, $v0, -0x4E20
    ctx->pc = 0x3d4304u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947296));
    // 0x3d4308: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d4308u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d430c: 0x0  nop
    ctx->pc = 0x3d430cu;
    // NOP
label_3d4310:
    // 0x3d4310: 0xc1036da  jal         func_40DB68
    ctx->pc = 0x3D4310u;
    SET_GPR_U32(ctx, 31, 0x3D4318u);
    ctx->pc = 0x3D4314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4310u;
    // 0x3d4314: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB68u, 0x3D4310u, 0x3D4318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4318u;
label_3d4318:
    // 0x3d4318: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3d4318u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d431c: 0x8e830004  lw          $v1, 0x4($s4)
    ctx->pc = 0x3d431cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3d4320: 0x90a20002  lbu         $v0, 0x2($a1)
    ctx->pc = 0x3d4320u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x3d4324: 0x8ca40018  lw          $a0, 0x18($a1)
    ctx->pc = 0x3d4324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3d4328: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3d4328u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3d432c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3D432Cu;
    {
        const bool branch_taken_0x3d432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D432Cu;
        // 0x3d4330: 0xa38021  addu        $s0, $a1, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d432c) {
            ctx->pc = 0x3D4358u;
            goto label_3d4358;
        }
    }
    ctx->pc = 0x3D4334u;
    // 0x3d4334: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x3d4334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3d4338: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3d4338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3d433c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3D433Cu;
    {
        const bool branch_taken_0x3d433c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d433c) {
            ctx->pc = 0x3D4358u;
            goto label_3d4358;
        }
    }
    ctx->pc = 0x3D4344u;
    // 0x3d4344: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3d4344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d4348: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3D4348u;
    {
        const bool branch_taken_0x3d4348 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x3D434Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4348u;
        // 0x3d434c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4348) {
            ctx->pc = 0x3D4358u;
            goto label_3d4358;
        }
    }
    ctx->pc = 0x3D4350u;
    // 0x3d4350: 0xc0f4714  jal         func_3D1C50
    ctx->pc = 0x3D4350u;
    SET_GPR_U32(ctx, 31, 0x3D4358u);
    ctx->pc = 0x3D4354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4350u;
    // 0x3d4354: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D1C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D1C50u, 0x3D4350u, 0x3D4358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4358u;
label_3d4358:
    // 0x3d4358: 0x52400008  beql        $s2, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D4358u;
    {
        const bool branch_taken_0x3d4358 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d4358) {
            ctx->pc = 0x3D435Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D4358u;
            // 0x3d435c: 0xa200000c  sb          $zero, 0xC($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D437Cu;
            goto label_3d437c;
        }
    }
    ctx->pc = 0x3D4360u;
    // 0x3d4360: 0xa215000c  sb          $s5, 0xC($s0)
    ctx->pc = 0x3d4360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 12), (uint8_t)GPR_U32(ctx, 21));
    // 0x3d4364: 0x8a420003  lwl         $v0, 0x3($s2)
    ctx->pc = 0x3d4364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x3d4368: 0x9a420000  lwr         $v0, 0x0($s2)
    ctx->pc = 0x3d4368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x3d436c: 0xaa020010  swl         $v0, 0x10($s0)
    ctx->pc = 0x3d436cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3d4370: 0xba02000d  swr         $v0, 0xD($s0)
    ctx->pc = 0x3d4370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 13); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3d4374: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3D4374u;
    {
        const bool branch_taken_0x3d4374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4374u;
        // 0x3d4378: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4374) {
            ctx->pc = 0x3D4380u;
            goto label_3d4380;
        }
    }
    ctx->pc = 0x3D437Cu;
label_3d437c:
    // 0x3d437c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x3d437cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_3d4380:
    // 0x3d4380: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d4380u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d4384: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d4384u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d4388: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
    ctx->pc = 0x3D4388u;
    {
        const bool branch_taken_0x3d4388 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D438Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4388u;
        // 0x3d438c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4388) {
            ctx->pc = 0x3D4310u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d4310;
        }
    }
    ctx->pc = 0x3D4390u;
label_3d4390:
    // 0x3d4390: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3d4390u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d4394: 0xc0f4ba2  jal         func_3D2E88
    ctx->pc = 0x3D4394u;
    SET_GPR_U32(ctx, 31, 0x3D439Cu);
    ctx->pc = 0x3D4398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4394u;
    // 0x3d4398: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3D2E88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3D2E88u, 0x3D4394u, 0x3D439Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D439Cu;
label_3d439c:
    // 0x3d439c: 0xc1046a0  jal         func_411A80
    ctx->pc = 0x3D439Cu;
    SET_GPR_U32(ctx, 31, 0x3D43A4u);
    ctx->pc = 0x411A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x411A80u, 0x3D439Cu, 0x3D43A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43A4u;
label_3d43a4:
    // 0x3d43a4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d43a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d43a8: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D43A8u;
    {
        const bool branch_taken_0x3d43a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d43a8) {
            ctx->pc = 0x3D43ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D43A8u;
            // 0x3d43ac: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D43C0u;
            goto label_3d43c0;
        }
    }
    ctx->pc = 0x3D43B0u;
    // 0x3d43b0: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D43B0u;
    SET_GPR_U32(ctx, 31, 0x3D43B8u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D43B0u, 0x3D43B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43B8u;
label_3d43b8:
    // 0x3d43b8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x3d43b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x3d43bc: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x3d43bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3d43c0:
    // 0x3d43c0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3D43C0u;
    {
        const bool branch_taken_0x3d43c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43C0u;
        // 0x3d43c4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d43c0) {
            ctx->pc = 0x3D43D4u;
            goto label_3d43d4;
        }
    }
    ctx->pc = 0x3D43C8u;
    // 0x3d43c8: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D43C8u;
    SET_GPR_U32(ctx, 31, 0x3D43D0u);
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D43C8u, 0x3D43D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D43D0u;
label_3d43d0:
    // 0x3d43d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3d43d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3d43d4:
    // 0x3d43d4: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x3d43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x3d43d8: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x3d43d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x3d43dc: 0x2452b298  addiu       $s2, $v0, -0x4D68
    ctx->pc = 0x3d43dcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947480));
    // 0x3d43e0: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3d43e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
    // 0x3d43e4: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3d43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
    // 0x3d43e8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3d43e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d43ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3D43ECu;
    {
        const bool branch_taken_0x3d43ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D43F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D43ECu;
        // 0x3d43f0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d43ec) {
            ctx->pc = 0x3D441Cu;
            goto label_3d441c;
        }
    }
    ctx->pc = 0x3D43F4u;
    // 0x3d43f4: 0x0  nop
    ctx->pc = 0x3d43f4u;
    // NOP
label_3d43f8:
    // 0x3d43f8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3d43f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x3d43fc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d43fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d4400: 0xc0c8e22  jal         func_323888
    ctx->pc = 0x3D4400u;
    SET_GPR_U32(ctx, 31, 0x3D4408u);
    ctx->pc = 0x3D4404u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4400u;
    // 0x3d4404: 0x8c44020c  lw          $a0, 0x20C($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 524)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x323888u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x323888u, 0x3D4400u, 0x3D4408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4408u;
label_3d4408:
    // 0x3d4408: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3d4408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x3d440c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3d440cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3d4410: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3d4410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d4414: 0xc10822c  jal         func_4208B0
    ctx->pc = 0x3D4414u;
    SET_GPR_U32(ctx, 31, 0x3D441Cu);
    ctx->pc = 0x3D4418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4414u;
    // 0x3d4418: 0x26100210  addiu       $s0, $s0, 0x210 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4208B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4208B0u, 0x3D4414u, 0x3D441Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D441Cu;
label_3d441c:
    // 0x3d441c: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3D441Cu;
    SET_GPR_U32(ctx, 31, 0x3D4424u);
    ctx->pc = 0x3D4420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D441Cu;
    // 0x3d4420: 0x8e44009c  lw          $a0, 0x9C($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3D441Cu, 0x3D4424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4424u;
label_3d4424:
    // 0x3d4424: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3d4424u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3d4428: 0x1440fff3  bnez        $v0, . + 4 + (-0xD << 2)
    ctx->pc = 0x3D4428u;
    {
        const bool branch_taken_0x3d4428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D442Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4428u;
        // 0x3d442c: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d4428) {
            ctx->pc = 0x3D43F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d43f8;
        }
    }
    ctx->pc = 0x3D4430u;
    // 0x3d4430: 0x26d0b298  addiu       $s0, $s6, -0x4D68
    ctx->pc = 0x3d4430u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), 4294947480));
    // 0x3d4434: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3D4434u;
    SET_GPR_U32(ctx, 31, 0x3D443Cu);
    ctx->pc = 0x3D4438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D4434u;
    // 0x3d4438: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3D4434u, 0x3D443Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D443Cu;
label_3d443c:
    // 0x3d443c: 0xc103684  jal         func_40DA10
    ctx->pc = 0x3D443Cu;
    SET_GPR_U32(ctx, 31, 0x3D4444u);
    ctx->pc = 0x3D4440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D443Cu;
    // 0x3d4440: 0x8e04009c  lw          $a0, 0x9C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 156)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DA10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DA10u, 0x3D443Cu, 0x3D4444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D4444u;
label_3d4444:
    // 0x3d4444: 0xae00009c  sw          $zero, 0x9C($s0)
    ctx->pc = 0x3d4444u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 156), GPR_U32(ctx, 0));
    // 0x3d4448: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3d4448u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3d444c:
    // 0x3d444c: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3d444cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d4450: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3d4450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d4454: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3d4454u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d4458: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3d4458u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d445c: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3d445cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d4460: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3d4460u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d4464: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3d4464u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d4468: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3d4468u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d446c: 0xc7b400b0  lwc1        $f20, 0xB0($sp)
    ctx->pc = 0x3d446cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3d4470: 0x3e00008  jr          $ra
    ctx->pc = 0x3D4470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D4474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D4470u;
        // 0x3d4474: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D4470u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D4478u;
}
