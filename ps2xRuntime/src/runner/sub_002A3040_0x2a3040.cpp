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

// Function: sub_002A3040
// Address: 0x2a3040 - 0x2a3250
void sub_002A3040_0x2a3040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3040_0x2a3040");
#endif

    switch (ctx->pc) {
        case 0x2a3128u: goto label_2a3128;
        case 0x2a3164u: goto label_2a3164;
        case 0x2a3184u: goto label_2a3184;
        case 0x2a31a8u: goto label_2a31a8;
        case 0x2a31e4u: goto label_2a31e4;
        case 0x2a320cu: goto label_2a320c;
        case 0x2a3238u: goto label_2a3238;
        default: break;
    }

    ctx->pc = 0x2a3040u;

    // 0x2a3040: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a3040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a3044: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a3044u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a3048: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a3048u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a304c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a304cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a3050: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2a3050u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2a3054: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2a3054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2a3058: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2a3058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2a305c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x2a305cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x2a3060: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2a3060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3064: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x2A3064u;
    {
        const bool branch_taken_0x2a3064 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3064) {
            ctx->pc = 0x2A3238u;
            goto label_2a3238;
        }
    }
    ctx->pc = 0x2A306Cu;
    // 0x2a306c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a306cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3070: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2a3070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2a3074: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a3074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3078: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2a3078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a307c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2a307cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3080: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a3080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a3084: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x2a3084u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x2a3088: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A3088u;
    {
        const bool branch_taken_0x2a3088 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x2a3088) {
            ctx->pc = 0x2A3098u;
            goto label_2a3098;
        }
    }
    ctx->pc = 0x2A3090u;
    // 0x2a3090: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x2a3090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x2a3094: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x2a3094u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_2a3098:
    // 0x2a3098: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a3098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a309c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x2a309cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a30a0: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2A30A0u;
    {
        const bool branch_taken_0x2a30a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a30a0) {
            ctx->pc = 0x2A3214u;
            goto label_2a3214;
        }
    }
    ctx->pc = 0x2A30A8u;
    // 0x2a30a8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x2a30a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a30ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2a30acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a30b0: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2a30b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2a30b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a30b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a30b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2a30b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a30bc: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a30bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a30c0: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2a30c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a30c4: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2a30c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2a30c8: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x2a30c8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2a30cc: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A30CCu;
    {
        const bool branch_taken_0x2a30cc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2a30cc) {
            ctx->pc = 0x2A30DCu;
            goto label_2a30dc;
        }
    }
    ctx->pc = 0x2A30D4u;
    // 0x2a30d4: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2a30d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2a30d8: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x2a30d8u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_2a30dc:
    // 0x2a30dc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a30dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a30e0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2a30e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a30e4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a30e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a30e8: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x2a30e8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x2a30ec: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x2A30ECu;
    {
        const bool branch_taken_0x2a30ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a30ec) {
            ctx->pc = 0x2A318Cu;
            goto label_2a318c;
        }
    }
    ctx->pc = 0x2A30F4u;
    // 0x2a30f4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a30f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a30f8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2a30f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a30fc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a30fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3100: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a3100u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3104: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x2a3104u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2a3108: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a3108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a310c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a310cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3110: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x2a3110u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3114: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x2a3114u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a3118: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2a3118u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a311c: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x2a311cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x2a3120: 0xc04257c  jal         func_1095F0
    ctx->pc = 0x2A3120u;
    SET_GPR_U32(ctx, 31, 0x2A3128u);
    ctx->pc = 0x1095F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095F0u, 0x2A3120u, 0x2A3128u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3128u;
label_2a3128:
    // 0x2a3128: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a3128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a312c: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a312cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3130: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a3130u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3134: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a3134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a3138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a313c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2a313cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2a3140: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a3140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3144: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2a3144u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a3148: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x2a3148u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2a314c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x2a314cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3150: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a3150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3154: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2a3154u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3158: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x2a3158u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x2a315c: 0xc0a8cc8  jal         func_2A3320
    ctx->pc = 0x2A315Cu;
    SET_GPR_U32(ctx, 31, 0x2A3164u);
    ctx->pc = 0x2A3320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3320u, 0x2A315Cu, 0x2A3164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3164u;
label_2a3164:
    // 0x2a3164: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a3164u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3168: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2a3168u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a316c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2a316cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3170: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x2a3170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a3174: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a3174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3178: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2a3178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2a317c: 0xc0a8cb4  jal         func_2A32D0
    ctx->pc = 0x2A317Cu;
    SET_GPR_U32(ctx, 31, 0x2A3184u);
    ctx->pc = 0x2A32D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A32D0u, 0x2A317Cu, 0x2A3184u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3184u;
label_2a3184:
    // 0x2a3184: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x2A3184u;
    {
        const bool branch_taken_0x2a3184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3184) {
            ctx->pc = 0x2A3238u;
            goto label_2a3238;
        }
    }
    ctx->pc = 0x2A318Cu;
label_2a318c:
    // 0x2a318c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a318cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a3190: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a3194: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x2a3194u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a3198: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x2a3198u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a319c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2a319cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2a31a0: 0xc0a8c94  jal         func_2A3250
    ctx->pc = 0x2A31A0u;
    SET_GPR_U32(ctx, 31, 0x2A31A8u);
    ctx->pc = 0x2A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3250u, 0x2A31A0u, 0x2A31A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31A8u;
label_2a31a8:
    // 0x2a31a8: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2a31a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a31ac: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2a31acu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x2a31b0: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x2a31b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x2a31b4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2a31b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a31b8: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2a31b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x2a31bc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2a31bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2a31c0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x2a31c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x2a31c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2a31c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a31c8: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x2a31c8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a31cc: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a31ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a31d0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a31d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a31d4: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x2a31d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2a31d8: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x2a31d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x2a31dc: 0xc04257c  jal         func_1095F0
    ctx->pc = 0x2A31DCu;
    SET_GPR_U32(ctx, 31, 0x2A31E4u);
    ctx->pc = 0x1095F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1095F0u, 0x2A31DCu, 0x2A31E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A31E4u;
label_2a31e4:
    // 0x2a31e4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a31e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a31e8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2a31e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x2a31ec: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2a31ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2a31f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a31f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2a31f4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x2a31f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x2a31f8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2a31f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a31fc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a31fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3200: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x2a3200u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2a3204: 0xc0a8cb4  jal         func_2A32D0
    ctx->pc = 0x2A3204u;
    SET_GPR_U32(ctx, 31, 0x2A320Cu);
    ctx->pc = 0x2A32D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A32D0u, 0x2A3204u, 0x2A320Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A320Cu;
label_2a320c:
    // 0x2a320c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x2A320Cu;
    {
        const bool branch_taken_0x2a320c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a320c) {
            ctx->pc = 0x2A3238u;
            goto label_2a3238;
        }
    }
    ctx->pc = 0x2A3214u;
label_2a3214:
    // 0x2a3214: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x2a3214u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x2a3218: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2a3218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a321c: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2a321cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a3220: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x2a3220u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a3224: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x2a3224u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x2a3228: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x2a3228u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a322c: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2a322cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a3230: 0xc0418a0  jal         func_106280
    ctx->pc = 0x2A3230u;
    SET_GPR_U32(ctx, 31, 0x2A3238u);
    ctx->pc = 0x106280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106280u, 0x2A3230u, 0x2A3238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2A3238u;
label_2a3238:
    // 0x2a3238: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a3238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a323c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a323cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a3240: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a3240u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a3244: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2a3244u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2a3248: 0x3e00008  jr          $ra
    ctx->pc = 0x2A3248u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A3248u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A3250u;
}
