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

// Function: sub_00293930
// Address: 0x293930 - 0x293b60
void sub_00293930_0x293930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00293930_0x293930");
#endif

    switch (ctx->pc) {
        case 0x293a34u: goto label_293a34;
        case 0x293a70u: goto label_293a70;
        case 0x293a90u: goto label_293a90;
        case 0x293ab4u: goto label_293ab4;
        case 0x293af0u: goto label_293af0;
        case 0x293b18u: goto label_293b18;
        case 0x293b44u: goto label_293b44;
        default: break;
    }

    ctx->pc = 0x293930u;

    // 0x293930: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x293930u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x293934: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x293934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x293938: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x293938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x29393c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29393cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x293940: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x293940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x293944: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x293944u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x293948: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x293948u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x29394c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x29394cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x293950: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x293950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293954: 0x1060007b  beqz        $v1, . + 4 + (0x7B << 2)
    ctx->pc = 0x293954u;
    {
        const bool branch_taken_0x293954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x293954) {
            ctx->pc = 0x293B44u;
            goto label_293b44;
        }
    }
    ctx->pc = 0x29395Cu;
    // 0x29395c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29395cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293960: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x293960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x293964: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x293964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293968: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x293968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x29396c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x29396cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293970: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x293970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x293974: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x293974u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x293978: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x293978u;
    {
        const bool branch_taken_0x293978 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x293978) {
            ctx->pc = 0x293988u;
            goto label_293988;
        }
    }
    ctx->pc = 0x293980u;
    // 0x293980: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x293980u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x293984: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x293984u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_293988:
    // 0x293988: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x293988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x29398c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x29398cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x293990: 0x14400063  bnez        $v0, . + 4 + (0x63 << 2)
    ctx->pc = 0x293990u;
    {
        const bool branch_taken_0x293990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x293990) {
            ctx->pc = 0x293B20u;
            goto label_293b20;
        }
    }
    ctx->pc = 0x293998u;
    // 0x293998: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x293998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x29399c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x29399cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2939a0: 0x90450000  lbu         $a1, 0x0($v0)
    ctx->pc = 0x2939a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2939a4: 0x90440001  lbu         $a0, 0x1($v0)
    ctx->pc = 0x2939a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
    // 0x2939a8: 0x90430002  lbu         $v1, 0x2($v0)
    ctx->pc = 0x2939a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2939ac: 0x90420003  lbu         $v0, 0x3($v0)
    ctx->pc = 0x2939acu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2939b0: 0xa0c50000  sb          $a1, 0x0($a2)
    ctx->pc = 0x2939b0u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x2939b4: 0xa0c40001  sb          $a0, 0x1($a2)
    ctx->pc = 0x2939b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x2939b8: 0xa0c30002  sb          $v1, 0x2($a2)
    ctx->pc = 0x2939b8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2939bc: 0xa0c20003  sb          $v0, 0x3($a2)
    ctx->pc = 0x2939bcu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x2939c0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2939c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2939c4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2939c8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2939c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2939cc: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2939ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2939d0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2939d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2939d4: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x2939d4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2939d8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2939D8u;
    {
        const bool branch_taken_0x2939d8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2939d8) {
            ctx->pc = 0x2939E8u;
            goto label_2939e8;
        }
    }
    ctx->pc = 0x2939E0u;
    // 0x2939e0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2939e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2939e4: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x2939e4u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_2939e8:
    // 0x2939e8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2939e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2939ec: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2939ecu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2939f0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2939f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2939f4: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2939f4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2939f8: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2939F8u;
    {
        const bool branch_taken_0x2939f8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2939f8) {
            ctx->pc = 0x293A98u;
            goto label_293a98;
        }
    }
    ctx->pc = 0x293A00u;
    // 0x293a00: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x293a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293a04: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x293a04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x293a08: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x293a08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293a0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293a10: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x293a10u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x293a14: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x293a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293a18: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x293a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293a1c: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x293a1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x293a20: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x293a20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x293a24: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x293a24u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x293a28: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x293a28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x293a2c: 0xc0a4ffc  jal         func_293FF0
    ctx->pc = 0x293A2Cu;
    SET_GPR_U32(ctx, 31, 0x293A34u);
    ctx->pc = 0x293FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FF0u, 0x293A2Cu, 0x293A34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A34u;
label_293a34:
    // 0x293a34: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x293a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293a38: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x293a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293a3c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x293a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293a40: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x293a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x293a44: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293a48: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x293a48u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x293a4c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x293a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293a50: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293a54: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x293a54u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x293a58: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x293a58u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x293a5c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x293a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293a60: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x293a60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293a64: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x293a64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x293a68: 0xc0a4fc8  jal         func_293F20
    ctx->pc = 0x293A68u;
    SET_GPR_U32(ctx, 31, 0x293A70u);
    ctx->pc = 0x293F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293F20u, 0x293A68u, 0x293A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A70u;
label_293a70:
    // 0x293a70: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x293a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293a74: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x293a74u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293a78: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293a7c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x293a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293a80: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x293a80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293a84: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x293a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x293a88: 0xc0a4fb0  jal         func_293EC0
    ctx->pc = 0x293A88u;
    SET_GPR_U32(ctx, 31, 0x293A90u);
    ctx->pc = 0x293EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293EC0u, 0x293A88u, 0x293A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293A90u;
label_293a90:
    // 0x293a90: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x293A90u;
    {
        const bool branch_taken_0x293a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293a90) {
            ctx->pc = 0x293B44u;
            goto label_293b44;
        }
    }
    ctx->pc = 0x293A98u;
label_293a98:
    // 0x293a98: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x293a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293a9c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x293a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293aa0: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x293aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x293aa4: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x293aa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x293aa8: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x293aa8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x293aac: 0xc0a4fa0  jal         func_293E80
    ctx->pc = 0x293AACu;
    SET_GPR_U32(ctx, 31, 0x293AB4u);
    ctx->pc = 0x293E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293E80u, 0x293AACu, 0x293AB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AB4u;
label_293ab4:
    // 0x293ab4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x293ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293ab8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x293ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x293abc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x293abcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x293ac0: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x293ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293ac4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x293ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x293ac8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x293ac8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x293acc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x293accu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x293ad0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x293ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293ad4: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x293ad4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x293ad8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x293ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293adc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293adcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293ae0: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x293ae0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x293ae4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x293ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x293ae8: 0xc0a4ffc  jal         func_293FF0
    ctx->pc = 0x293AE8u;
    SET_GPR_U32(ctx, 31, 0x293AF0u);
    ctx->pc = 0x293FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293FF0u, 0x293AE8u, 0x293AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293AF0u;
label_293af0:
    // 0x293af0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x293af0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293af4: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x293af4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x293af8: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x293af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x293afc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x293b00: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x293b00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x293b04: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x293b04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293b08: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x293b08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b0c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x293b0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x293b10: 0xc0a4fb0  jal         func_293EC0
    ctx->pc = 0x293B10u;
    SET_GPR_U32(ctx, 31, 0x293B18u);
    ctx->pc = 0x293EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293EC0u, 0x293B10u, 0x293B18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B18u;
label_293b18:
    // 0x293b18: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x293B18u;
    {
        const bool branch_taken_0x293b18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x293b18) {
            ctx->pc = 0x293B44u;
            goto label_293b44;
        }
    }
    ctx->pc = 0x293B20u;
label_293b20:
    // 0x293b20: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x293b20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x293b24: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x293b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x293b28: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x293b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x293b2c: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x293b2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x293b30: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x293b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x293b34: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x293b34u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x293b38: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x293b38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x293b3c: 0xc0a4ed8  jal         func_293B60
    ctx->pc = 0x293B3Cu;
    SET_GPR_U32(ctx, 31, 0x293B44u);
    ctx->pc = 0x293B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293B60u, 0x293B3Cu, 0x293B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293B44u;
label_293b44:
    // 0x293b44: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x293b44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x293b48: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x293b48u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x293b4c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x293b4cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x293b50: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x293b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x293b54: 0x3e00008  jr          $ra
    ctx->pc = 0x293B54u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293B54u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293B5Cu;
    // 0x293b5c: 0x0  nop
    ctx->pc = 0x293b5cu;
    // NOP
    ctx->pc = 0x293b60u;
}
