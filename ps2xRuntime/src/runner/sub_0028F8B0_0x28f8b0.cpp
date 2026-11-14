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

// Function: sub_0028F8B0
// Address: 0x28f8b0 - 0x28fac0
void sub_0028F8B0_0x28f8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028F8B0_0x28f8b0");
#endif

    switch (ctx->pc) {
        case 0x28f920u: goto label_28f920;
        case 0x28f930u: goto label_28f930;
        case 0x28f948u: goto label_28f948;
        case 0x28f960u: goto label_28f960;
        case 0x28f970u: goto label_28f970;
        case 0x28f990u: goto label_28f990;
        case 0x28f9a0u: goto label_28f9a0;
        case 0x28f9b8u: goto label_28f9b8;
        case 0x28f9d0u: goto label_28f9d0;
        case 0x28f9ecu: goto label_28f9ec;
        case 0x28f9fcu: goto label_28f9fc;
        case 0x28fa0cu: goto label_28fa0c;
        case 0x28fa24u: goto label_28fa24;
        case 0x28fa34u: goto label_28fa34;
        case 0x28fa44u: goto label_28fa44;
        case 0x28fa54u: goto label_28fa54;
        case 0x28fa70u: goto label_28fa70;
        case 0x28fa90u: goto label_28fa90;
        default: break;
    }

    ctx->pc = 0x28f8b0u;

    // 0x28f8b0: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x28f8b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x28f8b4: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28f8b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28f8b8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28f8b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28f8bc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28f8bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x28f8c0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28f8c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x28f8c4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x28f8c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x28f8c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28f8c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28f8cc: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x28f8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x28f8d0: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x28f8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x28f8d4: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x28f8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x28f8d8: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x28f8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
    // 0x28f8dc: 0xafa800b0  sw          $t0, 0xB0($sp)
    ctx->pc = 0x28f8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 8));
    // 0x28f8e0: 0xafa900c0  sw          $t1, 0xC0($sp)
    ctx->pc = 0x28f8e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 9));
    // 0x28f8e4: 0x8fb300c0  lw          $s3, 0xC0($sp)
    ctx->pc = 0x28f8e4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x28f8e8: 0x8fb20090  lw          $s2, 0x90($sp)
    ctx->pc = 0x28f8e8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28f8ec: 0x8fb100a0  lw          $s1, 0xA0($sp)
    ctx->pc = 0x28f8ecu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x28f8f0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28f8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f8f4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28f8f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f8f8: 0x12220015  beq         $s1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x28F8F8u;
    {
        const bool branch_taken_0x28f8f8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x28f8f8) {
            ctx->pc = 0x28F950u;
            goto label_28f950;
        }
    }
    ctx->pc = 0x28F900u;
    // 0x28f900: 0x16600036  bnez        $s3, . + 4 + (0x36 << 2)
    ctx->pc = 0x28F900u;
    {
        const bool branch_taken_0x28f900 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f900) {
            ctx->pc = 0x28F9DCu;
            goto label_28f9dc;
        }
    }
    ctx->pc = 0x28F908u;
    // 0x28f908: 0x16400011  bnez        $s2, . + 4 + (0x11 << 2)
    ctx->pc = 0x28F908u;
    {
        const bool branch_taken_0x28f908 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28f908) {
            ctx->pc = 0x28F950u;
            goto label_28f950;
        }
    }
    ctx->pc = 0x28F910u;
    // 0x28f910: 0x27a4006c  addiu       $a0, $sp, 0x6C
    ctx->pc = 0x28f910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x28f914: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28f914u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28f918: 0xc0a3b40  jal         func_28ED00
    ctx->pc = 0x28F918u;
    SET_GPR_U32(ctx, 31, 0x28F920u);
    ctx->pc = 0x28ED00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ED00u, 0x28F918u, 0x28F920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F920u;
label_28f920:
    // 0x28f920: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28f920u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f924: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f924u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f928: 0xc0a3b30  jal         func_28ECC0
    ctx->pc = 0x28F928u;
    SET_GPR_U32(ctx, 31, 0x28F930u);
    ctx->pc = 0x28ECC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28ECC0u, 0x28F928u, 0x28F930u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F930u;
label_28f930:
    // 0x28f930: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28f930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f934: 0x24640008  addiu       $a0, $v1, 0x8
    ctx->pc = 0x28f934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x28f938: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x28f938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f93c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28f93cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f940: 0xc0a3b10  jal         func_28EC40
    ctx->pc = 0x28F940u;
    SET_GPR_U32(ctx, 31, 0x28F948u);
    ctx->pc = 0x28EC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC40u, 0x28F940u, 0x28F948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F948u;
label_28f948:
    // 0x28f948: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x28F948u;
    {
        const bool branch_taken_0x28f948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f948) {
            ctx->pc = 0x28F9DCu;
            goto label_28f9dc;
        }
    }
    ctx->pc = 0x28F950u;
label_28f950:
    // 0x28f950: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f954: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28f954u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28f958: 0xc0a3eb8  jal         func_28FAE0
    ctx->pc = 0x28F958u;
    SET_GPR_U32(ctx, 31, 0x28F960u);
    ctx->pc = 0x28FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE0u, 0x28F958u, 0x28F960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F960u;
label_28f960:
    // 0x28f960: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f960u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f964: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f968: 0xc0a3b08  jal         func_28EC20
    ctx->pc = 0x28F968u;
    SET_GPR_U32(ctx, 31, 0x28F970u);
    ctx->pc = 0x28EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC20u, 0x28F968u, 0x28F970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F970u;
label_28f970:
    // 0x28f970: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28f970u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28f974: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28f974u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f978: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28f978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f97c: 0x1622000b  bne         $s1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x28F97Cu;
    {
        const bool branch_taken_0x28f97c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f97c) {
            ctx->pc = 0x28F9ACu;
            goto label_28f9ac;
        }
    }
    ctx->pc = 0x28F984u;
    // 0x28f984: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f988: 0xc0a1474  jal         func_2851D0
    ctx->pc = 0x28F988u;
    SET_GPR_U32(ctx, 31, 0x28F990u);
    ctx->pc = 0x2851D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851D0u, 0x28F988u, 0x28F990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F990u;
label_28f990:
    // 0x28f990: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28f990u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28f994: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f994u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f998: 0xc0a146c  jal         func_2851B0
    ctx->pc = 0x28F998u;
    SET_GPR_U32(ctx, 31, 0x28F9A0u);
    ctx->pc = 0x2851B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851B0u, 0x28F998u, 0x28F9A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9A0u;
label_28f9a0:
    // 0x28f9a0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28f9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28f9a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x28F9A4u;
    {
        const bool branch_taken_0x28f9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f9a4) {
            ctx->pc = 0x28FA28u;
            goto label_28fa28;
        }
    }
    ctx->pc = 0x28F9ACu;
label_28f9ac:
    // 0x28f9ac: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f9acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f9b0: 0xc0542f8  jal         func_150BE0
    ctx->pc = 0x28F9B0u;
    SET_GPR_U32(ctx, 31, 0x28F9B8u);
    ctx->pc = 0x150BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BE0u, 0x28F9B0u, 0x28F9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9B8u;
label_28f9b8:
    // 0x28f9b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28f9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28f9bc: 0x1622001a  bne         $s1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x28F9BCu;
    {
        const bool branch_taken_0x28f9bc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28f9bc) {
            ctx->pc = 0x28FA28u;
            goto label_28fa28;
        }
    }
    ctx->pc = 0x28F9C4u;
    // 0x28f9c4: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f9c8: 0xc0542f8  jal         func_150BE0
    ctx->pc = 0x28F9C8u;
    SET_GPR_U32(ctx, 31, 0x28F9D0u);
    ctx->pc = 0x150BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BE0u, 0x28F9C8u, 0x28F9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9D0u;
label_28f9d0:
    // 0x28f9d0: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28f9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28f9d4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x28F9D4u;
    {
        const bool branch_taken_0x28f9d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28f9d4) {
            ctx->pc = 0x28FA28u;
            goto label_28fa28;
        }
    }
    ctx->pc = 0x28F9DCu;
label_28f9dc:
    // 0x28f9dc: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28f9dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28f9e0: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x28f9e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x28f9e4: 0xc0a3eb8  jal         func_28FAE0
    ctx->pc = 0x28F9E4u;
    SET_GPR_U32(ctx, 31, 0x28F9ECu);
    ctx->pc = 0x28FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAE0u, 0x28F9E4u, 0x28F9ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9ECu;
label_28f9ec:
    // 0x28f9ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28f9ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9f0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28f9f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28f9f4: 0xc0a3b00  jal         func_28EC00
    ctx->pc = 0x28F9F4u;
    SET_GPR_U32(ctx, 31, 0x28F9FCu);
    ctx->pc = 0x28EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC00u, 0x28F9F4u, 0x28F9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28F9FCu;
label_28f9fc:
    // 0x28f9fc: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28f9fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
    // 0x28fa00: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fa00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fa04: 0xc0a146c  jal         func_2851B0
    ctx->pc = 0x28FA04u;
    SET_GPR_U32(ctx, 31, 0x28FA0Cu);
    ctx->pc = 0x2851B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851B0u, 0x28FA04u, 0x28FA0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA0Cu;
label_28fa0c:
    // 0x28fa0c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28fa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fa10: 0x16220005  bne         $s1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28FA10u;
    {
        const bool branch_taken_0x28fa10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x28fa10) {
            ctx->pc = 0x28FA28u;
            goto label_28fa28;
        }
    }
    ctx->pc = 0x28FA18u;
    // 0x28fa18: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x28fa18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fa1c: 0xc0a146c  jal         func_2851B0
    ctx->pc = 0x28FA1Cu;
    SET_GPR_U32(ctx, 31, 0x28FA24u);
    ctx->pc = 0x2851B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2851B0u, 0x28FA1Cu, 0x28FA24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA24u;
label_28fa24:
    // 0x28fa24: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x28fa24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 16));
label_28fa28:
    // 0x28fa28: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fa28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa2c: 0xc0a3eb0  jal         func_28FAC0
    ctx->pc = 0x28FA2Cu;
    SET_GPR_U32(ctx, 31, 0x28FA34u);
    ctx->pc = 0x28FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28FAC0u, 0x28FA2Cu, 0x28FA34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA34u;
label_28fa34:
    // 0x28fa34: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x28fa34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x28fa38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fa38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa3c: 0xc0a3b08  jal         func_28EC20
    ctx->pc = 0x28FA3Cu;
    SET_GPR_U32(ctx, 31, 0x28FA44u);
    ctx->pc = 0x28EC20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC20u, 0x28FA3Cu, 0x28FA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA44u;
label_28fa44:
    // 0x28fa44: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28fa44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28fa48: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa4c: 0xc0a3b00  jal         func_28EC00
    ctx->pc = 0x28FA4Cu;
    SET_GPR_U32(ctx, 31, 0x28FA54u);
    ctx->pc = 0x28EC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EC00u, 0x28FA4Cu, 0x28FA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA54u;
label_28fa54:
    // 0x28fa54: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28fa54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28fa58: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x28fa58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fa5c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x28fa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28fa60: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28fa60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa64: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x28fa64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x28fa68: 0xc042858  jal         func_10A160
    ctx->pc = 0x28FA68u;
    SET_GPR_U32(ctx, 31, 0x28FA70u);
    ctx->pc = 0x10A160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A160u, 0x28FA68u, 0x28FA70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA70u;
label_28fa70:
    // 0x28fa70: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x28fa70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28fa74: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x28fa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x28fa78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x28fa78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x28fa7c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x28fa7cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x28fa80: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x28fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28fa84: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28fa84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28fa88: 0xc0a3af4  jal         func_28EBD0
    ctx->pc = 0x28FA88u;
    SET_GPR_U32(ctx, 31, 0x28FA90u);
    ctx->pc = 0x28EBD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28EBD0u, 0x28FA88u, 0x28FA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28FA90u;
label_28fa90:
    // 0x28fa90: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28fa90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28fa94: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28fa94u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28fa98: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x28fa98u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28fa9c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x28fa9cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28faa0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x28faa0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28faa4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28faa4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28faa8: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x28faa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x28faac: 0x3e00008  jr          $ra
    ctx->pc = 0x28FAACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x28FAACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x28FAB4u;
    // 0x28fab4: 0x0  nop
    ctx->pc = 0x28fab4u;
    // NOP
    // 0x28fab8: 0x0  nop
    ctx->pc = 0x28fab8u;
    // NOP
    // 0x28fabc: 0x0  nop
    ctx->pc = 0x28fabcu;
    // NOP
    ctx->pc = 0x28fac0u;
}
