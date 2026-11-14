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

// Function: sub_003D29B0
// Address: 0x3d29b0 - 0x3d2e88
void sub_003D29B0_0x3d29b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003D29B0_0x3d29b0");
#endif

    switch (ctx->pc) {
        case 0x3d2a08u: goto label_3d2a08;
        case 0x3d2a14u: goto label_3d2a14;
        case 0x3d2a34u: goto label_3d2a34;
        case 0x3d2a44u: goto label_3d2a44;
        case 0x3d2a50u: goto label_3d2a50;
        case 0x3d2a78u: goto label_3d2a78;
        case 0x3d2b18u: goto label_3d2b18;
        case 0x3d2e40u: goto label_3d2e40;
        case 0x3d2e48u: goto label_3d2e48;
        case 0x3d2e50u: goto label_3d2e50;
        default: break;
    }

    ctx->pc = 0x3d29b0u;

    // 0x3d29b0: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x3d29b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x3d29b4: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d29b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d29b8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3d29b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
    // 0x3d29bc: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x3d29bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x3d29c0: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x3d29c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x3d29c4: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x3d29c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x3d29c8: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x3d29c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x3d29cc: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x3d29ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x3d29d0: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x3d29d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x3d29d4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3d29d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x3d29d8: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x3d29d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x3d29dc: 0x7fbe0050  sq          $fp, 0x50($sp)
    ctx->pc = 0x3d29dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 30));
    // 0x3d29e0: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3d29e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3d29e4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3d29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3d29e8: 0x8cb00004  lw          $s0, 0x4($a1)
    ctx->pc = 0x3d29e8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3d29ec: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x3d29ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    // 0x3d29f0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3d29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3d29f4: 0x8c51000c  lw          $s1, 0xC($v0)
    ctx->pc = 0x3d29f4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3d29f8: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3d29f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d29fc: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x3d29fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
    // 0x3d2a00: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x3D2A00u;
    SET_GPR_U32(ctx, 31, 0x3D2A08u);
    ctx->pc = 0x3D2A04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A00u;
    // 0x3d2a04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3D2A00u, 0x3D2A08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A08u;
label_3d2a08:
    // 0x3d2a08: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3d2a08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3d2a0c: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x3D2A0Cu;
    SET_GPR_U32(ctx, 31, 0x3D2A14u);
    ctx->pc = 0x3D2A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A0Cu;
    // 0x3d2a10: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3D2A0Cu, 0x3D2A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A14u;
label_3d2a14:
    // 0x3d2a14: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d2a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d2a18: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x3d2a18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3d2a1c: 0xafa4001c  sw          $a0, 0x1C($sp)
    ctx->pc = 0x3d2a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 4));
    // 0x3d2a20: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3d2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3d2a24: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x3d2a24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x3d2a28: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x3d2a28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
    // 0x3d2a2c: 0xc1073a8  jal         func_41CEA0
    ctx->pc = 0x3D2A2Cu;
    SET_GPR_U32(ctx, 31, 0x3D2A34u);
    ctx->pc = 0x3D2A30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A2Cu;
    // 0x3d2a30: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CEA0u, 0x3D2A2Cu, 0x3D2A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A34u;
label_3d2a34:
    // 0x3d2a34: 0x8fa50018  lw          $a1, 0x18($sp)
    ctx->pc = 0x3d2a34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d2a38: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x3d2a38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3d2a3c: 0xc107034  jal         func_41C0D0
    ctx->pc = 0x3D2A3Cu;
    SET_GPR_U32(ctx, 31, 0x3D2A44u);
    ctx->pc = 0x3D2A40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A3Cu;
    // 0x3d2a40: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C0D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C0D0u, 0x3D2A3Cu, 0x3D2A44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A44u;
label_3d2a44:
    // 0x3d2a44: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x3d2a44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x3d2a48: 0xc107078  jal         func_41C1E0
    ctx->pc = 0x3D2A48u;
    SET_GPR_U32(ctx, 31, 0x3D2A50u);
    ctx->pc = 0x3D2A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2A48u;
    // 0x3d2a4c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C1E0u, 0x3D2A48u, 0x3D2A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2A50u;
label_3d2a50:
    // 0x3d2a50: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x3d2a50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3d2a54: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3d2a54u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2a58: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3d2a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d2a5c: 0x8cc60014  lw          $a2, 0x14($a2)
    ctx->pc = 0x3d2a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
    // 0x3d2a60: 0x104000f4  beqz        $v0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x3D2A60u;
    {
        const bool branch_taken_0x3d2a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2A60u;
        // 0x3d2a64: 0xafa60014  sw          $a2, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2a60) {
            ctx->pc = 0x3D2E34u;
            goto label_3d2e34;
        }
    }
    ctx->pc = 0x3D2A68u;
    // 0x3d2a68: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x3d2a68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d2a6c: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3d2a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3d2a70: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x3d2a70u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3d2a74: 0x0  nop
    ctx->pc = 0x3d2a74u;
    // NOP
label_3d2a78:
    // 0x3d2a78: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x3d2a78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3d2a7c: 0x8fa5001c  lw          $a1, 0x1C($sp)
    ctx->pc = 0x3d2a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x3d2a80: 0x25230001  addiu       $v1, $t1, 0x1
    ctx->pc = 0x3d2a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3d2a84: 0x1261026  xor         $v0, $t1, $a2
    ctx->pc = 0x3d2a84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 6));
    // 0x3d2a88: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x3d2a88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x3d2a8c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3d2a8cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3d2a90: 0xa92018  mult        $a0, $a1, $t1
    ctx->pc = 0x3d2a90u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 9); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x3d2a94: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3d2a94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x3d2a98: 0x782d  daddu       $t7, $zero, $zero
    ctx->pc = 0x3d2a98u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2a9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3d2a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3d2aa0: 0x400013  mtlo        $v0
    ctx->pc = 0x3d2aa0u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3d2aa4: 0x70a83000  madd        $a2, $a1, $t0
    ctx->pc = 0x3d2aa4u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 8); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 6, (int32_t)result); }
    // 0x3d2aa8: 0x400013  mtlo        $v0
    ctx->pc = 0x3d2aa8u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x3d2aac: 0x70a35000  madd        $t2, $a1, $v1
    ctx->pc = 0x3d2aacu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 3); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 10, (int32_t)result); }
    // 0x3d2ab0: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3d2ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3d2ab4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3d2ab4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2ab8: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x3d2ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
    // 0x3d2abc: 0x646821  addu        $t5, $v1, $a0
    ctx->pc = 0x3d2abcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3d2ac0: 0x2d230001  sltiu       $v1, $t1, 0x1
    ctx->pc = 0x3d2ac0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3d2ac4: 0x122000d6  beqz        $s1, . + 4 + (0xD6 << 2)
    ctx->pc = 0x3D2AC4u;
    {
        const bool branch_taken_0x3d2ac4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2AC4u;
        // 0x3d2ac8: 0xafa30020  sw          $v1, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ac4) {
            ctx->pc = 0x3D2E20u;
            goto label_3d2e20;
        }
    }
    ctx->pc = 0x3D2ACCu;
    // 0x3d2acc: 0x1114018  mult        $t0, $t0, $s1
    ctx->pc = 0x3d2accu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 8, (int32_t)result); }
    // 0x3d2ad0: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3d2ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2ad4: 0x1314818  mult        $t1, $t1, $s1
    ctx->pc = 0x3d2ad4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 9) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x3d2ad8: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x3d2ad8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2adc: 0x711018  mult        $v0, $v1, $s1
    ctx->pc = 0x3d2adcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 17); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3d2ae0: 0x2624ffff  addiu       $a0, $s1, -0x1
    ctx->pc = 0x3d2ae0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    // 0x3d2ae4: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x3d2ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x3d2ae8: 0xc0602d  daddu       $t4, $a2, $zero
    ctx->pc = 0x3d2ae8u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2aec: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x3d2aecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2af0: 0x25130001  addiu       $s3, $t0, 0x1
    ctx->pc = 0x3d2af0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d2af4: 0x2512ffff  addiu       $s2, $t0, -0x1
    ctx->pc = 0x3d2af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967295));
    // 0x3d2af8: 0x120b82d  daddu       $s7, $t1, $zero
    ctx->pc = 0x3d2af8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2afc: 0x2528ffff  addiu       $t0, $t1, -0x1
    ctx->pc = 0x3d2afcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x3d2b00: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x3d2b00u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b04: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x3d2b04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b08: 0x24550001  addiu       $s5, $v0, 0x1
    ctx->pc = 0x3d2b08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3d2b0c: 0x2454ffff  addiu       $s4, $v0, -0x1
    ctx->pc = 0x3d2b0cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x3d2b10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3d2b10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3d2b14: 0x0  nop
    ctx->pc = 0x3d2b14u;
    // NOP
label_3d2b18:
    // 0x3d2b18: 0x89c50003  lwl         $a1, 0x3($t6)
    ctx->pc = 0x3d2b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
    // 0x3d2b1c: 0x99c50000  lwr         $a1, 0x0($t6)
    ctx->pc = 0x3d2b1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
    // 0x3d2b20: 0xa9a50003  swl         $a1, 0x3($t5)
    ctx->pc = 0x3d2b20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3d2b24: 0x1718c2  srl         $v1, $s7, 3
    ctx->pc = 0x3d2b24u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 23), 3));
    // 0x3d2b28: 0xb9a50000  swr         $a1, 0x0($t5)
    ctx->pc = 0x3d2b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x3d2b2c: 0x2031821  addu        $v1, $s0, $v1
    ctx->pc = 0x3d2b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
    // 0x3d2b30: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x3d2b30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x3d2b34: 0x32e50007  andi        $a1, $s7, 0x7
    ctx->pc = 0x3d2b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)7);
    // 0x3d2b38: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x3d2b38u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3d2b3c: 0x2df80001  sltiu       $t8, $t7, 0x1
    ctx->pc = 0x3d2b3cu;
    SET_GPR_U64(ctx, 24, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3d2b40: 0x1e61026  xor         $v0, $t7, $a2
    ctx->pc = 0x3d2b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 15) ^ GPR_U64(ctx, 6));
    // 0x3d2b44: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x3d2b44u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b48: 0xa42007  srav        $a0, $a0, $a1
    ctx->pc = 0x3d2b48u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), GPR_U32(ctx, 5) & 0x1F));
    // 0x3d2b4c: 0x2c590001  sltiu       $t9, $v0, 0x1
    ctx->pc = 0x3d2b4cu;
    SET_GPR_U64(ctx, 25, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3d2b50: 0x30840001  andi        $a0, $a0, 0x1
    ctx->pc = 0x3d2b50u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x3d2b54: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3d2b54u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3d2b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3d2b5c: 0x148000a0  bnez        $a0, . + 4 + (0xA0 << 2)
    ctx->pc = 0x3D2B5Cu;
    {
        const bool branch_taken_0x3d2b5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B5Cu;
        // 0x3d2b60: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b5c) {
            ctx->pc = 0x3D2DE0u;
            goto label_3d2de0;
        }
    }
    ctx->pc = 0x3D2B64u;
    // 0x3d2b64: 0x1720000c  bnez        $t9, . + 4 + (0xC << 2)
    ctx->pc = 0x3D2B64u;
    {
        const bool branch_taken_0x3d2b64 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B64u;
        // 0x3d2b68: 0x910c2  srl         $v0, $t1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b64) {
            ctx->pc = 0x3D2B98u;
            goto label_3d2b98;
        }
    }
    ctx->pc = 0x3D2B6Cu;
    // 0x3d2b6c: 0x31240007  andi        $a0, $t1, 0x7
    ctx->pc = 0x3d2b6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)7);
    // 0x3d2b70: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2b74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2b74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2b78: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2b78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2b7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2b7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2b80: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3D2B80u;
    {
        const bool branch_taken_0x3d2b80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2b80) {
            ctx->pc = 0x3D2B98u;
            goto label_3d2b98;
        }
    }
    ctx->pc = 0x3D2B88u;
    // 0x3d2b88: 0x91ca0004  lbu         $t2, 0x4($t6)
    ctx->pc = 0x3d2b88u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4)));
    // 0x3d2b8c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3d2b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3d2b90: 0x91c60005  lbu         $a2, 0x5($t6)
    ctx->pc = 0x3d2b90u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 5)));
    // 0x3d2b94: 0x91c70006  lbu         $a3, 0x6($t6)
    ctx->pc = 0x3d2b94u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 6)));
label_3d2b98:
    // 0x3d2b98: 0x17000011  bnez        $t8, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2B98u;
    {
        const bool branch_taken_0x3d2b98 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2B98u;
        // 0x3d2b9c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2b98) {
            ctx->pc = 0x3D2BE0u;
            goto label_3d2be0;
        }
    }
    ctx->pc = 0x3D2BA0u;
    // 0x3d2ba0: 0x810c2  srl         $v0, $t0, 3
    ctx->pc = 0x3d2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 8), 3));
    // 0x3d2ba4: 0x31040007  andi        $a0, $t0, 0x7
    ctx->pc = 0x3d2ba4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)7);
    // 0x3d2ba8: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2bac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2bacu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2bb0: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2bb0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2bb4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2bb8: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2BB8u;
    {
        const bool branch_taken_0x3d2bb8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BB8u;
        // 0x3d2bbc: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2bb8) {
            ctx->pc = 0x3D2BE0u;
            goto label_3d2be0;
        }
    }
    ctx->pc = 0x3D2BC0u;
    // 0x3d2bc0: 0x91c2fffc  lbu         $v0, -0x4($t6)
    ctx->pc = 0x3d2bc0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294967292)));
    // 0x3d2bc4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d2bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d2bc8: 0x91c3fffd  lbu         $v1, -0x3($t6)
    ctx->pc = 0x3d2bc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294967293)));
    // 0x3d2bcc: 0x91c4fffe  lbu         $a0, -0x2($t6)
    ctx->pc = 0x3d2bccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 14), 4294967294)));
    // 0x3d2bd0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3d2bd0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3d2bd4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3d2bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d2bd8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3d2bd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3d2bdc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3d2bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2be0:
    // 0x3d2be0: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2BE0u;
    {
        const bool branch_taken_0x3d2be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2BE0u;
        // 0x3d2be4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2be0) {
            ctx->pc = 0x3D2C28u;
            goto label_3d2c28;
        }
    }
    ctx->pc = 0x3D2BE8u;
    // 0x3d2be8: 0x1e10c2  srl         $v0, $fp, 3
    ctx->pc = 0x3d2be8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 30), 3));
    // 0x3d2bec: 0x33c40007  andi        $a0, $fp, 0x7
    ctx->pc = 0x3d2becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)7);
    // 0x3d2bf0: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2bf4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2bf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2bf8: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2bf8u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2bfc: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2c00: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2C00u;
    {
        const bool branch_taken_0x3d2c00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C00u;
        // 0x3d2c04: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c00) {
            ctx->pc = 0x3D2C28u;
            goto label_3d2c28;
        }
    }
    ctx->pc = 0x3D2C08u;
    // 0x3d2c08: 0x91820000  lbu         $v0, 0x0($t4)
    ctx->pc = 0x3d2c08u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x3d2c0c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d2c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d2c10: 0x91830001  lbu         $v1, 0x1($t4)
    ctx->pc = 0x3d2c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x3d2c14: 0x91840002  lbu         $a0, 0x2($t4)
    ctx->pc = 0x3d2c14u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x3d2c18: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3d2c18u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3d2c1c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3d2c1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d2c20: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3d2c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3d2c24: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3d2c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3d2c28:
    // 0x3d2c28: 0x14600011  bnez        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2C28u;
    {
        const bool branch_taken_0x3d2c28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C28u;
        // 0x3d2c2c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c28) {
            ctx->pc = 0x3D2C70u;
            goto label_3d2c70;
        }
    }
    ctx->pc = 0x3D2C30u;
    // 0x3d2c30: 0x1610c2  srl         $v0, $s6, 3
    ctx->pc = 0x3d2c30u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 22), 3));
    // 0x3d2c34: 0x32c40007  andi        $a0, $s6, 0x7
    ctx->pc = 0x3d2c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)7);
    // 0x3d2c38: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2c3c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2c3cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2c40: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2c40u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2c44: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2c44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2c48: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2C48u;
    {
        const bool branch_taken_0x3d2c48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C48u;
        // 0x3d2c4c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c48) {
            ctx->pc = 0x3D2C70u;
            goto label_3d2c70;
        }
    }
    ctx->pc = 0x3D2C50u;
    // 0x3d2c50: 0x91620000  lbu         $v0, 0x0($t3)
    ctx->pc = 0x3d2c50u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3d2c54: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d2c54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d2c58: 0x91630001  lbu         $v1, 0x1($t3)
    ctx->pc = 0x3d2c58u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x3d2c5c: 0x91640002  lbu         $a0, 0x2($t3)
    ctx->pc = 0x3d2c5cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x3d2c60: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3d2c60u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3d2c64: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3d2c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d2c68: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3d2c68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3d2c6c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x3d2c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2c70:
    // 0x3d2c70: 0x14800026  bnez        $a0, . + 4 + (0x26 << 2)
    ctx->pc = 0x3D2C70u;
    {
        const bool branch_taken_0x3d2c70 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C70u;
        // 0x3d2c74: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c70) {
            ctx->pc = 0x3D2D0Cu;
            goto label_3d2d0c;
        }
    }
    ctx->pc = 0x3D2C78u;
    // 0x3d2c78: 0x17000011  bnez        $t8, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2C78u;
    {
        const bool branch_taken_0x3d2c78 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C78u;
        // 0x3d2c7c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c78) {
            ctx->pc = 0x3D2CC0u;
            goto label_3d2cc0;
        }
    }
    ctx->pc = 0x3D2C80u;
    // 0x3d2c80: 0x1210c2  srl         $v0, $s2, 3
    ctx->pc = 0x3d2c80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 18), 3));
    // 0x3d2c84: 0x32440007  andi        $a0, $s2, 0x7
    ctx->pc = 0x3d2c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)7);
    // 0x3d2c88: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2c8c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2c8cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2c90: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2c90u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2c94: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2c94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2c98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2C98u;
    {
        const bool branch_taken_0x3d2c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2C98u;
        // 0x3d2c9c: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2c98) {
            ctx->pc = 0x3D2CC0u;
            goto label_3d2cc0;
        }
    }
    ctx->pc = 0x3D2CA0u;
    // 0x3d2ca0: 0x9182fffc  lbu         $v0, -0x4($t4)
    ctx->pc = 0x3d2ca0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294967292)));
    // 0x3d2ca4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d2ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d2ca8: 0x9183fffd  lbu         $v1, -0x3($t4)
    ctx->pc = 0x3d2ca8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294967293)));
    // 0x3d2cac: 0x9184fffe  lbu         $a0, -0x2($t4)
    ctx->pc = 0x3d2cacu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4294967294)));
    // 0x3d2cb0: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3d2cb0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3d2cb4: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3d2cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d2cb8: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3d2cb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3d2cbc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x3d2cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_3d2cc0:
    // 0x3d2cc0: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3D2CC0u;
    {
        const bool branch_taken_0x3d2cc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CC0u;
        // 0x3d2cc4: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2cc0) {
            ctx->pc = 0x3D2D0Cu;
            goto label_3d2d0c;
        }
    }
    ctx->pc = 0x3D2CC8u;
    // 0x3d2cc8: 0x17200010  bnez        $t9, . + 4 + (0x10 << 2)
    ctx->pc = 0x3D2CC8u;
    {
        const bool branch_taken_0x3d2cc8 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CC8u;
        // 0x3d2ccc: 0x1310c2  srl         $v0, $s3, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 19), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2cc8) {
            ctx->pc = 0x3D2D0Cu;
            goto label_3d2d0c;
        }
    }
    ctx->pc = 0x3D2CD0u;
    // 0x3d2cd0: 0x32640007  andi        $a0, $s3, 0x7
    ctx->pc = 0x3d2cd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)7);
    // 0x3d2cd4: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2cd8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2cd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2cdc: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2cdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2ce0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2ce0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2ce4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2CE4u;
    {
        const bool branch_taken_0x3d2ce4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2CE4u;
        // 0x3d2ce8: 0x8fa30024  lw          $v1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2ce4) {
            ctx->pc = 0x3D2D0Cu;
            goto label_3d2d0c;
        }
    }
    ctx->pc = 0x3D2CECu;
    // 0x3d2cec: 0x91820004  lbu         $v0, 0x4($t4)
    ctx->pc = 0x3d2cecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x3d2cf0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d2cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d2cf4: 0x91830005  lbu         $v1, 0x5($t4)
    ctx->pc = 0x3d2cf4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x3d2cf8: 0x91840006  lbu         $a0, 0x6($t4)
    ctx->pc = 0x3d2cf8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x3d2cfc: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3d2cfcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3d2d00: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3d2d00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d2d04: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3d2d04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3d2d08: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x3d2d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3d2d0c:
    // 0x3d2d0c: 0x14600025  bnez        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x3D2D0Cu;
    {
        const bool branch_taken_0x3d2d0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2d0c) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2D14u;
    // 0x3d2d14: 0x17000011  bnez        $t8, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2D14u;
    {
        const bool branch_taken_0x3d2d14 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D14u;
        // 0x3d2d18: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d14) {
            ctx->pc = 0x3D2D5Cu;
            goto label_3d2d5c;
        }
    }
    ctx->pc = 0x3D2D1Cu;
    // 0x3d2d1c: 0x1410c2  srl         $v0, $s4, 3
    ctx->pc = 0x3d2d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 3));
    // 0x3d2d20: 0x32840007  andi        $a0, $s4, 0x7
    ctx->pc = 0x3d2d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)7);
    // 0x3d2d24: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2d28: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2d28u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2d2c: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2d2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2d30: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2d34: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3D2D34u;
    {
        const bool branch_taken_0x3d2d34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D34u;
        // 0x3d2d38: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d34) {
            ctx->pc = 0x3D2D5Cu;
            goto label_3d2d5c;
        }
    }
    ctx->pc = 0x3D2D3Cu;
    // 0x3d2d3c: 0x9162fffc  lbu         $v0, -0x4($t3)
    ctx->pc = 0x3d2d3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967292)));
    // 0x3d2d40: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d2d40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d2d44: 0x9163fffd  lbu         $v1, -0x3($t3)
    ctx->pc = 0x3d2d44u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967293)));
    // 0x3d2d48: 0x9164fffe  lbu         $a0, -0x2($t3)
    ctx->pc = 0x3d2d48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294967294)));
    // 0x3d2d4c: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3d2d4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3d2d50: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3d2d50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d2d54: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3d2d54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
    // 0x3d2d58: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x3d2d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_3d2d5c:
    // 0x3d2d5c: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x3D2D5Cu;
    {
        const bool branch_taken_0x3d2d5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x3d2d5c) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2D64u;
    // 0x3d2d64: 0x1720000f  bnez        $t9, . + 4 + (0xF << 2)
    ctx->pc = 0x3D2D64u;
    {
        const bool branch_taken_0x3d2d64 = (GPR_U64(ctx, 25) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2D64u;
        // 0x3d2d68: 0x1510c2  srl         $v0, $s5, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 21), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2d64) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2D6Cu;
    // 0x3d2d6c: 0x32a40007  andi        $a0, $s5, 0x7
    ctx->pc = 0x3d2d6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) & (uint64_t)(uint16_t)7);
    // 0x3d2d70: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x3d2d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x3d2d74: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3d2d74u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3d2d78: 0x831807  srav        $v1, $v1, $a0
    ctx->pc = 0x3d2d78u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), GPR_U32(ctx, 4) & 0x1F));
    // 0x3d2d7c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x3d2d7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x3d2d80: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x3D2D80u;
    {
        const bool branch_taken_0x3d2d80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2d80) {
            ctx->pc = 0x3D2DA4u;
            goto label_3d2da4;
        }
    }
    ctx->pc = 0x3D2D88u;
    // 0x3d2d88: 0x91620004  lbu         $v0, 0x4($t3)
    ctx->pc = 0x3d2d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x3d2d8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3d2d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x3d2d90: 0x91630005  lbu         $v1, 0x5($t3)
    ctx->pc = 0x3d2d90u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x3d2d94: 0x91640006  lbu         $a0, 0x6($t3)
    ctx->pc = 0x3d2d94u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x3d2d98: 0x1425021  addu        $t2, $t2, $v0
    ctx->pc = 0x3d2d98u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
    // 0x3d2d9c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x3d2d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x3d2da0: 0xe43821  addu        $a3, $a3, $a0
    ctx->pc = 0x3d2da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
label_3d2da4:
    // 0x3d2da4: 0x50a0000f  beql        $a1, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x3D2DA4u;
    {
        const bool branch_taken_0x3d2da4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2da4) {
            ctx->pc = 0x3D2DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2DA4u;
            // 0x3d2da8: 0x25ef0001  addiu       $t7, $t7, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2DE4u;
            goto label_3d2de4;
        }
    }
    ctx->pc = 0x3D2DACu;
    // 0x3d2dac: 0x145001b  divu        $zero, $t2, $a1
    ctx->pc = 0x3d2dacu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 10) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,10); } }
    // 0x3d2db0: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x3D2DB0u;
    {
        const bool branch_taken_0x3d2db0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x3d2db0) {
            ctx->pc = 0x3D2DB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3D2DB0u;
            // 0x3d2db4: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3D2DB8u;
            goto label_3d2db8;
        }
    }
    ctx->pc = 0x3D2DB8u;
label_3d2db8:
    // 0x3d2db8: 0x1012  mflo        $v0
    ctx->pc = 0x3d2db8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x3d2dbc: 0xc5001b  divu        $zero, $a2, $a1
    ctx->pc = 0x3d2dbcu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
    // 0x3d2dc0: 0xa1a20000  sb          $v0, 0x0($t5)
    ctx->pc = 0x3d2dc0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2dc4: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x3d2dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x3d2dc8: 0x1812  mflo        $v1
    ctx->pc = 0x3d2dc8u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x3d2dcc: 0xe5001b  divu        $zero, $a3, $a1
    ctx->pc = 0x3d2dccu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 7) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,7); } }
    // 0x3d2dd0: 0xa1a30001  sb          $v1, 0x1($t5)
    ctx->pc = 0x3d2dd0u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x3d2dd4: 0xa1a20003  sb          $v0, 0x3($t5)
    ctx->pc = 0x3d2dd4u;
    WRITE8(ADD32(GPR_U32(ctx, 13), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x3d2dd8: 0x2012  mflo        $a0
    ctx->pc = 0x3d2dd8u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x3d2ddc: 0xa1a40002  sb          $a0, 0x2($t5)
    ctx->pc = 0x3d2ddcu;
    WRITE8(ADD32(GPR_U32(ctx, 13), 2), (uint8_t)GPR_U32(ctx, 4));
label_3d2de0:
    // 0x3d2de0: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x3d2de0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
label_3d2de4:
    // 0x3d2de4: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3d2de4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3d2de8: 0x256b0004  addiu       $t3, $t3, 0x4
    ctx->pc = 0x3d2de8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
    // 0x3d2dec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x3d2decu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    // 0x3d2df0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x3d2df0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x3d2df4: 0x258c0004  addiu       $t4, $t4, 0x4
    ctx->pc = 0x3d2df4u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
    // 0x3d2df8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3d2df8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x3d2dfc: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x3d2dfcu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x3d2e00: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x3d2e00u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x3d2e04: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x3d2e04u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x3d2e08: 0x25ce0004  addiu       $t6, $t6, 0x4
    ctx->pc = 0x3d2e08u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4));
    // 0x3d2e0c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3d2e0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3d2e10: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x3d2e10u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x3d2e14: 0x1f1102b  sltu        $v0, $t7, $s1
    ctx->pc = 0x3d2e14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x3d2e18: 0x1440ff3f  bnez        $v0, . + 4 + (-0xC1 << 2)
    ctx->pc = 0x3D2E18u;
    {
        const bool branch_taken_0x3d2e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E18u;
        // 0x3d2e1c: 0x26f70001  addiu       $s7, $s7, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e18) {
            ctx->pc = 0x3D2B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2b18;
        }
    }
    ctx->pc = 0x3D2E20u;
label_3d2e20:
    // 0x3d2e20: 0x8fa90030  lw          $t1, 0x30($sp)
    ctx->pc = 0x3d2e20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3d2e24: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x3d2e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x3d2e28: 0x123102b  sltu        $v0, $t1, $v1
    ctx->pc = 0x3d2e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3d2e2c: 0x1440ff12  bnez        $v0, . + 4 + (-0xEE << 2)
    ctx->pc = 0x3D2E2Cu;
    {
        const bool branch_taken_0x3d2e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3D2E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E2Cu;
        // 0x3d2e30: 0x8fa60028  lw          $a2, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3d2e2c) {
            ctx->pc = 0x3D2A78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3d2a78;
        }
    }
    ctx->pc = 0x3D2E34u;
label_3d2e34:
    // 0x3d2e34: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x3d2e34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3d2e38: 0xc1073c2  jal         func_41CF08
    ctx->pc = 0x3D2E38u;
    SET_GPR_U32(ctx, 31, 0x3D2E40u);
    ctx->pc = 0x3D2E3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2E38u;
    // 0x3d2e3c: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41CF08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41CF08u, 0x3D2E38u, 0x3D2E40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2E40u;
label_3d2e40:
    // 0x3d2e40: 0xc10705c  jal         func_41C170
    ctx->pc = 0x3D2E40u;
    SET_GPR_U32(ctx, 31, 0x3D2E48u);
    ctx->pc = 0x3D2E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2E40u;
    // 0x3d2e44: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D2E40u, 0x3D2E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2E48u;
label_3d2e48:
    // 0x3d2e48: 0xc10705c  jal         func_41C170
    ctx->pc = 0x3D2E48u;
    SET_GPR_U32(ctx, 31, 0x3D2E50u);
    ctx->pc = 0x3D2E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3D2E48u;
    // 0x3d2e4c: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x41C170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x41C170u, 0x3D2E48u, 0x3D2E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3D2E50u;
label_3d2e50:
    // 0x3d2e50: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3d2e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3d2e54: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x3d2e54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3d2e58: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x3d2e58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3d2e5c: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x3d2e5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3d2e60: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x3d2e60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3d2e64: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x3d2e64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3d2e68: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x3d2e68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3d2e6c: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3d2e6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3d2e70: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x3d2e70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3d2e74: 0x7bbe0050  lq          $fp, 0x50($sp)
    ctx->pc = 0x3d2e74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3d2e78: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3d2e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3d2e7c: 0x3e00008  jr          $ra
    ctx->pc = 0x3D2E7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3D2E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3D2E7Cu;
        // 0x3d2e80: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3D2E7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3D2E84u;
    // 0x3d2e84: 0x0  nop
    ctx->pc = 0x3d2e84u;
    // NOP
    ctx->pc = 0x3d2e88u;
}
