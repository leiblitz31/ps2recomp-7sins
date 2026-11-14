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

// Function: sub_00191150
// Address: 0x191150 - 0x191360
void sub_00191150_0x191150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191150_0x191150");
#endif

    switch (ctx->pc) {
        case 0x1911c0u: goto label_1911c0;
        case 0x1911d0u: goto label_1911d0;
        case 0x1911e8u: goto label_1911e8;
        case 0x191200u: goto label_191200;
        case 0x191210u: goto label_191210;
        case 0x191230u: goto label_191230;
        case 0x191240u: goto label_191240;
        case 0x191258u: goto label_191258;
        case 0x191270u: goto label_191270;
        case 0x19128cu: goto label_19128c;
        case 0x19129cu: goto label_19129c;
        case 0x1912acu: goto label_1912ac;
        case 0x1912c4u: goto label_1912c4;
        case 0x1912d4u: goto label_1912d4;
        case 0x1912e4u: goto label_1912e4;
        case 0x1912f4u: goto label_1912f4;
        case 0x191310u: goto label_191310;
        case 0x191330u: goto label_191330;
        default: break;
    }

    ctx->pc = 0x191150u;

    // 0x191150: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x191150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x191154: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x191154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x191158: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x191158u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x19115c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x19115cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x191160: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x191164: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x191164u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x191168: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x191168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19116c: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x19116cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x191170: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x191170u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x191174: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x191174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x191178: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x191178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x19117c: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x19117cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x191180: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x191180u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x191184: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x191184u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x191188: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x191188u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x19118c: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x19118cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x191190: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x191190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191194: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191194u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191198: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x191198u;
    {
        const bool branch_taken_0x191198 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x191198) {
            ctx->pc = 0x1911F0u;
            goto label_1911f0;
        }
    }
    ctx->pc = 0x1911A0u;
    // 0x1911a0: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x1911A0u;
    {
        const bool branch_taken_0x1911a0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x1911a0) {
            ctx->pc = 0x19127Cu;
            goto label_19127c;
        }
    }
    ctx->pc = 0x1911A8u;
    // 0x1911a8: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x1911A8u;
    {
        const bool branch_taken_0x1911a8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x1911a8) {
            ctx->pc = 0x1911F0u;
            goto label_1911f0;
        }
    }
    ctx->pc = 0x1911B0u;
    // 0x1911b0: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x1911b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x1911b4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1911b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1911b8: 0xc064428  jal         func_1910A0
    ctx->pc = 0x1911B8u;
    SET_GPR_U32(ctx, 31, 0x1911C0u);
    ctx->pc = 0x1910A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1910A0u, 0x1911B8u, 0x1911C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911C0u;
label_1911c0:
    // 0x1911c0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1911c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911c4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1911c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911c8: 0xc064418  jal         func_191060
    ctx->pc = 0x1911C8u;
    SET_GPR_U32(ctx, 31, 0x1911D0u);
    ctx->pc = 0x191060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191060u, 0x1911C8u, 0x1911D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911D0u;
label_1911d0:
    // 0x1911d0: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x1911d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1911d4: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x1911d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x1911d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x1911d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911dc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1911dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1911e0: 0xc06440c  jal         func_191030
    ctx->pc = 0x1911E0u;
    SET_GPR_U32(ctx, 31, 0x1911E8u);
    ctx->pc = 0x191030u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191030u, 0x1911E0u, 0x1911E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1911E8u;
label_1911e8:
    // 0x1911e8: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x1911E8u;
    {
        const bool branch_taken_0x1911e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1911e8) {
            ctx->pc = 0x19127Cu;
            goto label_19127c;
        }
    }
    ctx->pc = 0x1911F0u;
label_1911f0:
    // 0x1911f0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1911f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1911f4: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x1911f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x1911f8: 0xc0644e0  jal         func_191380
    ctx->pc = 0x1911F8u;
    SET_GPR_U32(ctx, 31, 0x191200u);
    ctx->pc = 0x191380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191380u, 0x1911F8u, 0x191200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191200u;
label_191200:
    // 0x191200: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x191200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191204: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191208: 0xc064404  jal         func_191010
    ctx->pc = 0x191208u;
    SET_GPR_U32(ctx, 31, 0x191210u);
    ctx->pc = 0x191010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191010u, 0x191208u, 0x191210u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191210u;
label_191210:
    // 0x191210: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x191210u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x191214: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x191214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191218: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19121c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x19121Cu;
    {
        const bool branch_taken_0x19121c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19121c) {
            ctx->pc = 0x19124Cu;
            goto label_19124c;
        }
    }
    ctx->pc = 0x191224u;
    // 0x191224: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x191224u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191228: 0xc06412c  jal         func_1904B0
    ctx->pc = 0x191228u;
    SET_GPR_U32(ctx, 31, 0x191230u);
    ctx->pc = 0x1904B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1904B0u, 0x191228u, 0x191230u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191230u;
label_191230:
    // 0x191230: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x191230u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x191234: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x191234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191238: 0xc06411c  jal         func_190470
    ctx->pc = 0x191238u;
    SET_GPR_U32(ctx, 31, 0x191240u);
    ctx->pc = 0x190470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190470u, 0x191238u, 0x191240u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191240u;
label_191240:
    // 0x191240: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x191240u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x191244: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x191244u;
    {
        const bool branch_taken_0x191244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191244) {
            ctx->pc = 0x1912C8u;
            goto label_1912c8;
        }
    }
    ctx->pc = 0x19124Cu;
label_19124c:
    // 0x19124c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19124cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191250: 0xc064124  jal         func_190490
    ctx->pc = 0x191250u;
    SET_GPR_U32(ctx, 31, 0x191258u);
    ctx->pc = 0x190490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190490u, 0x191250u, 0x191258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191258u;
label_191258:
    // 0x191258: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x191258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19125c: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x19125Cu;
    {
        const bool branch_taken_0x19125c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x19125c) {
            ctx->pc = 0x1912C8u;
            goto label_1912c8;
        }
    }
    ctx->pc = 0x191264u;
    // 0x191264: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x191264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191268: 0xc064124  jal         func_190490
    ctx->pc = 0x191268u;
    SET_GPR_U32(ctx, 31, 0x191270u);
    ctx->pc = 0x190490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190490u, 0x191268u, 0x191270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191270u;
label_191270:
    // 0x191270: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x191270u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x191274: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x191274u;
    {
        const bool branch_taken_0x191274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x191274) {
            ctx->pc = 0x1912C8u;
            goto label_1912c8;
        }
    }
    ctx->pc = 0x19127Cu;
label_19127c:
    // 0x19127c: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x19127cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191280: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x191280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x191284: 0xc0644e0  jal         func_191380
    ctx->pc = 0x191284u;
    SET_GPR_U32(ctx, 31, 0x19128Cu);
    ctx->pc = 0x191380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191380u, 0x191284u, 0x19128Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19128Cu;
label_19128c:
    // 0x19128c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x19128cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191290: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x191290u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191294: 0xc0643fc  jal         func_190FF0
    ctx->pc = 0x191294u;
    SET_GPR_U32(ctx, 31, 0x19129Cu);
    ctx->pc = 0x190FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190FF0u, 0x191294u, 0x19129Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19129Cu;
label_19129c:
    // 0x19129c: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x19129cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x1912a0: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1912a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1912a4: 0xc06411c  jal         func_190470
    ctx->pc = 0x1912A4u;
    SET_GPR_U32(ctx, 31, 0x1912ACu);
    ctx->pc = 0x190470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190470u, 0x1912A4u, 0x1912ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912ACu;
label_1912ac:
    // 0x1912ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1912acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1912b0: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1912B0u;
    {
        const bool branch_taken_0x1912b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x1912b0) {
            ctx->pc = 0x1912C8u;
            goto label_1912c8;
        }
    }
    ctx->pc = 0x1912B8u;
    // 0x1912b8: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x1912b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1912bc: 0xc06411c  jal         func_190470
    ctx->pc = 0x1912BCu;
    SET_GPR_U32(ctx, 31, 0x1912C4u);
    ctx->pc = 0x190470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190470u, 0x1912BCu, 0x1912C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912C4u;
label_1912c4:
    // 0x1912c4: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x1912c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_1912c8:
    // 0x1912c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1912c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912cc: 0xc0644d8  jal         func_191360
    ctx->pc = 0x1912CCu;
    SET_GPR_U32(ctx, 31, 0x1912D4u);
    ctx->pc = 0x191360u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191360u, 0x1912CCu, 0x1912D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912D4u;
label_1912d4:
    // 0x1912d4: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x1912d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x1912d8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1912d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912dc: 0xc064404  jal         func_191010
    ctx->pc = 0x1912DCu;
    SET_GPR_U32(ctx, 31, 0x1912E4u);
    ctx->pc = 0x191010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x191010u, 0x1912DCu, 0x1912E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912E4u;
label_1912e4:
    // 0x1912e4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1912e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1912e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1912e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1912ec: 0xc0643fc  jal         func_190FF0
    ctx->pc = 0x1912ECu;
    SET_GPR_U32(ctx, 31, 0x1912F4u);
    ctx->pc = 0x190FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190FF0u, 0x1912ECu, 0x1912F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1912F4u;
label_1912f4:
    // 0x1912f4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1912f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x1912f8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x1912f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1912fc: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1912fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x191300: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x191300u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191304: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x191304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x191308: 0xc042858  jal         func_10A160
    ctx->pc = 0x191308u;
    SET_GPR_U32(ctx, 31, 0x191310u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x191308u, 0x191310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191310u;
label_191310:
    // 0x191310: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x191310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x191314: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x191314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x191318: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x191318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19131c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x19131cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x191320: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x191320u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x191324: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x191324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191328: 0xc0643f0  jal         func_190FC0
    ctx->pc = 0x191328u;
    SET_GPR_U32(ctx, 31, 0x191330u);
    ctx->pc = 0x190FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x190FC0u, 0x191328u, 0x191330u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x191330u;
label_191330:
    // 0x191330: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x191330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x191334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x191334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x191338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x191338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x19133c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19133cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x191340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x191344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x191348: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x191348u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x19134c: 0x3e00008  jr          $ra
    ctx->pc = 0x19134Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19134Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191354u;
    // 0x191354: 0x0  nop
    ctx->pc = 0x191354u;
    // NOP
    // 0x191358: 0x0  nop
    ctx->pc = 0x191358u;
    // NOP
    // 0x19135c: 0x0  nop
    ctx->pc = 0x19135cu;
    // NOP
    ctx->pc = 0x191360u;
}
