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

// Function: sub_003FD340
// Address: 0x3fd340 - 0x3fd5c8
void sub_003FD340_0x3fd340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FD340_0x3fd340");
#endif

    switch (ctx->pc) {
        case 0x3fd388u: goto label_3fd388;
        case 0x3fd3acu: goto label_3fd3ac;
        case 0x3fd3ccu: goto label_3fd3cc;
        case 0x3fd3d8u: goto label_3fd3d8;
        case 0x3fd3f4u: goto label_3fd3f4;
        case 0x3fd418u: goto label_3fd418;
        case 0x3fd434u: goto label_3fd434;
        case 0x3fd44cu: goto label_3fd44c;
        case 0x3fd458u: goto label_3fd458;
        case 0x3fd464u: goto label_3fd464;
        case 0x3fd470u: goto label_3fd470;
        case 0x3fd47cu: goto label_3fd47c;
        case 0x3fd488u: goto label_3fd488;
        case 0x3fd494u: goto label_3fd494;
        case 0x3fd4a0u: goto label_3fd4a0;
        case 0x3fd4c8u: goto label_3fd4c8;
        case 0x3fd500u: goto label_3fd500;
        case 0x3fd50cu: goto label_3fd50c;
        case 0x3fd568u: goto label_3fd568;
        default: break;
    }

    ctx->pc = 0x3fd340u;

    // 0x3fd340: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3fd340u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x3fd344: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x3fd344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
    // 0x3fd348: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x3fd348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
    // 0x3fd34c: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3fd34cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
    // 0x3fd350: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3fd350u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd354: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x3fd354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
    // 0x3fd358: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x3fd358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
    // 0x3fd35c: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x3fd35cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
    // 0x3fd360: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x3fd360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x3fd364: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x3fd364u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x3fd368: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x3fd368u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
    // 0x3fd36c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3fd36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3fd370: 0xdfc200f8  ld          $v0, 0xF8($fp)
    ctx->pc = 0x3fd370u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 248)));
    // 0x3fd374: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3fd374u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3fd378: 0x14400087  bnez        $v0, . + 4 + (0x87 << 2)
    ctx->pc = 0x3FD378u;
    {
        const bool branch_taken_0x3fd378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD37Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD378u;
        // 0x3fd37c: 0xa0b82d  daddu       $s7, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd378) {
            ctx->pc = 0x3FD598u;
            goto label_3fd598;
        }
    }
    ctx->pc = 0x3FD380u;
    // 0x3fd380: 0xc101c16  jal         func_407058
    ctx->pc = 0x3FD380u;
    SET_GPR_U32(ctx, 31, 0x3FD388u);
    ctx->pc = 0x407058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407058u, 0x3FD380u, 0x3FD388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD388u;
label_3fd388:
    // 0x3fd388: 0xdee50000  ld          $a1, 0x0($s7)
    ctx->pc = 0x3fd388u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x3fd38c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fd38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd390: 0xdee60008  ld          $a2, 0x8($s7)
    ctx->pc = 0x3fd390u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x3fd394: 0x92e70028  lbu         $a3, 0x28($s7)
    ctx->pc = 0x3fd394u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 40)));
    // 0x3fd398: 0x92e80029  lbu         $t0, 0x29($s7)
    ctx->pc = 0x3fd398u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 41)));
    // 0x3fd39c: 0x92e9002a  lbu         $t1, 0x2A($s7)
    ctx->pc = 0x3fd39cu;
    SET_GPR_ZE32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 42)));
    // 0x3fd3a0: 0x92ea002b  lbu         $t2, 0x2B($s7)
    ctx->pc = 0x3fd3a0u;
    SET_GPR_ZE32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 43)));
    // 0x3fd3a4: 0xc100262  jal         func_400988
    ctx->pc = 0x3FD3A4u;
    SET_GPR_U32(ctx, 31, 0x3FD3ACu);
    ctx->pc = 0x3FD3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD3A4u;
    // 0x3fd3a8: 0x92eb002c  lbu         $t3, 0x2C($s7) (Delay Slot)
    SET_GPR_ZE32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x400988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x400988u, 0x3FD3A4u, 0x3FD3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD3ACu;
label_3fd3ac:
    // 0x3fd3ac: 0xdee20010  ld          $v0, 0x10($s7)
    ctx->pc = 0x3fd3acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3fd3b0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3fd3b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3fd3b4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3fd3b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3fd3b8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3fd3b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3fd3bc: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FD3BCu;
    {
        const bool branch_taken_0x3fd3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd3bc) {
            ctx->pc = 0x3FD3C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD3BCu;
            // 0x3fd3c0: 0xdee20010  ld          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD3DCu;
            goto label_3fd3dc;
        }
    }
    ctx->pc = 0x3FD3C4u;
    // 0x3fd3c4: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD3C4u;
    SET_GPR_U32(ctx, 31, 0x3FD3CCu);
    ctx->pc = 0x3FD3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD3C4u;
    // 0x3fd3c8: 0xc6ec0038  lwc1        $f12, 0x38($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD3C4u, 0x3FD3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD3CCu;
label_3fd3cc:
    // 0x3fd3cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3fd3ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd3d0: 0xc101c62  jal         func_407188
    ctx->pc = 0x3FD3D0u;
    SET_GPR_U32(ctx, 31, 0x3FD3D8u);
    ctx->pc = 0x3FD3D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD3D0u;
    // 0x3fd3d4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x407188u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x407188u, 0x3FD3D0u, 0x3FD3D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD3D8u;
label_3fd3d8:
    // 0x3fd3d8: 0xdee20010  ld          $v0, 0x10($s7)
    ctx->pc = 0x3fd3d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
label_3fd3dc:
    // 0x3fd3dc: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x3fd3dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
    // 0x3fd3e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3FD3E0u;
    {
        const bool branch_taken_0x3fd3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd3e0) {
            ctx->pc = 0x3FD3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD3E0u;
            // 0x3fd3e4: 0xdee20010  ld          $v0, 0x10($s7) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD3F8u;
            goto label_3fd3f8;
        }
    }
    ctx->pc = 0x3FD3E8u;
    // 0x3fd3e8: 0x92e5003c  lbu         $a1, 0x3C($s7)
    ctx->pc = 0x3fd3e8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 60)));
    // 0x3fd3ec: 0xc101cb2  jal         func_4072C8
    ctx->pc = 0x3FD3ECu;
    SET_GPR_U32(ctx, 31, 0x3FD3F4u);
    ctx->pc = 0x3FD3F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD3ECu;
    // 0x3fd3f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4072C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4072C8u, 0x3FD3ECu, 0x3FD3F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD3F4u;
label_3fd3f4:
    // 0x3fd3f4: 0xdee20010  ld          $v0, 0x10($s7)
    ctx->pc = 0x3fd3f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
label_3fd3f8:
    // 0x3fd3f8: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x3fd3f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
    // 0x3fd3fc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FD3FCu;
    {
        const bool branch_taken_0x3fd3fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD3FCu;
        // 0x3fd400: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd3fc) {
            ctx->pc = 0x3FD418u;
            goto label_3fd418;
        }
    }
    ctx->pc = 0x3FD404u;
    // 0x3fd404: 0x8ee50100  lw          $a1, 0x100($s7)
    ctx->pc = 0x3fd404u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 256)));
    // 0x3fd408: 0x8ee70104  lw          $a3, 0x104($s7)
    ctx->pc = 0x3fd408u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 260)));
    // 0x3fd40c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3fd40cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd410: 0xc100456  jal         func_401158
    ctx->pc = 0x3FD410u;
    SET_GPR_U32(ctx, 31, 0x3FD418u);
    ctx->pc = 0x3FD414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD410u;
    // 0x3fd414: 0x8ee80108  lw          $t0, 0x108($s7) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 264)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x401158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x401158u, 0x3FD410u, 0x3FD418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD418u;
label_3fd418:
    // 0x3fd418: 0xdee20010  ld          $v0, 0x10($s7)
    ctx->pc = 0x3fd418u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3fd41c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3fd41cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3fd420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3FD420u;
    {
        const bool branch_taken_0x3fd420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD420u;
        // 0x3fd424: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd420) {
            ctx->pc = 0x3FD434u;
            goto label_3fd434;
        }
    }
    ctx->pc = 0x3FD428u;
    // 0x3fd428: 0x92e60029  lbu         $a2, 0x29($s7)
    ctx->pc = 0x3fd428u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 41)));
    // 0x3fd42c: 0xc1005d0  jal         func_401740
    ctx->pc = 0x3FD42Cu;
    SET_GPR_U32(ctx, 31, 0x3FD434u);
    ctx->pc = 0x3FD430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD42Cu;
    // 0x3fd430: 0x26e50054  addiu       $a1, $s7, 0x54 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 84));
    ctx->in_delay_slot = false;
    ctx->pc = 0x401740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x401740u, 0x3FD42Cu, 0x3FD434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD434u;
label_3fd434:
    // 0x3fd434: 0xdee20010  ld          $v0, 0x10($s7)
    ctx->pc = 0x3fd434u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 23), 16)));
    // 0x3fd438: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3fd438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
    // 0x3fd43c: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3FD43Cu;
    {
        const bool branch_taken_0x3fd43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd43c) {
            ctx->pc = 0x3FD440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD43Cu;
            // 0x3fd440: 0x8ee300fc  lw          $v1, 0xFC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD4CCu;
            goto label_3fd4cc;
        }
    }
    ctx->pc = 0x3FD444u;
    // 0x3fd444: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD444u;
    SET_GPR_U32(ctx, 31, 0x3FD44Cu);
    ctx->pc = 0x3FD448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD444u;
    // 0x3fd448: 0xc6ec00a8  lwc1        $f12, 0xA8($s7) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD444u, 0x3FD44Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD44Cu;
label_3fd44c:
    // 0x3fd44c: 0xc6ec00ac  lwc1        $f12, 0xAC($s7)
    ctx->pc = 0x3fd44cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd450: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD450u;
    SET_GPR_U32(ctx, 31, 0x3FD458u);
    ctx->pc = 0x3FD454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD450u;
    // 0x3fd454: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD450u, 0x3FD458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD458u;
label_3fd458:
    // 0x3fd458: 0xc6ec00b0  lwc1        $f12, 0xB0($s7)
    ctx->pc = 0x3fd458u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd45c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD45Cu;
    SET_GPR_U32(ctx, 31, 0x3FD464u);
    ctx->pc = 0x3FD460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD45Cu;
    // 0x3fd460: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD45Cu, 0x3FD464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD464u;
label_3fd464:
    // 0x3fd464: 0xc6ec00b4  lwc1        $f12, 0xB4($s7)
    ctx->pc = 0x3fd464u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd468: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD468u;
    SET_GPR_U32(ctx, 31, 0x3FD470u);
    ctx->pc = 0x3FD46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD468u;
    // 0x3fd46c: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD468u, 0x3FD470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD470u;
label_3fd470:
    // 0x3fd470: 0xc6ec00b8  lwc1        $f12, 0xB8($s7)
    ctx->pc = 0x3fd470u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd474: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD474u;
    SET_GPR_U32(ctx, 31, 0x3FD47Cu);
    ctx->pc = 0x3FD478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD474u;
    // 0x3fd478: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD474u, 0x3FD47Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD47Cu;
label_3fd47c:
    // 0x3fd47c: 0xc6ec00bc  lwc1        $f12, 0xBC($s7)
    ctx->pc = 0x3fd47cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd480: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD480u;
    SET_GPR_U32(ctx, 31, 0x3FD488u);
    ctx->pc = 0x3FD484u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD480u;
    // 0x3fd484: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD480u, 0x3FD488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD488u;
label_3fd488:
    // 0x3fd488: 0xc6ec00c0  lwc1        $f12, 0xC0($s7)
    ctx->pc = 0x3fd488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd48c: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD48Cu;
    SET_GPR_U32(ctx, 31, 0x3FD494u);
    ctx->pc = 0x3FD490u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD48Cu;
    // 0x3fd490: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD48Cu, 0x3FD494u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD494u;
label_3fd494:
    // 0x3fd494: 0xc6ec00c4  lwc1        $f12, 0xC4($s7)
    ctx->pc = 0x3fd494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 23), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3fd498: 0xc0bec3e  jal         func_2FB0F8
    ctx->pc = 0x3FD498u;
    SET_GPR_U32(ctx, 31, 0x3FD4A0u);
    ctx->pc = 0x3FD49Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD498u;
    // 0x3fd49c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB0F8u, 0x3FD498u, 0x3FD4A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD4A0u;
label_3fd4a0:
    // 0x3fd4a0: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x3fd4a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x3fd4a4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x3fd4a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd4a8: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3fd4a8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd4ac: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x3fd4acu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd4b0: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x3fd4b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd4b4: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x3fd4b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd4b8: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x3fd4b8u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd4bc: 0x200582d  daddu       $t3, $s0, $zero
    ctx->pc = 0x3fd4bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd4c0: 0xc100620  jal         func_401880
    ctx->pc = 0x3FD4C0u;
    SET_GPR_U32(ctx, 31, 0x3FD4C8u);
    ctx->pc = 0x3FD4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD4C0u;
    // 0x3fd4c4: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x401880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x401880u, 0x3FD4C0u, 0x3FD4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD4C8u;
label_3fd4c8:
    // 0x3fd4c8: 0x8ee300fc  lw          $v1, 0xFC($s7)
    ctx->pc = 0x3fd4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
label_3fd4cc:
    // 0x3fd4cc: 0x1060002e  beqz        $v1, . + 4 + (0x2E << 2)
    ctx->pc = 0x3FD4CCu;
    {
        const bool branch_taken_0x3fd4cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD4D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD4CCu;
        // 0x3fd4d0: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd4cc) {
            ctx->pc = 0x3FD588u;
            goto label_3fd588;
        }
    }
    ctx->pc = 0x3FD4D4u;
    // 0x3fd4d4: 0x8ef100f8  lw          $s1, 0xF8($s7)
    ctx->pc = 0x3fd4d4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 248)));
    // 0x3fd4d8: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x3fd4d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3fd4dc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3fd4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x3fd4e0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3fd4e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fd4e4: 0x10400028  beqz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x3FD4E4u;
    {
        const bool branch_taken_0x3fd4e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD4E4u;
        // 0x3fd4e8: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd4e4) {
            ctx->pc = 0x3FD588u;
            goto label_3fd588;
        }
    }
    ctx->pc = 0x3FD4ECu;
    // 0x3fd4ec: 0x24140003  addiu       $s4, $zero, 0x3
    ctx->pc = 0x3fd4ecu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3fd4f0: 0x3c130001  lui         $s3, 0x1
    ctx->pc = 0x3fd4f0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)1 << 16));
    // 0x3fd4f4: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x3fd4f4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3fd4f8: 0x2630000c  addiu       $s0, $s1, 0xC
    ctx->pc = 0x3fd4f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
    // 0x3fd4fc: 0x0  nop
    ctx->pc = 0x3fd4fcu;
    // NOP
label_3fd500:
    // 0x3fd500: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fd500u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd504: 0xc0f8606  jal         func_3E1818
    ctx->pc = 0x3FD504u;
    SET_GPR_U32(ctx, 31, 0x3FD50Cu);
    ctx->pc = 0x3FD508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD504u;
    // 0x3fd508: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1818u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1818u, 0x3FD504u, 0x3FD50Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD50Cu;
label_3fd50c:
    // 0x3fd50c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3fd50cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd510: 0x50750016  beql        $v1, $s5, . + 4 + (0x16 << 2)
    ctx->pc = 0x3FD510u;
    {
        const bool branch_taken_0x3fd510 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        if (branch_taken_0x3fd510) {
            ctx->pc = 0x3FD514u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD510u;
            // 0x3fd514: 0x8ee300fc  lw          $v1, 0xFC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD56Cu;
            goto label_3fd56c;
        }
    }
    ctx->pc = 0x3FD518u;
    // 0x3fd518: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3fd518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3fd51c: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x3FD51Cu;
    {
        const bool branch_taken_0x3fd51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FD520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD51Cu;
        // 0x3fd520: 0x30420002  andi        $v0, $v0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd51c) {
            ctx->pc = 0x3FD568u;
            goto label_3fd568;
        }
    }
    ctx->pc = 0x3FD524u;
    // 0x3fd524: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x3FD524u;
    {
        const bool branch_taken_0x3fd524 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd524) {
            ctx->pc = 0x3FD528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD524u;
            // 0x3fd528: 0x8ee300fc  lw          $v1, 0xFC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD56Cu;
            goto label_3fd56c;
        }
    }
    ctx->pc = 0x3FD52Cu;
    // 0x3fd52c: 0x9202fff7  lbu         $v0, -0x9($s0)
    ctx->pc = 0x3fd52cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4294967287)));
    // 0x3fd530: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3fd530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3fd534: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3FD534u;
    {
        const bool branch_taken_0x3fd534 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3fd534) {
            ctx->pc = 0x3FD538u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD534u;
            // 0x3fd538: 0x8e06fffc  lw          $a2, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD558u;
            goto label_3fd558;
        }
    }
    ctx->pc = 0x3FD53Cu;
    // 0x3fd53c: 0x50740006  beql        $v1, $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x3FD53Cu;
    {
        const bool branch_taken_0x3fd53c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x3fd53c) {
            ctx->pc = 0x3FD540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD53Cu;
            // 0x3fd540: 0x8e06fffc  lw          $a2, -0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD558u;
            goto label_3fd558;
        }
    }
    ctx->pc = 0x3FD544u;
    // 0x3fd544: 0xdfc20100  ld          $v0, 0x100($fp)
    ctx->pc = 0x3fd544u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 256)));
    // 0x3fd548: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x3fd548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
    // 0x3fd54c: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3FD54Cu;
    {
        const bool branch_taken_0x3fd54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3fd54c) {
            ctx->pc = 0x3FD550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3FD54Cu;
            // 0x3fd550: 0x8ee300fc  lw          $v1, 0xFC($s7) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3FD56Cu;
            goto label_3fd56c;
        }
    }
    ctx->pc = 0x3FD554u;
    // 0x3fd554: 0x8e06fffc  lw          $a2, -0x4($s0)
    ctx->pc = 0x3fd554u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4294967292)));
label_3fd558:
    // 0x3fd558: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fd558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fd55c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x3fd55cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3fd560: 0xc101b80  jal         func_406E00
    ctx->pc = 0x3FD560u;
    SET_GPR_U32(ctx, 31, 0x3FD568u);
    ctx->pc = 0x3FD564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FD560u;
    // 0x3fd564: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x406E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x406E00u, 0x3FD560u, 0x3FD568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FD568u;
label_3fd568:
    // 0x3fd568: 0x8ee300fc  lw          $v1, 0xFC($s7)
    ctx->pc = 0x3fd568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 252)));
label_3fd56c:
    // 0x3fd56c: 0x26310014  addiu       $s1, $s1, 0x14
    ctx->pc = 0x3fd56cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x3fd570: 0x8ee200f8  lw          $v0, 0xF8($s7)
    ctx->pc = 0x3fd570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 248)));
    // 0x3fd574: 0x721818  mult        $v1, $v1, $s2
    ctx->pc = 0x3fd574u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x3fd578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3fd578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3fd57c: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x3fd57cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3fd580: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x3FD580u;
    {
        const bool branch_taken_0x3fd580 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3FD584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD580u;
        // 0x3fd584: 0x26100014  addiu       $s0, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3fd580) {
            ctx->pc = 0x3FD500u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3fd500;
        }
    }
    ctx->pc = 0x3FD588u;
label_3fd588:
    // 0x3fd588: 0xdfc200f8  ld          $v0, 0xF8($fp)
    ctx->pc = 0x3fd588u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 248)));
    // 0x3fd58c: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x3fd58cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x3fd590: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fd590u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fd594: 0xffc200f8  sd          $v0, 0xF8($fp)
    ctx->pc = 0x3fd594u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 248), GPR_U64(ctx, 2));
label_3fd598:
    // 0x3fd598: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x3fd598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3fd59c: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x3fd59cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3fd5a0: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x3fd5a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fd5a4: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x3fd5a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fd5a8: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x3fd5a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fd5ac: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x3fd5acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fd5b0: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x3fd5b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fd5b4: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x3fd5b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fd5b8: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x3fd5b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fd5bc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3fd5bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fd5c0: 0x3e00008  jr          $ra
    ctx->pc = 0x3FD5C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FD5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FD5C0u;
        // 0x3fd5c4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FD5C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FD5C8u;
}
