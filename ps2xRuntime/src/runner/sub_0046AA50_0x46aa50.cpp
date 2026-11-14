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

// Function: sub_0046AA50
// Address: 0x46aa50 - 0x46ac60
void sub_0046AA50_0x46aa50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0046AA50_0x46aa50");
#endif

    switch (ctx->pc) {
        case 0x46ab38u: goto label_46ab38;
        case 0x46ab74u: goto label_46ab74;
        case 0x46ab94u: goto label_46ab94;
        case 0x46abb8u: goto label_46abb8;
        case 0x46abf4u: goto label_46abf4;
        case 0x46ac1cu: goto label_46ac1c;
        case 0x46ac48u: goto label_46ac48;
        default: break;
    }

    ctx->pc = 0x46aa50u;

    // 0x46aa50: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x46aa50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x46aa54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x46aa54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x46aa58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x46aa58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x46aa5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x46aa5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x46aa60: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x46aa60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x46aa64: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x46aa64u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x46aa68: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x46aa68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x46aa6c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x46aa6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x46aa70: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x46aa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46aa74: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x46AA74u;
    {
        const bool branch_taken_0x46aa74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x46aa74) {
            ctx->pc = 0x46AC48u;
            goto label_46ac48;
        }
    }
    ctx->pc = 0x46AA7Cu;
    // 0x46aa7c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46aa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46aa80: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x46aa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x46aa84: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46aa84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46aa88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x46aa88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46aa8c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x46aa8cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46aa90: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46aa94: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x46aa94u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x46aa98: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x46AA98u;
    {
        const bool branch_taken_0x46aa98 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x46aa98) {
            ctx->pc = 0x46AAA8u;
            goto label_46aaa8;
        }
    }
    ctx->pc = 0x46AAA0u;
    // 0x46aaa0: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x46aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x46aaa4: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x46aaa4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_46aaa8:
    // 0x46aaa8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46aaac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x46aaacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x46aab0: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x46AAB0u;
    {
        const bool branch_taken_0x46aab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x46aab0) {
            ctx->pc = 0x46AC24u;
            goto label_46ac24;
        }
    }
    ctx->pc = 0x46AAB8u;
    // 0x46aab8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x46aab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x46aabc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x46aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x46aac0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x46aac0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x46aac4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46aac4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46aac8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46aac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46aacc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46aaccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46aad0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x46aad0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46aad4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x46aad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x46aad8: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x46aad8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x46aadc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x46AADCu;
    {
        const bool branch_taken_0x46aadc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x46aadc) {
            ctx->pc = 0x46AAECu;
            goto label_46aaec;
        }
    }
    ctx->pc = 0x46AAE4u;
    // 0x46aae4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x46aae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x46aae8: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x46aae8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_46aaec:
    // 0x46aaec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46aaecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46aaf0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x46aaf0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46aaf4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46aaf8: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x46aaf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x46aafc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x46AAFCu;
    {
        const bool branch_taken_0x46aafc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x46aafc) {
            ctx->pc = 0x46AB9Cu;
            goto label_46ab9c;
        }
    }
    ctx->pc = 0x46AB04u;
    // 0x46ab04: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ab08: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x46ab08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46ab0c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46ab0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ab10: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ab10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ab14: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x46ab14u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x46ab18: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x46ab18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ab1c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46ab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ab20: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x46ab20u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x46ab24: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x46ab24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x46ab28: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x46ab28u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46ab2c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x46ab2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x46ab30: 0xc04f208  jal         func_13C820
    ctx->pc = 0x46AB30u;
    SET_GPR_U32(ctx, 31, 0x46AB38u);
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x46AB30u, 0x46AB38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AB38u;
label_46ab38:
    // 0x46ab38: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46ab38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ab3c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ab40: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46ab40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ab44: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x46ab44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x46ab48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46ab4c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x46ab4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x46ab50: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46ab50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ab54: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x46ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ab58: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x46ab58u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x46ab5c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x46ab5cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x46ab60: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x46ab60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ab64: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x46ab64u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ab68: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x46ab68u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x46ab6c: 0xc04f1d8  jal         func_13C760
    ctx->pc = 0x46AB6Cu;
    SET_GPR_U32(ctx, 31, 0x46AB74u);
    ctx->pc = 0x13C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C760u, 0x46AB6Cu, 0x46AB74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AB74u;
label_46ab74:
    // 0x46ab74: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46ab74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ab78: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x46ab78u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46ab7c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x46ab7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ab80: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x46ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46ab84: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x46ab84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ab88: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x46ab88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x46ab8c: 0xc04f1c4  jal         func_13C710
    ctx->pc = 0x46AB8Cu;
    SET_GPR_U32(ctx, 31, 0x46AB94u);
    ctx->pc = 0x13C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C710u, 0x46AB8Cu, 0x46AB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AB94u;
label_46ab94:
    // 0x46ab94: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x46AB94u;
    {
        const bool branch_taken_0x46ab94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ab94) {
            ctx->pc = 0x46AC48u;
            goto label_46ac48;
        }
    }
    ctx->pc = 0x46AB9Cu;
label_46ab9c:
    // 0x46ab9c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x46ab9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46aba0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46aba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46aba4: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x46aba4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x46aba8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x46aba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x46abac: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x46abacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x46abb0: 0xc04f1a4  jal         func_13C690
    ctx->pc = 0x46ABB0u;
    SET_GPR_U32(ctx, 31, 0x46ABB8u);
    ctx->pc = 0x13C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C690u, 0x46ABB0u, 0x46ABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ABB8u;
label_46abb8:
    // 0x46abb8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x46abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46abbc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x46abbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x46abc0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x46abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x46abc4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x46abc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46abc8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x46abc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x46abcc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x46abccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x46abd0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x46abd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x46abd4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x46abd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46abd8: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x46abd8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x46abdc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x46abdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46abe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46abe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46abe4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x46abe4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x46abe8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x46abe8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x46abec: 0xc04f208  jal         func_13C820
    ctx->pc = 0x46ABECu;
    SET_GPR_U32(ctx, 31, 0x46ABF4u);
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x46ABECu, 0x46ABF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46ABF4u;
label_46abf4:
    // 0x46abf4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46abf4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46abf8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x46abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x46abfc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x46abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x46ac00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x46ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x46ac04: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x46ac04u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x46ac08: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x46ac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ac0c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x46ac0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ac10: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x46ac10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x46ac14: 0xc04f1c4  jal         func_13C710
    ctx->pc = 0x46AC14u;
    SET_GPR_U32(ctx, 31, 0x46AC1Cu);
    ctx->pc = 0x13C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C710u, 0x46AC14u, 0x46AC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AC1Cu;
label_46ac1c:
    // 0x46ac1c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x46AC1Cu;
    {
        const bool branch_taken_0x46ac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x46ac1c) {
            ctx->pc = 0x46AC48u;
            goto label_46ac48;
        }
    }
    ctx->pc = 0x46AC24u;
label_46ac24:
    // 0x46ac24: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x46ac24u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x46ac28: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x46ac28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x46ac2c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x46ac2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x46ac30: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x46ac30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x46ac34: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x46ac34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x46ac38: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x46ac38u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x46ac3c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x46ac3cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x46ac40: 0xc11ab18  jal         func_46AC60
    ctx->pc = 0x46AC40u;
    SET_GPR_U32(ctx, 31, 0x46AC48u);
    ctx->pc = 0x46AC60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x46AC60u, 0x46AC40u, 0x46AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x46AC48u;
label_46ac48:
    // 0x46ac48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x46ac48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x46ac4c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x46ac4cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x46ac50: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x46ac50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x46ac54: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x46ac54u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x46ac58: 0x3e00008  jr          $ra
    ctx->pc = 0x46AC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x46AC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x46AC60u;
}
