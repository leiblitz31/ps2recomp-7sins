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

// Function: sub_00286410
// Address: 0x286410 - 0x2866f0
void sub_00286410_0x286410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00286410_0x286410");
#endif

    switch (ctx->pc) {
        case 0x286470u: goto label_286470;
        case 0x286490u: goto label_286490;
        case 0x2864c4u: goto label_2864c4;
        case 0x2864d0u: goto label_2864d0;
        case 0x2864dcu: goto label_2864dc;
        case 0x2864f0u: goto label_2864f0;
        case 0x286508u: goto label_286508;
        case 0x28651cu: goto label_28651c;
        case 0x28654cu: goto label_28654c;
        case 0x286574u: goto label_286574;
        case 0x286588u: goto label_286588;
        case 0x2865a4u: goto label_2865a4;
        case 0x2865bcu: goto label_2865bc;
        case 0x2865ccu: goto label_2865cc;
        case 0x2865d8u: goto label_2865d8;
        case 0x2865f4u: goto label_2865f4;
        case 0x286600u: goto label_286600;
        case 0x286620u: goto label_286620;
        case 0x286640u: goto label_286640;
        case 0x286660u: goto label_286660;
        case 0x286694u: goto label_286694;
        case 0x2866a4u: goto label_2866a4;
        case 0x2866b4u: goto label_2866b4;
        default: break;
    }

    ctx->pc = 0x286410u;

    // 0x286410: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x286410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x286414: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x286414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x286418: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x286418u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x28641c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x28641cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x286420: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x286420u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x286424: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x286424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x286428: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x286428u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x28642c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x28642cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x286430: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x286430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x286434: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x286434u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x286438: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x286438u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x28643c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x28643cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x286440: 0xa3a500d0  sb          $a1, 0xD0($sp)
    ctx->pc = 0x286440u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 5));
    // 0x286444: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x286444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x286448: 0x90630028  lbu         $v1, 0x28($v1)
    ctx->pc = 0x286448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x28644c: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x28644cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x286450: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x286450u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286454: 0x10830097  beq         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x286454u;
    {
        const bool branch_taken_0x286454 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x286454) {
            ctx->pc = 0x2866B4u;
            goto label_2866b4;
        }
    }
    ctx->pc = 0x28645Cu;
    // 0x28645c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28645cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286460: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x286460u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x286464: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x286464u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x286468: 0xc085538  jal         func_2154E0
    ctx->pc = 0x286468u;
    SET_GPR_U32(ctx, 31, 0x286470u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x286468u, 0x286470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286470u;
label_286470:
    // 0x286470: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x286470u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286474: 0x1014008f  beq         $zero, $s4, . + 4 + (0x8F << 2)
    ctx->pc = 0x286474u;
    {
        const bool branch_taken_0x286474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 20));
        if (branch_taken_0x286474) {
            ctx->pc = 0x2866B4u;
            goto label_2866b4;
        }
    }
    ctx->pc = 0x28647Cu;
    // 0x28647c: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x28647cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286480: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x286480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x286484: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x286484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x286488: 0xc085538  jal         func_2154E0
    ctx->pc = 0x286488u;
    SET_GPR_U32(ctx, 31, 0x286490u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x286488u, 0x286490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286490u;
label_286490:
    // 0x286490: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x286490u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286494: 0x1015005d  beq         $zero, $s5, . + 4 + (0x5D << 2)
    ctx->pc = 0x286494u;
    {
        const bool branch_taken_0x286494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 21));
        if (branch_taken_0x286494) {
            ctx->pc = 0x28660Cu;
            goto label_28660c;
        }
    }
    ctx->pc = 0x28649Cu;
    // 0x28649c: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x28649cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x2864a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2864a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2864a4: 0x14400059  bnez        $v0, . + 4 + (0x59 << 2)
    ctx->pc = 0x2864A4u;
    {
        const bool branch_taken_0x2864a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2864a4) {
            ctx->pc = 0x28660Cu;
            goto label_28660c;
        }
    }
    ctx->pc = 0x2864ACu;
    // 0x2864ac: 0x27a200b8  addiu       $v0, $sp, 0xB8
    ctx->pc = 0x2864acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    // 0x2864b0: 0xc780a28c  lwc1        $f0, -0x5D74($gp)
    ctx->pc = 0x2864b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294943372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2864b4: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x2864b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x2864b8: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2864b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864bc: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x2864BCu;
    {
        const bool branch_taken_0x2864bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2864bc) {
            ctx->pc = 0x2865E8u;
            goto label_2865e8;
        }
    }
    ctx->pc = 0x2864C4u;
label_2864c4:
    // 0x2864c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2864c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864c8: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x2864C8u;
    {
        const bool branch_taken_0x2864c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2864c8) {
            ctx->pc = 0x2865C0u;
            goto label_2865c0;
        }
    }
    ctx->pc = 0x2864D0u;
label_2864d0:
    // 0x2864d0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2864d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864d4: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2864D4u;
    SET_GPR_U32(ctx, 31, 0x2864DCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2864D4u, 0x2864DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864DCu;
label_2864dc:
    // 0x2864dc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2864dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864e0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2864e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864e4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2864e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2864e8: 0xc092158  jal         func_248560
    ctx->pc = 0x2864E8u;
    SET_GPR_U32(ctx, 31, 0x2864F0u);
    ctx->pc = 0x248560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248560u, 0x2864E8u, 0x2864F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2864F0u;
label_2864f0:
    // 0x2864f0: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2864f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2864f4: 0x1260000c  beqz        $s3, . + 4 + (0xC << 2)
    ctx->pc = 0x2864F4u;
    {
        const bool branch_taken_0x2864f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2864f4) {
            ctx->pc = 0x286528u;
            goto label_286528;
        }
    }
    ctx->pc = 0x2864FCu;
    // 0x2864fc: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2864fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286500: 0xc094d24  jal         func_253490
    ctx->pc = 0x286500u;
    SET_GPR_U32(ctx, 31, 0x286508u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x286500u, 0x286508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286508u;
label_286508:
    // 0x286508: 0x8f84bc24  lw          $a0, -0x43DC($gp)
    ctx->pc = 0x286508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949924)));
    // 0x28650c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x28650cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x286510: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x286510u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286514: 0xc0a69b0  jal         func_29A6C0
    ctx->pc = 0x286514u;
    SET_GPR_U32(ctx, 31, 0x28651Cu);
    ctx->pc = 0x29A6C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29A6C0u, 0x286514u, 0x28651Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28651Cu;
label_28651c:
    // 0x28651c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x28651cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x286520: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286520u;
    {
        const bool branch_taken_0x286520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286520) {
            ctx->pc = 0x28652Cu;
            goto label_28652c;
        }
    }
    ctx->pc = 0x286528u;
label_286528:
    // 0x286528: 0xafa000ac  sw          $zero, 0xAC($sp)
    ctx->pc = 0x286528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 0));
label_28652c:
    // 0x28652c: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x28652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x286530: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x286530u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x286534: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x286534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x286538: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x286538u;
    {
        const bool branch_taken_0x286538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286538) {
            ctx->pc = 0x286558u;
            goto label_286558;
        }
    }
    ctx->pc = 0x286540u;
    // 0x286540: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x286540u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x286544: 0xc0a664c  jal         func_299930
    ctx->pc = 0x286544u;
    SET_GPR_U32(ctx, 31, 0x28654Cu);
    ctx->pc = 0x299930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x299930u, 0x286544u, 0x28654Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28654Cu;
label_28654c:
    // 0x28654c: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x28654cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286550: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286550u;
    {
        const bool branch_taken_0x286550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286550) {
            ctx->pc = 0x28655Cu;
            goto label_28655c;
        }
    }
    ctx->pc = 0x286558u;
label_286558:
    // 0x286558: 0x27be00b8  addiu       $fp, $sp, 0xB8
    ctx->pc = 0x286558u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
label_28655c:
    // 0x28655c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x28655cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286560: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x286560u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286564: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x286564u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286568: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x286568u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28656c: 0xc0a4be4  jal         func_292F90
    ctx->pc = 0x28656Cu;
    SET_GPR_U32(ctx, 31, 0x286574u);
    ctx->pc = 0x292F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292F90u, 0x28656Cu, 0x286574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286574u;
label_286574:
    // 0x286574: 0x12600007  beqz        $s3, . + 4 + (0x7 << 2)
    ctx->pc = 0x286574u;
    {
        const bool branch_taken_0x286574 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x286574) {
            ctx->pc = 0x286594u;
            goto label_286594;
        }
    }
    ctx->pc = 0x28657Cu;
    // 0x28657c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x28657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286580: 0xc094d24  jal         func_253490
    ctx->pc = 0x286580u;
    SET_GPR_U32(ctx, 31, 0x286588u);
    ctx->pc = 0x253490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x253490u, 0x286580u, 0x286588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286588u;
label_286588:
    // 0x286588: 0x8c570008  lw          $s7, 0x8($v0)
    ctx->pc = 0x286588u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28658c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28658Cu;
    {
        const bool branch_taken_0x28658c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x28658c) {
            ctx->pc = 0x286598u;
            goto label_286598;
        }
    }
    ctx->pc = 0x286594u;
label_286594:
    // 0x286594: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x286594u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_286598:
    // 0x286598: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x286598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28659c: 0xc04d634  jal         func_1358D0
    ctx->pc = 0x28659Cu;
    SET_GPR_U32(ctx, 31, 0x2865A4u);
    ctx->pc = 0x1358D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1358D0u, 0x28659Cu, 0x2865A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865A4u;
label_2865a4:
    // 0x2865a4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2865a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2865a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865ac: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2865acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865b0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x2865b0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
    // 0x2865b4: 0xc0a4c94  jal         func_293250
    ctx->pc = 0x2865B4u;
    SET_GPR_U32(ctx, 31, 0x2865BCu);
    ctx->pc = 0x293250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x293250u, 0x2865B4u, 0x2865BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865BCu;
label_2865bc:
    // 0x2865bc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2865bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2865c0:
    // 0x2865c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2865c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865c4: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2865C4u;
    SET_GPR_U32(ctx, 31, 0x2865CCu);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2865C4u, 0x2865CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865CCu;
label_2865cc:
    // 0x2865cc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2865ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865d0: 0xc0477e0  jal         func_11DF80
    ctx->pc = 0x2865D0u;
    SET_GPR_U32(ctx, 31, 0x2865D8u);
    ctx->pc = 0x11DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF80u, 0x2865D0u, 0x2865D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865D8u;
label_2865d8:
    // 0x2865d8: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x2865d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2865dc: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x2865DCu;
    {
        const bool branch_taken_0x2865dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2865dc) {
            ctx->pc = 0x2864D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2864d0;
        }
    }
    ctx->pc = 0x2865E4u;
    // 0x2865e4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2865e4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2865e8:
    // 0x2865e8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2865e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865ec: 0xc092d70  jal         func_24B5C0
    ctx->pc = 0x2865ECu;
    SET_GPR_U32(ctx, 31, 0x2865F4u);
    ctx->pc = 0x24B5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5C0u, 0x2865ECu, 0x2865F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2865F4u;
label_2865f4:
    // 0x2865f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2865f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2865f8: 0xc0477d8  jal         func_11DF60
    ctx->pc = 0x2865F8u;
    SET_GPR_U32(ctx, 31, 0x286600u);
    ctx->pc = 0x11DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11DF60u, 0x2865F8u, 0x286600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286600u;
label_286600:
    // 0x286600: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x286600u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x286604: 0x1440ffaf  bnez        $v0, . + 4 + (-0x51 << 2)
    ctx->pc = 0x286604u;
    {
        const bool branch_taken_0x286604 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x286604) {
            ctx->pc = 0x2864C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2864c4;
        }
    }
    ctx->pc = 0x28660Cu;
label_28660c:
    // 0x28660c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x28660cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286610: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x286610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286614: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x286614u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x286618: 0xc0913e4  jal         func_244F90
    ctx->pc = 0x286618u;
    SET_GPR_U32(ctx, 31, 0x286620u);
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x286618u, 0x286620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286620u;
label_286620:
    // 0x286620: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x286620u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x286624: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x286624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x286628: 0x10020012  beq         $zero, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x286628u;
    {
        const bool branch_taken_0x286628 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x286628) {
            ctx->pc = 0x286674u;
            goto label_286674;
        }
    }
    ctx->pc = 0x286630u;
    // 0x286630: 0x8fa400b4  lw          $a0, 0xB4($sp)
    ctx->pc = 0x286630u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x286634: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x286634u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x286638: 0xc085538  jal         func_2154E0
    ctx->pc = 0x286638u;
    SET_GPR_U32(ctx, 31, 0x286640u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x286638u, 0x286640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286640u;
label_286640:
    // 0x286640: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x286640u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x286644: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x286644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x286648: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x286648u;
    {
        const bool branch_taken_0x286648 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x286648) {
            ctx->pc = 0x28666Cu;
            goto label_28666c;
        }
    }
    ctx->pc = 0x286650u;
    // 0x286650: 0x8fa400b0  lw          $a0, 0xB0($sp)
    ctx->pc = 0x286650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x286654: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x286654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x286658: 0xc0a1248  jal         func_284920
    ctx->pc = 0x286658u;
    SET_GPR_U32(ctx, 31, 0x286660u);
    ctx->pc = 0x284920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284920u, 0x286658u, 0x286660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286660u;
label_286660:
    // 0x286660: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x286660u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x286664: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x286664u;
    {
        const bool branch_taken_0x286664 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x286664) {
            ctx->pc = 0x286670u;
            goto label_286670;
        }
    }
    ctx->pc = 0x28666Cu;
label_28666c:
    // 0x28666c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x28666cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_286670:
    // 0x286670: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x286670u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_286674:
    // 0x286674: 0x93a200d0  lbu         $v0, 0xD0($sp)
    ctx->pc = 0x286674u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x286678: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x286678u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x28667c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x28667Cu;
    {
        const bool branch_taken_0x28667c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x28667c) {
            ctx->pc = 0x286694u;
            goto label_286694;
        }
    }
    ctx->pc = 0x286684u;
    // 0x286684: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x286684u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286688: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286688u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28668c: 0xc0a19bc  jal         func_2866F0
    ctx->pc = 0x28668Cu;
    SET_GPR_U32(ctx, 31, 0x286694u);
    ctx->pc = 0x2866F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2866F0u, 0x28668Cu, 0x286694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x286694u;
label_286694:
    // 0x286694: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x286694u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x286698: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x286698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28669c: 0xc0a1fd8  jal         func_287F60
    ctx->pc = 0x28669Cu;
    SET_GPR_U32(ctx, 31, 0x2866A4u);
    ctx->pc = 0x287F60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x287F60u, 0x28669Cu, 0x2866A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866A4u;
label_2866a4:
    // 0x2866a4: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x2866a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2866a8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2866a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2866ac: 0xc0a2140  jal         func_288500
    ctx->pc = 0x2866ACu;
    SET_GPR_U32(ctx, 31, 0x2866B4u);
    ctx->pc = 0x288500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x288500u, 0x2866ACu, 0x2866B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2866B4u;
label_2866b4:
    // 0x2866b4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2866b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2866b8: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2866b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2866bc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2866bcu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2866c0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2866c0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2866c4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2866c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2866c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2866c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2866cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2866ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2866d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2866d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2866d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2866d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2866d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2866d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2866dc: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x2866dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x2866e0: 0x3e00008  jr          $ra
    ctx->pc = 0x2866E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2866E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2866E8u;
    // 0x2866e8: 0x0  nop
    ctx->pc = 0x2866e8u;
    // NOP
    // 0x2866ec: 0x0  nop
    ctx->pc = 0x2866ecu;
    // NOP
    ctx->pc = 0x2866f0u;
}
