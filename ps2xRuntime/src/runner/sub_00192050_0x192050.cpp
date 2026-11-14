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

// Function: sub_00192050
// Address: 0x192050 - 0x192260
void sub_00192050_0x192050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00192050_0x192050");
#endif

    switch (ctx->pc) {
        case 0x192138u: goto label_192138;
        case 0x192174u: goto label_192174;
        case 0x192194u: goto label_192194;
        case 0x1921b8u: goto label_1921b8;
        case 0x1921f4u: goto label_1921f4;
        case 0x19221cu: goto label_19221c;
        case 0x192248u: goto label_192248;
        default: break;
    }

    ctx->pc = 0x192050u;

    // 0x192050: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x192050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x192054: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x192054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x192058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x192058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19205c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19205cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x192060: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x192060u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x192064: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x192064u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x192068: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x192068u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x19206c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x19206cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x192070: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x192070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192074: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x192074u;
    {
        const bool branch_taken_0x192074 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x192074) {
            ctx->pc = 0x192248u;
            goto label_192248;
        }
    }
    ctx->pc = 0x19207Cu;
    // 0x19207c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19207cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192080: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x192080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x192084: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x192084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192088: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x192088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19208c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x19208cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192090: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x192090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x192094: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x192094u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x192098: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x192098u;
    {
        const bool branch_taken_0x192098 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x192098) {
            ctx->pc = 0x1920A8u;
            goto label_1920a8;
        }
    }
    ctx->pc = 0x1920A0u;
    // 0x1920a0: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x1920a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x1920a4: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x1920a4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_1920a8:
    // 0x1920a8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1920a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1920ac: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x1920acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1920b0: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x1920B0u;
    {
        const bool branch_taken_0x1920b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1920b0) {
            ctx->pc = 0x192224u;
            goto label_192224;
        }
    }
    ctx->pc = 0x1920B8u;
    // 0x1920b8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1920b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1920bc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1920bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1920c0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x1920c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x1920c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1920c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1920c8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1920c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1920cc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1920ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1920d0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1920d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1920d4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1920d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1920d8: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x1920d8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1920dc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1920DCu;
    {
        const bool branch_taken_0x1920dc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1920dc) {
            ctx->pc = 0x1920ECu;
            goto label_1920ec;
        }
    }
    ctx->pc = 0x1920E4u;
    // 0x1920e4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1920e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1920e8: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x1920e8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_1920ec:
    // 0x1920ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1920ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1920f0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x1920f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1920f4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1920f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1920f8: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x1920f8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x1920fc: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x1920FCu;
    {
        const bool branch_taken_0x1920fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1920fc) {
            ctx->pc = 0x19219Cu;
            goto label_19219c;
        }
    }
    ctx->pc = 0x192104u;
    // 0x192104: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x192104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192108: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x192108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19210c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192110: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192110u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192114: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x192114u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x192118: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x192118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19211c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x19211cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x192120: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x192120u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x192124: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x192124u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x192128: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x192128u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x19212c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x19212cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x192130: 0xc0648dc  jal         func_192370
    ctx->pc = 0x192130u;
    SET_GPR_U32(ctx, 31, 0x192138u);
    ctx->pc = 0x192370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192370u, 0x192130u, 0x192138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192138u;
label_192138:
    // 0x192138: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x192138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19213c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x19213cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192140: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192140u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192144: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x192144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x192148: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19214c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x19214cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x192150: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x192150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192154: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x192154u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x192158: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x192158u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x19215c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x19215cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x192160: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x192160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192164: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x192164u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192168: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x192168u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x19216c: 0xc0648cc  jal         func_192330
    ctx->pc = 0x19216Cu;
    SET_GPR_U32(ctx, 31, 0x192174u);
    ctx->pc = 0x192330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192330u, 0x19216Cu, 0x192174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192174u;
label_192174:
    // 0x192174: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x192174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x192178: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x192178u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x19217c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x19217cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192180: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x192180u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192184: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x192184u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192188: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x192188u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x19218c: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x19218Cu;
    SET_GPR_U32(ctx, 31, 0x192194u);
    ctx->pc = 0x1922E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1922E0u, 0x19218Cu, 0x192194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192194u;
label_192194:
    // 0x192194: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x192194u;
    {
        const bool branch_taken_0x192194 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x192194) {
            ctx->pc = 0x192248u;
            goto label_192248;
        }
    }
    ctx->pc = 0x19219Cu;
label_19219c:
    // 0x19219c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x19219cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1921a0: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1921a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1921a4: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x1921a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1921a8: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x1921a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1921ac: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x1921acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x1921b0: 0xc064898  jal         func_192260
    ctx->pc = 0x1921B0u;
    SET_GPR_U32(ctx, 31, 0x1921B8u);
    ctx->pc = 0x192260u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192260u, 0x1921B0u, 0x1921B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921B8u;
label_1921b8:
    // 0x1921b8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x1921b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x1921bc: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x1921bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x1921c0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x1921c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1921c4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1921c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1921c8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x1921c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x1921cc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1921ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1921d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1921d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x1921d4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x1921d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1921d8: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x1921d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x1921dc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1921dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1921e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1921e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1921e4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x1921e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1921e8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x1921e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x1921ec: 0xc0648dc  jal         func_192370
    ctx->pc = 0x1921ECu;
    SET_GPR_U32(ctx, 31, 0x1921F4u);
    ctx->pc = 0x192370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x192370u, 0x1921ECu, 0x1921F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1921F4u;
label_1921f4:
    // 0x1921f4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x1921f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1921f8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x1921f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x1921fc: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x1921fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x192200: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x192200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x192204: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x192204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x192208: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x192208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x19220c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x19220cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192210: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x192210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x192214: 0xc0648b8  jal         func_1922E0
    ctx->pc = 0x192214u;
    SET_GPR_U32(ctx, 31, 0x19221Cu);
    ctx->pc = 0x1922E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1922E0u, 0x192214u, 0x19221Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19221Cu;
label_19221c:
    // 0x19221c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x19221Cu;
    {
        const bool branch_taken_0x19221c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19221c) {
            ctx->pc = 0x192248u;
            goto label_192248;
        }
    }
    ctx->pc = 0x192224u;
label_192224:
    // 0x192224: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x192224u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x192228: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x192228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x19222c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x19222cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x192230: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x192230u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x192234: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x192234u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x192238: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x192238u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x19223c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x19223cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x192240: 0xc044504  jal         func_111410
    ctx->pc = 0x192240u;
    SET_GPR_U32(ctx, 31, 0x192248u);
    ctx->pc = 0x111410u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x111410u, 0x192240u, 0x192248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x192248u;
label_192248:
    // 0x192248: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x192248u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19224c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19224cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x192250: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x192250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x192254: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x192254u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x192258: 0x3e00008  jr          $ra
    ctx->pc = 0x192258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x192258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x192260u;
}
