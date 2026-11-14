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

// Function: sub_001809C0
// Address: 0x1809c0 - 0x180bd0
void sub_001809C0_0x1809c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001809C0_0x1809c0");
#endif

    switch (ctx->pc) {
        case 0x180aa8u: goto label_180aa8;
        case 0x180ae4u: goto label_180ae4;
        case 0x180b04u: goto label_180b04;
        case 0x180b28u: goto label_180b28;
        case 0x180b64u: goto label_180b64;
        case 0x180b8cu: goto label_180b8c;
        case 0x180bb8u: goto label_180bb8;
        default: break;
    }

    ctx->pc = 0x1809c0u;

    // 0x1809c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x1809c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x1809c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1809c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1809c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1809c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1809cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1809ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1809d0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x1809d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x1809d4: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x1809d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x1809d8: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x1809d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x1809dc: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x1809dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x1809e0: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x1809e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1809e4: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x1809E4u;
    {
        const bool branch_taken_0x1809e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1809e4) {
            ctx->pc = 0x180BB8u;
            goto label_180bb8;
        }
    }
    ctx->pc = 0x1809ECu;
    // 0x1809ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1809ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1809f0: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1809f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1809f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1809f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1809f8: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x1809f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1809fc: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x1809fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180a00: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x180a00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180a04: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x180a04u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x180a08: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x180A08u;
    {
        const bool branch_taken_0x180a08 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x180a08) {
            ctx->pc = 0x180A18u;
            goto label_180a18;
        }
    }
    ctx->pc = 0x180A10u;
    // 0x180a10: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x180a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x180a14: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x180a14u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_180a18:
    // 0x180a18: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180a1c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x180a1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x180a20: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x180A20u;
    {
        const bool branch_taken_0x180a20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x180a20) {
            ctx->pc = 0x180B94u;
            goto label_180b94;
        }
    }
    ctx->pc = 0x180A28u;
    // 0x180a28: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x180a28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x180a2c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x180a2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x180a30: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x180a30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    // 0x180a34: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180a34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180a38: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x180a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180a3c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x180a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180a40: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x180a40u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180a44: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x180a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x180a48: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x180a48u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x180a4c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x180A4Cu;
    {
        const bool branch_taken_0x180a4c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x180a4c) {
            ctx->pc = 0x180A5Cu;
            goto label_180a5c;
        }
    }
    ctx->pc = 0x180A54u;
    // 0x180a54: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x180a54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x180a58: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x180a58u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_180a5c:
    // 0x180a5c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180a60: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x180a60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180a64: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180a68: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x180a68u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x180a6c: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x180A6Cu;
    {
        const bool branch_taken_0x180a6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x180a6c) {
            ctx->pc = 0x180B0Cu;
            goto label_180b0c;
        }
    }
    ctx->pc = 0x180A74u;
    // 0x180a74: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180a78: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x180a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180a7c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180a80: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180a80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180a84: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x180a84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x180a88: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x180a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180a8c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180a90: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x180a90u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x180a94: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x180a94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x180a98: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x180a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180a9c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x180a9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x180aa0: 0xc0603cc  jal         func_180F30
    ctx->pc = 0x180AA0u;
    SET_GPR_U32(ctx, 31, 0x180AA8u);
    ctx->pc = 0x180F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F30u, 0x180AA0u, 0x180AA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AA8u;
label_180aa8:
    // 0x180aa8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180aac: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180aacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180ab0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x180ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180ab4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x180ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x180ab8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180abc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x180abcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x180ac0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180ac4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x180ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180ac8: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x180ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x180acc: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x180accu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x180ad0: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x180ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180ad4: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x180ad4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180ad8: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x180ad8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x180adc: 0xc0603bc  jal         func_180EF0
    ctx->pc = 0x180ADCu;
    SET_GPR_U32(ctx, 31, 0x180AE4u);
    ctx->pc = 0x180EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180EF0u, 0x180ADCu, 0x180AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180AE4u;
label_180ae4:
    // 0x180ae4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180ae8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x180ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180aec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x180aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180af0: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x180af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180af4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x180af4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180af8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x180af8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x180afc: 0xc0603a8  jal         func_180EA0
    ctx->pc = 0x180AFCu;
    SET_GPR_U32(ctx, 31, 0x180B04u);
    ctx->pc = 0x180EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180EA0u, 0x180AFCu, 0x180B04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B04u;
label_180b04:
    // 0x180b04: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x180B04u;
    {
        const bool branch_taken_0x180b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180b04) {
            ctx->pc = 0x180BB8u;
            goto label_180bb8;
        }
    }
    ctx->pc = 0x180B0Cu;
label_180b0c:
    // 0x180b0c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x180b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180b10: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180b10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180b14: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x180b14u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x180b18: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x180b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x180b1c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x180b1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x180b20: 0xc060388  jal         func_180E20
    ctx->pc = 0x180B20u;
    SET_GPR_U32(ctx, 31, 0x180B28u);
    ctx->pc = 0x180E20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180E20u, 0x180B20u, 0x180B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B28u;
label_180b28:
    // 0x180b28: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x180b28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180b2c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x180b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x180b30: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x180b30u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x180b34: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x180b34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180b38: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x180b38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x180b3c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x180b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x180b40: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x180b40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x180b44: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x180b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180b48: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x180b48u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x180b4c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x180b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180b50: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180b50u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b54: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x180b54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x180b58: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x180b58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x180b5c: 0xc0603cc  jal         func_180F30
    ctx->pc = 0x180B5Cu;
    SET_GPR_U32(ctx, 31, 0x180B64u);
    ctx->pc = 0x180F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180F30u, 0x180B5Cu, 0x180B64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B64u;
label_180b64:
    // 0x180b64: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180b68: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x180b68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x180b6c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x180b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x180b70: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x180b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x180b74: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x180b74u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x180b78: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x180b78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180b7c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x180b7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180b80: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x180b80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x180b84: 0xc0603a8  jal         func_180EA0
    ctx->pc = 0x180B84u;
    SET_GPR_U32(ctx, 31, 0x180B8Cu);
    ctx->pc = 0x180EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180EA0u, 0x180B84u, 0x180B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180B8Cu;
label_180b8c:
    // 0x180b8c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x180B8Cu;
    {
        const bool branch_taken_0x180b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x180b8c) {
            ctx->pc = 0x180BB8u;
            goto label_180bb8;
        }
    }
    ctx->pc = 0x180B94u;
label_180b94:
    // 0x180b94: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x180b94u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x180b98: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x180b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x180b9c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x180b9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x180ba0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x180ba0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x180ba4: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x180ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x180ba8: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x180ba8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x180bac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x180bacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x180bb0: 0xc0602f4  jal         func_180BD0
    ctx->pc = 0x180BB0u;
    SET_GPR_U32(ctx, 31, 0x180BB8u);
    ctx->pc = 0x180BD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x180BD0u, 0x180BB0u, 0x180BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x180BB8u;
label_180bb8:
    // 0x180bb8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x180bb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x180bbc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x180bbcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x180bc0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x180bc0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x180bc4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x180bc4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x180bc8: 0x3e00008  jr          $ra
    ctx->pc = 0x180BC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x180BC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x180BD0u;
}
