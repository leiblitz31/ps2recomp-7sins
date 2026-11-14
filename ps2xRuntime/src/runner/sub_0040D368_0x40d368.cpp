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

// Function: sub_0040D368
// Address: 0x40d368 - 0x40d520
void sub_0040D368_0x40d368(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D368_0x40d368");
#endif

    switch (ctx->pc) {
        case 0x40d3a0u: goto label_40d3a0;
        case 0x40d3e4u: goto label_40d3e4;
        case 0x40d400u: goto label_40d400;
        case 0x40d428u: goto label_40d428;
        case 0x40d444u: goto label_40d444;
        case 0x40d458u: goto label_40d458;
        case 0x40d4d8u: goto label_40d4d8;
        case 0x40d4f4u: goto label_40d4f4;
        case 0x40d500u: goto label_40d500;
        default: break;
    }

    ctx->pc = 0x40d368u;

    // 0x40d368: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x40d368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x40d36c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x40d36cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x40d370: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x40d370u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x40d374: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x40d374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d378: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x40d378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
    // 0x40d37c: 0xafa0004c  sw          $zero, 0x4C($sp)
    ctx->pc = 0x40d37cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 0));
    // 0x40d380: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x40d380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x40d384: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x40d384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x40d388: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x40d388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40d38c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x40D38Cu;
    {
        const bool branch_taken_0x40d38c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x40D390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D38Cu;
        // 0x40d390: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d38c) {
            ctx->pc = 0x40D3A8u;
            goto label_40d3a8;
        }
    }
    ctx->pc = 0x40D394u;
    // 0x40d394: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x40d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x40d398: 0xc103e64  jal         func_40F990
    ctx->pc = 0x40D398u;
    SET_GPR_U32(ctx, 31, 0x40D3A0u);
    ctx->pc = 0x40D39Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D398u;
    // 0x40d39c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x40D398u, 0x40D3A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D3A0u;
label_40d3a0:
    // 0x40d3a0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x40D3A0u;
    {
        const bool branch_taken_0x40d3a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3A0u;
        // 0x40d3a4: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d3a0) {
            ctx->pc = 0x40D3CCu;
            goto label_40d3cc;
        }
    }
    ctx->pc = 0x40D3A8u;
label_40d3a8:
    // 0x40d3a8: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x40d3a8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x40d3ac: 0x7fa20040  sq          $v0, 0x40($sp)
    ctx->pc = 0x40d3acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 2));
    // 0x40d3b0: 0x7a030010  lq          $v1, 0x10($s0)
    ctx->pc = 0x40d3b0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x40d3b4: 0x7fa30050  sq          $v1, 0x50($sp)
    ctx->pc = 0x40d3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 3));
    // 0x40d3b8: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x40d3b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x40d3bc: 0x7fa20060  sq          $v0, 0x60($sp)
    ctx->pc = 0x40d3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 2));
    // 0x40d3c0: 0x7a030030  lq          $v1, 0x30($s0)
    ctx->pc = 0x40d3c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x40d3c4: 0x7fa30070  sq          $v1, 0x70($sp)
    ctx->pc = 0x40d3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 3));
    // 0x40d3c8: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x40d3c8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_40d3cc:
    // 0x40d3cc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40d3ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d3d0: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x40d3d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x40d3d4: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x40d3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x40d3d8: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x40d3d8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x40d3dc: 0xc103404  jal         func_40D010
    ctx->pc = 0x40D3DCu;
    SET_GPR_U32(ctx, 31, 0x40D3E4u);
    ctx->pc = 0x40D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D3DCu;
    // 0x40d3e0: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x40D3DCu, 0x40D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D3E4u;
label_40d3e4:
    // 0x40d3e4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x40D3E4u;
    {
        const bool branch_taken_0x40d3e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D3E4u;
        // 0x40d3e8: 0x3c070003  lui         $a3, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d3e4) {
            ctx->pc = 0x40D410u;
            goto label_40d410;
        }
    }
    ctx->pc = 0x40D3ECu;
    // 0x40d3ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d3f0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d3f4: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x40d3f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x40d3f8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D3F8u;
    SET_GPR_U32(ctx, 31, 0x40D400u);
    ctx->pc = 0x40D3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D3F8u;
    // 0x40d3fc: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D3F8u, 0x40D400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D400u;
label_40d400:
    // 0x40d400: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x40d400u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x40d404: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x40D404u;
    {
        const bool branch_taken_0x40d404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D404u;
        // 0x40d408: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d404) {
            ctx->pc = 0x40D450u;
            goto label_40d450;
        }
    }
    ctx->pc = 0x40D40Cu;
    // 0x40d40c: 0x0  nop
    ctx->pc = 0x40d40cu;
    // NOP
label_40d410:
    // 0x40d410: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40d410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x40d414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d418: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x40d418u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x40d41c: 0x34e77002  ori         $a3, $a3, 0x7002
    ctx->pc = 0x40d41cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)28674);
    // 0x40d420: 0xc103404  jal         func_40D010
    ctx->pc = 0x40D420u;
    SET_GPR_U32(ctx, 31, 0x40D428u);
    ctx->pc = 0x40D424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D420u;
    // 0x40d424: 0x2408002d  addiu       $t0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D010u, 0x40D420u, 0x40D428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D428u;
label_40d428:
    // 0x40d428: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x40D428u;
    {
        const bool branch_taken_0x40d428 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40d428) {
            ctx->pc = 0x40D42Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40D428u;
            // 0x40d42c: 0x8fa2004c  lw          $v0, 0x4C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40D460u;
            goto label_40d460;
        }
    }
    ctx->pc = 0x40D430u;
    // 0x40d430: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d430u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d434: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d434u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d438: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x40d438u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x40d43c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D43Cu;
    SET_GPR_U32(ctx, 31, 0x40D444u);
    ctx->pc = 0x40D440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D43Cu;
    // 0x40d440: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D43Cu, 0x40D444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D444u;
label_40d444:
    // 0x40d444: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x40d444u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x40d448: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x40d448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x40d44c: 0x0  nop
    ctx->pc = 0x40d44cu;
    // NOP
label_40d450:
    // 0x40d450: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D450u;
    SET_GPR_U32(ctx, 31, 0x40D458u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D450u, 0x40D458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D458u;
label_40d458:
    // 0x40d458: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x40D458u;
    {
        const bool branch_taken_0x40d458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D458u;
        // 0x40d45c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d458) {
            ctx->pc = 0x40D508u;
            goto label_40d508;
        }
    }
    ctx->pc = 0x40D460u;
label_40d460:
    // 0x40d460: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x40d460u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d464: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x40d464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d468: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x40d468u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x40d46c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x40d46cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x40d470: 0x6ba20047  ldl         $v0, 0x47($sp)
    ctx->pc = 0x40d470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40d474: 0x6fa20040  ldr         $v0, 0x40($sp)
    ctx->pc = 0x40d474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40d478: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x40d478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x40d47c: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x40d47cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d480: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x40d480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d484: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x40d484u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    // 0x40d488: 0x6ba20057  ldl         $v0, 0x57($sp)
    ctx->pc = 0x40d488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 87); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40d48c: 0x6fa20050  ldr         $v0, 0x50($sp)
    ctx->pc = 0x40d48cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 80); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40d490: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x40d490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x40d494: 0xb3a20013  sdl         $v0, 0x13($sp)
    ctx->pc = 0x40d494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d498: 0xb7a2000c  sdr         $v0, 0xC($sp)
    ctx->pc = 0x40d498u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d49c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x40d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
    // 0x40d4a0: 0x6ba20067  ldl         $v0, 0x67($sp)
    ctx->pc = 0x40d4a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 103); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40d4a4: 0x6fa20060  ldr         $v0, 0x60($sp)
    ctx->pc = 0x40d4a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 96); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40d4a8: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x40d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x40d4ac: 0xb3a2001f  sdl         $v0, 0x1F($sp)
    ctx->pc = 0x40d4acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d4b0: 0xb7a20018  sdr         $v0, 0x18($sp)
    ctx->pc = 0x40d4b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d4b4: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x40d4b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
    // 0x40d4b8: 0x6ba20077  ldl         $v0, 0x77($sp)
    ctx->pc = 0x40d4b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x40d4bc: 0x6fa20070  ldr         $v0, 0x70($sp)
    ctx->pc = 0x40d4bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x40d4c0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x40d4c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x40d4c4: 0xb3a2002b  sdl         $v0, 0x2B($sp)
    ctx->pc = 0x40d4c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 43); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d4c8: 0xb7a20024  sdr         $v0, 0x24($sp)
    ctx->pc = 0x40d4c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 36); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x40d4cc: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x40d4ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x40d4d0: 0xc10486e  jal         func_4121B8
    ctx->pc = 0x40D4D0u;
    SET_GPR_U32(ctx, 31, 0x40D4D8u);
    ctx->pc = 0x40D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D4D0u;
    // 0x40d4d4: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x40D4D0u, 0x40D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D4D8u;
label_40d4d8:
    // 0x40d4d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x40D4D8u;
    {
        const bool branch_taken_0x40d4d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D4DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D4D8u;
        // 0x40d4dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d4d8) {
            ctx->pc = 0x40D508u;
            goto label_40d508;
        }
    }
    ctx->pc = 0x40D4E0u;
    // 0x40d4e0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x40d4e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x40d4e8: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x40d4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x40d4ec: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x40D4ECu;
    SET_GPR_U32(ctx, 31, 0x40D4F4u);
    ctx->pc = 0x40D4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D4ECu;
    // 0x40d4f0: 0x3484001c  ori         $a0, $a0, 0x1C (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)28);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D4ECu, 0x40D4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D4F4u;
label_40d4f4:
    // 0x40d4f4: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x40d4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x40d4f8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x40D4F8u;
    SET_GPR_U32(ctx, 31, 0x40D500u);
    ctx->pc = 0x40D4FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D4F8u;
    // 0x40d4fc: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D4F8u, 0x40D500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D500u;
label_40d500:
    // 0x40d500: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x40d500u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x40d504: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40d504u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40d508:
    // 0x40d508: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x40d508u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x40d50c: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x40d50cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x40d510: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x40d510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x40d514: 0x3e00008  jr          $ra
    ctx->pc = 0x40D514u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D514u;
        // 0x40d518: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D514u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40D51Cu;
    // 0x40d51c: 0x0  nop
    ctx->pc = 0x40d51cu;
    // NOP
    ctx->pc = 0x40d520u;
}
