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

// Function: sub_0013C230
// Address: 0x13c230 - 0x13c440
void sub_0013C230_0x13c230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013C230_0x13c230");
#endif

    switch (ctx->pc) {
        case 0x13c318u: goto label_13c318;
        case 0x13c354u: goto label_13c354;
        case 0x13c374u: goto label_13c374;
        case 0x13c398u: goto label_13c398;
        case 0x13c3d4u: goto label_13c3d4;
        case 0x13c3fcu: goto label_13c3fc;
        case 0x13c428u: goto label_13c428;
        default: break;
    }

    ctx->pc = 0x13c230u;

    // 0x13c230: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x13c230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x13c234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x13c234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x13c238: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13c238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13c23c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13c23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13c240: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x13c240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x13c244: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x13c244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x13c248: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x13c248u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x13c24c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x13c24cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x13c250: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x13c250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c254: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x13C254u;
    {
        const bool branch_taken_0x13c254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c254) {
            ctx->pc = 0x13C428u;
            goto label_13c428;
        }
    }
    ctx->pc = 0x13C25Cu;
    // 0x13c25c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c25cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c260: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x13c260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x13c264: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c268: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x13c268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c26c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x13c26cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13c270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c274: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x13c274u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x13c278: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C278u;
    {
        const bool branch_taken_0x13c278 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x13c278) {
            ctx->pc = 0x13C288u;
            goto label_13c288;
        }
    }
    ctx->pc = 0x13C280u;
    // 0x13c280: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x13c280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x13c284: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x13c284u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_13c288:
    // 0x13c288: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c28c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x13c28cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x13c290: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x13C290u;
    {
        const bool branch_taken_0x13c290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13c290) {
            ctx->pc = 0x13C404u;
            goto label_13c404;
        }
    }
    ctx->pc = 0x13C298u;
    // 0x13c298: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x13c298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c29c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x13c29cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13c2a0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x13c2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x13c2a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c2a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c2ac: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13c2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c2b0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x13c2b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c2b4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x13c2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x13c2b8: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x13c2b8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x13c2bc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x13C2BCu;
    {
        const bool branch_taken_0x13c2bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x13c2bc) {
            ctx->pc = 0x13C2CCu;
            goto label_13c2cc;
        }
    }
    ctx->pc = 0x13C2C4u;
    // 0x13c2c4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x13c2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x13c2c8: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x13c2c8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_13c2cc:
    // 0x13c2cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c2ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c2d0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x13c2d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c2d4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c2d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c2d8: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x13c2d8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x13c2dc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x13C2DCu;
    {
        const bool branch_taken_0x13c2dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c2dc) {
            ctx->pc = 0x13C37Cu;
            goto label_13c37c;
        }
    }
    ctx->pc = 0x13C2E4u;
    // 0x13c2e4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c2e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c2e8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x13c2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c2ec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c2f0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13c2f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c2f4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x13c2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13c2f8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13c2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c2fc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c300: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x13c300u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c304: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x13c304u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13c308: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x13c308u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c30c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x13c30cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x13c310: 0xc04f208  jal         func_13C820
    ctx->pc = 0x13C310u;
    SET_GPR_U32(ctx, 31, 0x13C318u);
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x13C310u, 0x13C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C318u;
label_13c318:
    // 0x13c318: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13c318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c31c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c31cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c320: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13c320u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c324: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13c324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13c328: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c32c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x13c32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x13c330: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c334: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13c334u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c338: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x13c338u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x13c33c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x13c33cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c340: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x13c340u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c344: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x13c344u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c348: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x13c348u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x13c34c: 0xc04f1d8  jal         func_13C760
    ctx->pc = 0x13C34Cu;
    SET_GPR_U32(ctx, 31, 0x13C354u);
    ctx->pc = 0x13C760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C760u, 0x13C34Cu, 0x13C354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C354u;
label_13c354:
    // 0x13c354: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c354u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c358: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x13c358u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c35c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x13c35cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c360: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x13c360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c364: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x13c364u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c368: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x13c368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13c36c: 0xc04f1c4  jal         func_13C710
    ctx->pc = 0x13C36Cu;
    SET_GPR_U32(ctx, 31, 0x13C374u);
    ctx->pc = 0x13C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C710u, 0x13C36Cu, 0x13C374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C374u;
label_13c374:
    // 0x13c374: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x13C374u;
    {
        const bool branch_taken_0x13c374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c374) {
            ctx->pc = 0x13C428u;
            goto label_13c428;
        }
    }
    ctx->pc = 0x13C37Cu;
label_13c37c:
    // 0x13c37c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13c37cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c380: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c384: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x13c384u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13c388: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x13c388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13c38c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x13c38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13c390: 0xc04f1a4  jal         func_13C690
    ctx->pc = 0x13C390u;
    SET_GPR_U32(ctx, 31, 0x13C398u);
    ctx->pc = 0x13C690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C690u, 0x13C390u, 0x13C398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C398u;
label_13c398:
    // 0x13c398: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x13c398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c39c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x13c39cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x13c3a0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x13c3a0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13c3a4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x13c3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c3a8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x13c3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x13c3ac: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13c3b0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x13c3b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x13c3b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x13c3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c3b8: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x13c3b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c3bc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x13c3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c3c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c3c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3c4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x13c3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13c3c8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x13c3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x13c3cc: 0xc04f208  jal         func_13C820
    ctx->pc = 0x13C3CCu;
    SET_GPR_U32(ctx, 31, 0x13C3D4u);
    ctx->pc = 0x13C820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C820u, 0x13C3CCu, 0x13C3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3D4u;
label_13c3d4:
    // 0x13c3d4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13c3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c3d8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x13c3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x13c3dc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x13c3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x13c3e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13c3e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13c3e4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x13c3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x13c3e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x13c3e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c3ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x13c3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c3f0: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x13c3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x13c3f4: 0xc04f1c4  jal         func_13C710
    ctx->pc = 0x13C3F4u;
    SET_GPR_U32(ctx, 31, 0x13C3FCu);
    ctx->pc = 0x13C710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C710u, 0x13C3F4u, 0x13C3FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C3FCu;
label_13c3fc:
    // 0x13c3fc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x13C3FCu;
    {
        const bool branch_taken_0x13c3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13c3fc) {
            ctx->pc = 0x13C428u;
            goto label_13c428;
        }
    }
    ctx->pc = 0x13C404u;
label_13c404:
    // 0x13c404: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x13c404u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x13c408: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x13c408u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13c40c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x13c40cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13c410: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x13c410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x13c414: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x13c414u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x13c418: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x13c418u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x13c41c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x13c41cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13c420: 0xc04f110  jal         func_13C440
    ctx->pc = 0x13C420u;
    SET_GPR_U32(ctx, 31, 0x13C428u);
    ctx->pc = 0x13C440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13C440u, 0x13C420u, 0x13C428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13C428u;
label_13c428:
    // 0x13c428: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x13c428u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13c42c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13c42cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13c430: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13c430u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13c434: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x13c434u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x13c438: 0x3e00008  jr          $ra
    ctx->pc = 0x13C438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13C438u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13C440u;
}
