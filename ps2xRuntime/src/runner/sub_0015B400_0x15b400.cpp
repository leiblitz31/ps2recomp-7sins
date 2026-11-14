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

// Function: sub_0015B400
// Address: 0x15b400 - 0x15b610
void sub_0015B400_0x15b400(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B400_0x15b400");
#endif

    switch (ctx->pc) {
        case 0x15b4e8u: goto label_15b4e8;
        case 0x15b524u: goto label_15b524;
        case 0x15b544u: goto label_15b544;
        case 0x15b568u: goto label_15b568;
        case 0x15b5a4u: goto label_15b5a4;
        case 0x15b5ccu: goto label_15b5cc;
        case 0x15b5f8u: goto label_15b5f8;
        default: break;
    }

    ctx->pc = 0x15b400u;

    // 0x15b400: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15b400u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15b404: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x15b404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15b408: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15b408u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15b40c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15b40cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15b410: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x15b410u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x15b414: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x15b414u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x15b418: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x15b418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x15b41c: 0xafa70080  sw          $a3, 0x80($sp)
    ctx->pc = 0x15b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 7));
    // 0x15b420: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x15b420u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b424: 0x10600074  beqz        $v1, . + 4 + (0x74 << 2)
    ctx->pc = 0x15B424u;
    {
        const bool branch_taken_0x15b424 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b424) {
            ctx->pc = 0x15B5F8u;
            goto label_15b5f8;
        }
    }
    ctx->pc = 0x15B42Cu;
    // 0x15b42c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15b42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b430: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x15b430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x15b434: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15b434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b438: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x15b438u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b43c: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x15b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b440: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15b440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15b444: 0x41883  sra         $v1, $a0, 2
    ctx->pc = 0x15b444u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 4), 2));
    // 0x15b448: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B448u;
    {
        const bool branch_taken_0x15b448 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x15b448) {
            ctx->pc = 0x15B458u;
            goto label_15b458;
        }
    }
    ctx->pc = 0x15B450u;
    // 0x15b450: 0x24820003  addiu       $v0, $a0, 0x3
    ctx->pc = 0x15b450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3));
    // 0x15b454: 0x21883  sra         $v1, $v0, 2
    ctx->pc = 0x15b454u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 2));
label_15b458:
    // 0x15b458: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b45c: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x15b45cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x15b460: 0x1440005c  bnez        $v0, . + 4 + (0x5C << 2)
    ctx->pc = 0x15B460u;
    {
        const bool branch_taken_0x15b460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b460) {
            ctx->pc = 0x15B5D4u;
            goto label_15b5d4;
        }
    }
    ctx->pc = 0x15B468u;
    // 0x15b468: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x15b468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b46c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x15b46cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x15b470: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x15b470u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x15b474: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15b474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b478: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b47c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x15b47cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b480: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x15b480u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b484: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x15b484u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15b488: 0x38883  sra         $s1, $v1, 2
    ctx->pc = 0x15b488u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 3), 2));
    // 0x15b48c: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B48Cu;
    {
        const bool branch_taken_0x15b48c = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x15b48c) {
            ctx->pc = 0x15B49Cu;
            goto label_15b49c;
        }
    }
    ctx->pc = 0x15B494u;
    // 0x15b494: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x15b494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x15b498: 0x28883  sra         $s1, $v0, 2
    ctx->pc = 0x15b498u;
    SET_GPR_S32(ctx, 17, SRA32(GPR_S32(ctx, 2), 2));
label_15b49c:
    // 0x15b49c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15b49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b4a0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x15b4a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b4a4: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b4a8: 0x51082b  sltu        $at, $v0, $s1
    ctx->pc = 0x15b4a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
    // 0x15b4ac: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x15B4ACu;
    {
        const bool branch_taken_0x15b4ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b4ac) {
            ctx->pc = 0x15B54Cu;
            goto label_15b54c;
        }
    }
    ctx->pc = 0x15B4B4u;
    // 0x15b4b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b4b8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x15b4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b4bc: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b4c0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15b4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15b4c4: 0x622023  subu        $a0, $v1, $v0
    ctx->pc = 0x15b4c4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x15b4c8: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15b4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b4cc: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15b4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b4d0: 0xa3a00048  sb          $zero, 0x48($sp)
    ctx->pc = 0x15b4d0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 72), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b4d4: 0x8c650004  lw          $a1, 0x4($v1)
    ctx->pc = 0x15b4d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15b4d8: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x15b4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b4dc: 0x27a70048  addiu       $a3, $sp, 0x48
    ctx->pc = 0x15b4dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x15b4e0: 0xc056dc8  jal         func_15B720
    ctx->pc = 0x15B4E0u;
    SET_GPR_U32(ctx, 31, 0x15B4E8u);
    ctx->pc = 0x15B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B720u, 0x15B4E0u, 0x15B4E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B4E8u;
label_15b4e8:
    // 0x15b4e8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x15b4e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b4ec: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b4f0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15b4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15b4f4: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15b4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b4f8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b4f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b4fc: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x15b4fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x15b500: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b504: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x15b504u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15b508: 0x2022823  subu        $a1, $s0, $v0
    ctx->pc = 0x15b508u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x15b50c: 0xa3a00044  sb          $zero, 0x44($sp)
    ctx->pc = 0x15b50cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 68), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b510: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x15b510u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b514: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15b514u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b518: 0x27a70044  addiu       $a3, $sp, 0x44
    ctx->pc = 0x15b518u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 68));
    // 0x15b51c: 0xc056db8  jal         func_15B6E0
    ctx->pc = 0x15B51Cu;
    SET_GPR_U32(ctx, 31, 0x15B524u);
    ctx->pc = 0x15B6E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B6E0u, 0x15B51Cu, 0x15B524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B524u;
label_15b524:
    // 0x15b524: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b528: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x15b528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15b52c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x15b52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b530: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x15b530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b534: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x15b534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b538: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x15b538u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15b53c: 0xc056da4  jal         func_15B690
    ctx->pc = 0x15B53Cu;
    SET_GPR_U32(ctx, 31, 0x15B544u);
    ctx->pc = 0x15B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B690u, 0x15B53Cu, 0x15B544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B544u;
label_15b544:
    // 0x15b544: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x15B544u;
    {
        const bool branch_taken_0x15b544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b544) {
            ctx->pc = 0x15B5F8u;
            goto label_15b5f8;
        }
    }
    ctx->pc = 0x15B54Cu;
label_15b54c:
    // 0x15b54c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15b54cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b550: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b550u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b554: 0x512823  subu        $a1, $v0, $s1
    ctx->pc = 0x15b554u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15b558: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x15b558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15b55c: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x15b55cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15b560: 0xc056d84  jal         func_15B610
    ctx->pc = 0x15B560u;
    SET_GPR_U32(ctx, 31, 0x15B568u);
    ctx->pc = 0x15B610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B610u, 0x15B560u, 0x15B568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B568u;
label_15b568:
    // 0x15b568: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x15b568u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b56c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x15b56cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x15b570: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x15b570u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x15b574: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x15b574u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b578: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x15b578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x15b57c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x15b57cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x15b580: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x15b580u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x15b584: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x15b584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b588: 0xa3a00040  sb          $zero, 0x40($sp)
    ctx->pc = 0x15b588u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b58c: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x15b58cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b590: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b590u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b594: 0x8c460004  lw          $a2, 0x4($v0)
    ctx->pc = 0x15b594u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x15b598: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x15b598u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x15b59c: 0xc056dc8  jal         func_15B720
    ctx->pc = 0x15B59Cu;
    SET_GPR_U32(ctx, 31, 0x15B5A4u);
    ctx->pc = 0x15B720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B720u, 0x15B59Cu, 0x15B5A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5A4u;
label_15b5a4:
    // 0x15b5a4: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x15b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b5a8: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x15b5a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x15b5ac: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x15b5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x15b5b0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x15b5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15b5b4: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x15b5b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x15b5b8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x15b5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b5bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15b5bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5c0: 0x27a6004c  addiu       $a2, $sp, 0x4C
    ctx->pc = 0x15b5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x15b5c4: 0xc056da4  jal         func_15B690
    ctx->pc = 0x15B5C4u;
    SET_GPR_U32(ctx, 31, 0x15B5CCu);
    ctx->pc = 0x15B690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15B690u, 0x15B5C4u, 0x15B5CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5CCu;
label_15b5cc:
    // 0x15b5cc: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x15B5CCu;
    {
        const bool branch_taken_0x15b5cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b5cc) {
            ctx->pc = 0x15B5F8u;
            goto label_15b5f8;
        }
    }
    ctx->pc = 0x15B5D4u;
label_15b5d4:
    // 0x15b5d4: 0xa3a0003c  sb          $zero, 0x3C($sp)
    ctx->pc = 0x15b5d4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 60), (uint8_t)GPR_U32(ctx, 0));
    // 0x15b5d8: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x15b5d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15b5dc: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x15b5dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15b5e0: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x15b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15b5e4: 0x27a7003c  addiu       $a3, $sp, 0x3C
    ctx->pc = 0x15b5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x15b5e8: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x15b5e8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15b5ec: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x15b5ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b5f0: 0xc056170  jal         func_1585C0
    ctx->pc = 0x15B5F0u;
    SET_GPR_U32(ctx, 31, 0x15B5F8u);
    ctx->pc = 0x1585C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1585C0u, 0x15B5F0u, 0x15B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B5F8u;
label_15b5f8:
    // 0x15b5f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15b5f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15b5fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15b5fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15b600: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15b600u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15b604: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x15b604u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x15b608: 0x3e00008  jr          $ra
    ctx->pc = 0x15B608u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15B608u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15B610u;
}
