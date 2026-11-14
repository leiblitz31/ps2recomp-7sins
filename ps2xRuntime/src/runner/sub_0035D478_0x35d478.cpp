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

// Function: sub_0035D478
// Address: 0x35d478 - 0x35ef98
void sub_0035D478_0x35d478(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0035D478_0x35d478");
#endif

    switch (ctx->pc) {
        case 0x35d4d8u: goto label_35d4d8;
        case 0x35d504u: goto label_35d504;
        case 0x35d550u: goto label_35d550;
        case 0x35d578u: goto label_35d578;
        case 0x35d5d8u: goto label_35d5d8;
        case 0x35d690u: goto label_35d690;
        case 0x35d6acu: goto label_35d6ac;
        case 0x35d6f8u: goto label_35d6f8;
        case 0x35d720u: goto label_35d720;
        case 0x35d778u: goto label_35d778;
        case 0x35d7a0u: goto label_35d7a0;
        case 0x35d7fcu: goto label_35d7fc;
        case 0x35d820u: goto label_35d820;
        case 0x35d858u: goto label_35d858;
        case 0x35d97cu: goto label_35d97c;
        case 0x35dac8u: goto label_35dac8;
        case 0x35db04u: goto label_35db04;
        case 0x35db28u: goto label_35db28;
        case 0x35dbd8u: goto label_35dbd8;
        case 0x35dc38u: goto label_35dc38;
        case 0x35dc60u: goto label_35dc60;
        case 0x35dcecu: goto label_35dcec;
        case 0x35dd10u: goto label_35dd10;
        case 0x35dd9cu: goto label_35dd9c;
        case 0x35ddc0u: goto label_35ddc0;
        case 0x35de2cu: goto label_35de2c;
        case 0x35df58u: goto label_35df58;
        case 0x35e080u: goto label_35e080;
        case 0x35e1b0u: goto label_35e1b0;
        case 0x35e2d4u: goto label_35e2d4;
        case 0x35e3f8u: goto label_35e3f8;
        case 0x35e51cu: goto label_35e51c;
        case 0x35e67cu: goto label_35e67c;
        case 0x35e6c4u: goto label_35e6c4;
        case 0x35e6e8u: goto label_35e6e8;
        case 0x35e7b8u: goto label_35e7b8;
        case 0x35e83cu: goto label_35e83c;
        case 0x35e8bcu: goto label_35e8bc;
        case 0x35e930u: goto label_35e930;
        case 0x35e940u: goto label_35e940;
        case 0x35e9bcu: goto label_35e9bc;
        case 0x35ea38u: goto label_35ea38;
        case 0x35eab4u: goto label_35eab4;
        case 0x35eb6cu: goto label_35eb6c;
        case 0x35ebf8u: goto label_35ebf8;
        case 0x35ec7cu: goto label_35ec7c;
        case 0x35ecfcu: goto label_35ecfc;
        case 0x35ed70u: goto label_35ed70;
        case 0x35ed80u: goto label_35ed80;
        case 0x35edfcu: goto label_35edfc;
        case 0x35ee78u: goto label_35ee78;
        case 0x35eef4u: goto label_35eef4;
        default: break;
    }

    ctx->pc = 0x35d478u;

    // 0x35d478: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x35d478u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x35d47c: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x35d47cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
    // 0x35d480: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x35d480u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
    // 0x35d484: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35d484u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d488: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x35d488u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
    // 0x35d48c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x35d48cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d490: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x35d490u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
    // 0x35d494: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x35d494u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d498: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x35d498u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
    // 0x35d49c: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x35d49cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
    // 0x35d4a0: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x35d4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
    // 0x35d4a4: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x35d4a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
    // 0x35d4a8: 0x7fbe0070  sq          $fp, 0x70($sp)
    ctx->pc = 0x35d4a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 30));
    // 0x35d4ac: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x35d4acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x35d4b0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x35d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x35d4b4: 0x8d140020  lw          $s4, 0x20($t0)
    ctx->pc = 0x35d4b4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x35d4b8: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x35d4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x35d4bc: 0x8d130008  lw          $s3, 0x8($t0)
    ctx->pc = 0x35d4bcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 8)));
    // 0x35d4c0: 0x8d100004  lw          $s0, 0x4($t0)
    ctx->pc = 0x35d4c0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4)));
    // 0x35d4c4: 0x8d15001c  lw          $s5, 0x1C($t0)
    ctx->pc = 0x35d4c4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 28)));
    // 0x35d4c8: 0x16620599  bne         $s3, $v0, . + 4 + (0x599 << 2)
    ctx->pc = 0x35D4C8u;
    {
        const bool branch_taken_0x35d4c8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x35D4CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4C8u;
        // 0x35d4cc: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4c8) {
            ctx->pc = 0x35EB30u;
            goto label_35eb30;
        }
    }
    ctx->pc = 0x35D4D0u;
    // 0x35d4d0: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x35D4D0u;
    SET_GPR_U32(ctx, 31, 0x35D4D8u);
    ctx->pc = 0x35D4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x35D4D0u;
    // 0x35d4d4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x35D4D0u, 0x35D4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35D4D8u;
label_35d4d8:
    // 0x35d4d8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35d4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35d4dc: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35d4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35d4e0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35d4e0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35d4e4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35d4e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35d4e8: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35D4E8u;
    {
        const bool branch_taken_0x35d4e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D4ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D4E8u;
        // 0x35d4ec: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d4e8) {
            ctx->pc = 0x35D520u;
            goto label_35d520;
        }
    }
    ctx->pc = 0x35D4F0u;
    // 0x35d4f0: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35d4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35d4f4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35d4f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35d4f8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35d4f8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35d4fc: 0xf  sync
    ctx->pc = 0x35d4fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d500: 0x40f  sync.p
    ctx->pc = 0x35d500u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35d504:
    // 0x35d504: 0x0  nop
    ctx->pc = 0x35d504u;
    // NOP
    // 0x35d508: 0x0  nop
    ctx->pc = 0x35d508u;
    // NOP
    // 0x35d50c: 0x0  nop
    ctx->pc = 0x35d50cu;
    // NOP
    // 0x35d510: 0x0  nop
    ctx->pc = 0x35d510u;
    // NOP
    // 0x35d514: 0x0  nop
    ctx->pc = 0x35d514u;
    // NOP
    // 0x35d518: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D518u;
    {
        const bool branch_taken_0x35d518 = (false);
        if (branch_taken_0x35d518) {
            ctx->pc = 0x35D504u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d504;
        }
    }
    ctx->pc = 0x35D520u;
label_35d520:
    // 0x35d520: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35d520u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35d524: 0x2a4500b8  slti        $a1, $s2, 0xB8
    ctx->pc = 0x35d524u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x35d528: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35d528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35d52c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d530: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d530u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d534: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x35D534u;
    {
        const bool branch_taken_0x35d534 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D534u;
        // 0x35d538: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d534) {
            ctx->pc = 0x35D594u;
            goto label_35d594;
        }
    }
    ctx->pc = 0x35D53Cu;
    // 0x35d53c: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35d53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35d540: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35d540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35d544: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35d544u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35d548: 0xf  sync
    ctx->pc = 0x35d548u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d54c: 0x40f  sync.p
    ctx->pc = 0x35d54cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35d550:
    // 0x35d550: 0x0  nop
    ctx->pc = 0x35d550u;
    // NOP
    // 0x35d554: 0x0  nop
    ctx->pc = 0x35d554u;
    // NOP
    // 0x35d558: 0x0  nop
    ctx->pc = 0x35d558u;
    // NOP
    // 0x35d55c: 0x0  nop
    ctx->pc = 0x35d55cu;
    // NOP
    // 0x35d560: 0x0  nop
    ctx->pc = 0x35d560u;
    // NOP
    // 0x35d564: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D564u;
    {
        const bool branch_taken_0x35d564 = (false);
        if (branch_taken_0x35d564) {
            ctx->pc = 0x35D550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d550;
        }
    }
    ctx->pc = 0x35D56Cu;
    // 0x35d56c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35d56cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35d570: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35d570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35d574: 0x0  nop
    ctx->pc = 0x35d574u;
    // NOP
label_35d578:
    // 0x35d578: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d578u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35d57c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d57cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d580: 0x0  nop
    ctx->pc = 0x35d580u;
    // NOP
    // 0x35d584: 0x0  nop
    ctx->pc = 0x35d584u;
    // NOP
    // 0x35d588: 0x0  nop
    ctx->pc = 0x35d588u;
    // NOP
    // 0x35d58c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D58Cu;
    {
        const bool branch_taken_0x35d58c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d58c) {
            ctx->pc = 0x35D578u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d578;
        }
    }
    ctx->pc = 0x35D594u;
label_35d594:
    // 0x35d594: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x35d594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x35d598: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x35d598u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x35d59c: 0x34423f50  ori         $v0, $v0, 0x3F50
    ctx->pc = 0x35d59cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16208);
    // 0x35d5a0: 0x34843f60  ori         $a0, $a0, 0x3F60
    ctx->pc = 0x35d5a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16224);
    // 0x35d5a4: 0x6ac30007  ldl         $v1, 0x7($s6)
    ctx->pc = 0x35d5a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35d5a8: 0x6ec30000  ldr         $v1, 0x0($s6)
    ctx->pc = 0x35d5a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35d5ac: 0x8ec60008  lw          $a2, 0x8($s6)
    ctx->pc = 0x35d5acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x35d5b0: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x35d5b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35d5b4: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x35d5b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35d5b8: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x35d5b8u;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 6)); // MMIO: 0x70003f58
    // 0x35d5bc: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x35d5bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x35d5c0: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x35d5c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x35d5c4: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x35d5c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x35d5c8: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x35d5c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35d5cc: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x35d5ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35d5d0: 0xac860008  sw          $a2, 0x8($a0)
    ctx->pc = 0x35d5d0u;
    runtime->Store32(rdram, ctx, 0x70003F68u, GPR_U32(ctx, 6)); // MMIO: 0x70003f68
    // 0x35d5d4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35d5d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_35d5d8:
    // 0x35d5d8: 0x42000039  di
    ctx->pc = 0x35d5d8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35d5dc: 0x40f  sync.p
    ctx->pc = 0x35d5dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d5e0: 0x40066000  mfc0        $a2, Status
    ctx->pc = 0x35d5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_status);
    // 0x35d5e4: 0xc33024  and         $a2, $a2, $v1
    ctx->pc = 0x35d5e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x35d5e8: 0x0  nop
    ctx->pc = 0x35d5e8u;
    // NOP
    // 0x35d5ec: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D5ECu;
    {
        const bool branch_taken_0x35d5ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d5ec) {
            ctx->pc = 0x35D5D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d5d8;
        }
    }
    ctx->pc = 0x35D5F4u;
    // 0x35d5f4: 0x3c073f00  lui         $a3, 0x3F00
    ctx->pc = 0x35d5f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16128 << 16));
    // 0x35d5f8: 0x48c7a800  ctc2.ni     $a3, $vi21
    ctx->pc = 0x35d5f8u;
    { uint32_t tmp = GPR_U32(ctx, 7); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35d5fc: 0x4a0002ff  vnop
    ctx->pc = 0x35d5fcu;
    // NOP operation, no action needed for VU0
    // 0x35d600: 0x4a0002ff  vnop
    ctx->pc = 0x35d600u;
    // NOP operation, no action needed for VU0
    // 0x35d604: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35d604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35d608: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35d608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35d60c: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x35d60cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35d610: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x35d610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35d614: 0x42000038  ei
    ctx->pc = 0x35d614u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35d618: 0x14a0015d  bnez        $a1, . + 4 + (0x15D << 2)
    ctx->pc = 0x35D618u;
    {
        const bool branch_taken_0x35d618 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D618u;
        // 0x35d61c: 0x2a420004  slti        $v0, $s2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d618) {
            ctx->pc = 0x35DB90u;
            goto label_35db90;
        }
    }
    ctx->pc = 0x35D620u;
    // 0x35d620: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x35d620u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x35d624: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x35d624u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x35d628: 0xafa70044  sw          $a3, 0x44($sp)
    ctx->pc = 0x35d628u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 7));
    // 0x35d62c: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x35d62cu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x35d630: 0xafa70048  sw          $a3, 0x48($sp)
    ctx->pc = 0x35d630u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 7));
    // 0x35d634: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x35d634u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x35d638: 0xafa7004c  sw          $a3, 0x4C($sp)
    ctx->pc = 0x35d638u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 7));
    // 0x35d63c: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x35d63cu;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x35d640: 0x8fa80044  lw          $t0, 0x44($sp)
    ctx->pc = 0x35d640u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x35d644: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x35d644u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x35d648: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x35d648u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35d64c: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x35d64cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
    // 0x35d650: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x35d650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x35d654: 0x3508d080  ori         $t0, $t0, 0xD080
    ctx->pc = 0x35d654u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)53376);
    // 0x35d658: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x35d658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x35d65c: 0xafa80044  sw          $t0, 0x44($sp)
    ctx->pc = 0x35d65cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 8));
    // 0x35d660: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x35d660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x35d664: 0xafa20048  sw          $v0, 0x48($sp)
    ctx->pc = 0x35d664u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 2));
    // 0x35d668: 0xafa3004c  sw          $v1, 0x4C($sp)
    ctx->pc = 0x35d668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    // 0x35d66c: 0x3739d000  ori         $t9, $t9, 0xD000
    ctx->pc = 0x35d66cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)53248);
    // 0x35d670: 0x358ce020  ori         $t4, $t4, 0xE020
    ctx->pc = 0x35d670u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57376);
    // 0x35d674: 0x240f0100  addiu       $t7, $zero, 0x100
    ctx->pc = 0x35d674u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35d678: 0x356bd400  ori         $t3, $t3, 0xD400
    ctx->pc = 0x35d678u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)54272);
    // 0x35d67c: 0x240e0200  addiu       $t6, $zero, 0x200
    ctx->pc = 0x35d67cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35d680: 0x3718e010  ori         $t8, $t8, 0xE010
    ctx->pc = 0x35d680u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)57360);
    // 0x35d684: 0x36f7d480  ori         $s7, $s7, 0xD480
    ctx->pc = 0x35d684u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54400);
    // 0x35d688: 0x36d6d410  ori         $s6, $s6, 0xD410
    ctx->pc = 0x35d688u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)54288);
    // 0x35d68c: 0x34e7d420  ori         $a3, $a3, 0xD420
    ctx->pc = 0x35d68cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54304);
label_35d690:
    // 0x35d690: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x35d690u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 25), 0))); // MMIO: 0x1000d000
    // 0x35d694: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d694u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d698: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x35D698u;
    {
        const bool branch_taken_0x35d698 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d698) {
            ctx->pc = 0x35D6C8u;
            goto label_35d6c8;
        }
    }
    ctx->pc = 0x35D6A0u;
    // 0x35d6a0: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x35d6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x35d6a4: 0xf  sync
    ctx->pc = 0x35d6a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d6a8: 0x40f  sync.p
    ctx->pc = 0x35d6a8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35d6ac:
    // 0x35d6ac: 0x0  nop
    ctx->pc = 0x35d6acu;
    // NOP
    // 0x35d6b0: 0x0  nop
    ctx->pc = 0x35d6b0u;
    // NOP
    // 0x35d6b4: 0x0  nop
    ctx->pc = 0x35d6b4u;
    // NOP
    // 0x35d6b8: 0x0  nop
    ctx->pc = 0x35d6b8u;
    // NOP
    // 0x35d6bc: 0x0  nop
    ctx->pc = 0x35d6bcu;
    // NOP
    // 0x35d6c0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D6C0u;
    {
        const bool branch_taken_0x35d6c0 = (false);
        if (branch_taken_0x35d6c0) {
            ctx->pc = 0x35D6ACu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d6ac;
        }
    }
    ctx->pc = 0x35D6C8u;
label_35d6c8:
    // 0x35d6c8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35d6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35d6cc: 0x2652ff48  addiu       $s2, $s2, -0xB8
    ctx->pc = 0x35d6ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967112));
    // 0x35d6d0: 0xafb20050  sw          $s2, 0x50($sp)
    ctx->pc = 0x35d6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 18));
    // 0x35d6d4: 0x26242e00  addiu       $a0, $s1, 0x2E00
    ctx->pc = 0x35d6d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11776));
    // 0x35d6d8: 0x26120b80  addiu       $s2, $s0, 0xB80
    ctx->pc = 0x35d6d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 2944));
    // 0x35d6dc: 0xafa40054  sw          $a0, 0x54($sp)
    ctx->pc = 0x35d6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 4));
    // 0x35d6e0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d6e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d6e4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35D6E4u;
    {
        const bool branch_taken_0x35d6e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D6E4u;
        // 0x35d6e8: 0x26be05c0  addiu       $fp, $s5, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 21), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d6e4) {
            ctx->pc = 0x35D73Cu;
            goto label_35d73c;
        }
    }
    ctx->pc = 0x35D6ECu;
    // 0x35d6ec: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x35d6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x35d6f0: 0xf  sync
    ctx->pc = 0x35d6f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d6f4: 0x40f  sync.p
    ctx->pc = 0x35d6f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35d6f8:
    // 0x35d6f8: 0x0  nop
    ctx->pc = 0x35d6f8u;
    // NOP
    // 0x35d6fc: 0x0  nop
    ctx->pc = 0x35d6fcu;
    // NOP
    // 0x35d700: 0x0  nop
    ctx->pc = 0x35d700u;
    // NOP
    // 0x35d704: 0x0  nop
    ctx->pc = 0x35d704u;
    // NOP
    // 0x35d708: 0x0  nop
    ctx->pc = 0x35d708u;
    // NOP
    // 0x35d70c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D70Cu;
    {
        const bool branch_taken_0x35d70c = (false);
        if (branch_taken_0x35d70c) {
            ctx->pc = 0x35D6F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d6f8;
        }
    }
    ctx->pc = 0x35D714u;
    // 0x35d714: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35d714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35d718: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35d718u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35d71c: 0x0  nop
    ctx->pc = 0x35d71cu;
    // NOP
label_35d720:
    // 0x35d720: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d720u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35d724: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d728: 0x0  nop
    ctx->pc = 0x35d728u;
    // NOP
    // 0x35d72c: 0x0  nop
    ctx->pc = 0x35d72cu;
    // NOP
    // 0x35d730: 0x0  nop
    ctx->pc = 0x35d730u;
    // NOP
    // 0x35d734: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D734u;
    {
        const bool branch_taken_0x35d734 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d734) {
            ctx->pc = 0x35D720u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d720;
        }
    }
    ctx->pc = 0x35D73Cu;
label_35d73c:
    // 0x35d73c: 0xaf0e0000  sw          $t6, 0x0($t8)
    ctx->pc = 0x35d73cu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 14));
    // 0x35d740: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x35d740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x35d744: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x35d744u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x35d748: 0xaed50000  sw          $s5, 0x0($s6)
    ctx->pc = 0x35d748u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 21));
    // 0x35d74c: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x35d74cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x35d750: 0xad6f0000  sw          $t7, 0x0($t3)
    ctx->pc = 0x35d750u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 15));
    // 0x35d754: 0xf  sync
    ctx->pc = 0x35d754u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d758: 0x40f  sync.p
    ctx->pc = 0x35d758u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d75c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35d75cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35d760: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d764: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35D764u;
    {
        const bool branch_taken_0x35d764 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35d764) {
            ctx->pc = 0x35D7BCu;
            goto label_35d7bc;
        }
    }
    ctx->pc = 0x35D76Cu;
    // 0x35d76c: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x35d76cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x35d770: 0xf  sync
    ctx->pc = 0x35d770u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d774: 0x40f  sync.p
    ctx->pc = 0x35d774u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35d778:
    // 0x35d778: 0x0  nop
    ctx->pc = 0x35d778u;
    // NOP
    // 0x35d77c: 0x0  nop
    ctx->pc = 0x35d77cu;
    // NOP
    // 0x35d780: 0x0  nop
    ctx->pc = 0x35d780u;
    // NOP
    // 0x35d784: 0x0  nop
    ctx->pc = 0x35d784u;
    // NOP
    // 0x35d788: 0x0  nop
    ctx->pc = 0x35d788u;
    // NOP
    // 0x35d78c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D78Cu;
    {
        const bool branch_taken_0x35d78c = (false);
        if (branch_taken_0x35d78c) {
            ctx->pc = 0x35D778u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d778;
        }
    }
    ctx->pc = 0x35D794u;
    // 0x35d794: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35d794u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35d798: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35d798u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35d79c: 0x0  nop
    ctx->pc = 0x35d79cu;
    // NOP
label_35d7a0:
    // 0x35d7a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35d7a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d7a8: 0x0  nop
    ctx->pc = 0x35d7a8u;
    // NOP
    // 0x35d7ac: 0x0  nop
    ctx->pc = 0x35d7acu;
    // NOP
    // 0x35d7b0: 0x0  nop
    ctx->pc = 0x35d7b0u;
    // NOP
    // 0x35d7b4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D7B4u;
    {
        const bool branch_taken_0x35d7b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d7b4) {
            ctx->pc = 0x35D7A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d7a0;
        }
    }
    ctx->pc = 0x35D7BCu;
label_35d7bc:
    // 0x35d7bc: 0xaf0e0000  sw          $t6, 0x0($t8)
    ctx->pc = 0x35d7bcu;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 14));
    // 0x35d7c0: 0x240605c0  addiu       $a2, $zero, 0x5C0
    ctx->pc = 0x35d7c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x35d7c4: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x35d7c4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x35d7c8: 0x240800b8  addiu       $t0, $zero, 0xB8
    ctx->pc = 0x35d7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x35d7cc: 0xaed00000  sw          $s0, 0x0($s6)
    ctx->pc = 0x35d7ccu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 16));
    // 0x35d7d0: 0xace80000  sw          $t0, 0x0($a3)
    ctx->pc = 0x35d7d0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 8));
    // 0x35d7d4: 0xad6f0000  sw          $t7, 0x0($t3)
    ctx->pc = 0x35d7d4u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 15));
    // 0x35d7d8: 0xf  sync
    ctx->pc = 0x35d7d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d7dc: 0x40f  sync.p
    ctx->pc = 0x35d7dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d7e0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35d7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35d7e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d7e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d7e8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35D7E8u;
    {
        const bool branch_taken_0x35d7e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35D7ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D7E8u;
        // 0x35d7ec: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d7e8) {
            ctx->pc = 0x35D83Cu;
            goto label_35d83c;
        }
    }
    ctx->pc = 0x35D7F0u;
    // 0x35d7f0: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x35d7f0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x35d7f4: 0xf  sync
    ctx->pc = 0x35d7f4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d7f8: 0x40f  sync.p
    ctx->pc = 0x35d7f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35d7fc:
    // 0x35d7fc: 0x0  nop
    ctx->pc = 0x35d7fcu;
    // NOP
    // 0x35d800: 0x0  nop
    ctx->pc = 0x35d800u;
    // NOP
    // 0x35d804: 0x0  nop
    ctx->pc = 0x35d804u;
    // NOP
    // 0x35d808: 0x0  nop
    ctx->pc = 0x35d808u;
    // NOP
    // 0x35d80c: 0x0  nop
    ctx->pc = 0x35d80cu;
    // NOP
    // 0x35d810: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D810u;
    {
        const bool branch_taken_0x35d810 = (false);
        if (branch_taken_0x35d810) {
            ctx->pc = 0x35D7FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d7fc;
        }
    }
    ctx->pc = 0x35D818u;
    // 0x35d818: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35d818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35d81c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35d81cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35d820:
    // 0x35d820: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35d820u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35d824: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35d824u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35d828: 0x0  nop
    ctx->pc = 0x35d828u;
    // NOP
    // 0x35d82c: 0x0  nop
    ctx->pc = 0x35d82cu;
    // NOP
    // 0x35d830: 0x0  nop
    ctx->pc = 0x35d830u;
    // NOP
    // 0x35d834: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D834u;
    {
        const bool branch_taken_0x35d834 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35D838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35D834u;
        // 0x35d838: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35d834) {
            ctx->pc = 0x35D820u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d820;
        }
    }
    ctx->pc = 0x35D83Cu;
label_35d83c:
    // 0x35d83c: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x35d83cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x35d840: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x35d840u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x35d844: 0x350805c0  ori         $t0, $t0, 0x5C0
    ctx->pc = 0x35d844u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1472);
    // 0x35d848: 0x34c61140  ori         $a2, $a2, 0x1140
    ctx->pc = 0x35d848u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4416);
    // 0x35d84c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x35d84cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35d850: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x35d850u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x35d854: 0x0  nop
    ctx->pc = 0x35d854u;
    // NOP
label_35d858:
    // 0x35d858: 0x42000039  di
    ctx->pc = 0x35d858u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35d85c: 0x40f  sync.p
    ctx->pc = 0x35d85cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d860: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35d860u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35d864: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35d864u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x35d868: 0x0  nop
    ctx->pc = 0x35d868u;
    // NOP
    // 0x35d86c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D86Cu;
    {
        const bool branch_taken_0x35d86c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d86c) {
            ctx->pc = 0x35D858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d858;
        }
    }
    ctx->pc = 0x35D874u;
    // 0x35d874: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x35d874u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35d878: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35d878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d87c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35d87cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35d880: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35d880u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35d884: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35d884u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35d888: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x35d888u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35d88c: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x35d88cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x35d890: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x35d890u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x35d894: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x35d894u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35d898: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x35d898u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x35d89c: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35d89cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35d8a0: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35d8a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35d8a4: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35d8a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35d8a8: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35d8a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35d8ac: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35d8acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d8b0: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35d8b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35d8b4: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35d8b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35d8b8: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35d8b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35d8bc: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35d8bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d8c0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35d8c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35d8c4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35d8c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35d8c8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35d8c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35d8cc: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35d8ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35d8d0: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35d8d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35d8d4: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35d8d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35d8d8: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35d8d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35d8dc: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35d8dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35d8e0: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35d8e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35d8e4: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35d8e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35d8e8: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35d8e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35d8ec: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35d8ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d8f0: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35d8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d8f4: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35d8f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d8f8: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35d8f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d8fc: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35d8fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35d900: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35d900u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35d904: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35d904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35d908: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35d908u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35d90c: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35d90cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35d910: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35d910u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35d914: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35d914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35d918: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35d918u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35d91c: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35d91cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35d920: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35d920u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35d924: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35d924u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35d928: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35d928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35d92c: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x35d92cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35d930: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x35d930u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35d934: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x35d934u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35d938: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x35d938u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35d93c: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x35d93cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35d940: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x35d940u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35d944: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x35d944u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35d948: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x35d948u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35d94c: 0xf8d50080  sqc2        $vf21, 0x80($a2)
    ctx->pc = 0x35d94cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35d950: 0xf8d60090  sqc2        $vf22, 0x90($a2)
    ctx->pc = 0x35d950u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35d954: 0xf8d700a0  sqc2        $vf23, 0xA0($a2)
    ctx->pc = 0x35d954u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35d958: 0xf8d800b0  sqc2        $vf24, 0xB0($a2)
    ctx->pc = 0x35d958u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35d95c: 0xf8dc00c0  sqc2        $vf28, 0xC0($a2)
    ctx->pc = 0x35d95cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35d960: 0xf8dd00d0  sqc2        $vf29, 0xD0($a2)
    ctx->pc = 0x35d960u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35d964: 0xf8de00e0  sqc2        $vf30, 0xE0($a2)
    ctx->pc = 0x35d964u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35d968: 0xf8df00f0  sqc2        $vf31, 0xF0($a2)
    ctx->pc = 0x35d968u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35d96c: 0x42000038  ei
    ctx->pc = 0x35d96cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35d970: 0x25250020  addiu       $a1, $t1, 0x20
    ctx->pc = 0x35d970u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35d974: 0x24c40100  addiu       $a0, $a2, 0x100
    ctx->pc = 0x35d974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x35d978: 0x25030040  addiu       $v1, $t0, 0x40
    ctx->pc = 0x35d978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_35d97c:
    // 0x35d97c: 0x42000039  di
    ctx->pc = 0x35d97cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35d980: 0x40f  sync.p
    ctx->pc = 0x35d980u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35d984: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35d984u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35d988: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35d988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x35d98c: 0x0  nop
    ctx->pc = 0x35d98cu;
    // NOP
    // 0x35d990: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35D990u;
    {
        const bool branch_taken_0x35d990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35d990) {
            ctx->pc = 0x35D97Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d97c;
        }
    }
    ctx->pc = 0x35D998u;
    // 0x35d998: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x35d998u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35d99c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35d99cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35d9a0: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35d9a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35d9a4: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35d9a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35d9a8: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35d9a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35d9ac: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x35d9acu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35d9b0: 0xd86d0010  lqc2        $vf13, 0x10($v1)
    ctx->pc = 0x35d9b0u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x35d9b4: 0xd8740020  lqc2        $vf20, 0x20($v1)
    ctx->pc = 0x35d9b4u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x35d9b8: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x35d9b8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35d9bc: 0xd87b0030  lqc2        $vf27, 0x30($v1)
    ctx->pc = 0x35d9bcu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x35d9c0: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35d9c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35d9c4: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35d9c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35d9c8: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35d9c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35d9cc: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35d9ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35d9d0: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35d9d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d9d4: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35d9d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35d9d8: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35d9d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35d9dc: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35d9dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35d9e0: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35d9e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35d9e4: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35d9e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35d9e8: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35d9e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35d9ec: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35d9ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35d9f0: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35d9f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35d9f4: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35d9f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35d9f8: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35d9f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35d9fc: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35d9fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35da00: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35da00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35da04: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35da04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35da08: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35da08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35da0c: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35da0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35da10: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35da10u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35da14: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35da14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35da18: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35da18u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35da1c: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35da1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35da20: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35da20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35da24: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35da24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35da28: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35da28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35da2c: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35da2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35da30: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35da30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35da34: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35da34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35da38: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35da38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35da3c: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35da3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35da40: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35da40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35da44: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35da44u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35da48: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35da48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35da4c: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35da4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35da50: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x35da50u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35da54: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x35da54u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35da58: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x35da58u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35da5c: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x35da5cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35da60: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x35da60u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35da64: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x35da64u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35da68: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x35da68u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35da6c: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x35da6cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35da70: 0xf8950080  sqc2        $vf21, 0x80($a0)
    ctx->pc = 0x35da70u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35da74: 0xf8960090  sqc2        $vf22, 0x90($a0)
    ctx->pc = 0x35da74u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35da78: 0xf89700a0  sqc2        $vf23, 0xA0($a0)
    ctx->pc = 0x35da78u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35da7c: 0xf89800b0  sqc2        $vf24, 0xB0($a0)
    ctx->pc = 0x35da7cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35da80: 0xf89c00c0  sqc2        $vf28, 0xC0($a0)
    ctx->pc = 0x35da80u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35da84: 0xf89d00d0  sqc2        $vf29, 0xD0($a0)
    ctx->pc = 0x35da84u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35da88: 0xf89e00e0  sqc2        $vf30, 0xE0($a0)
    ctx->pc = 0x35da88u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35da8c: 0xf89f00f0  sqc2        $vf31, 0xF0($a0)
    ctx->pc = 0x35da8cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35da90: 0x42000038  ei
    ctx->pc = 0x35da90u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35da94: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x35da94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x35da98: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x35da98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x35da9c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x35da9cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x35daa0: 0x29a200b8  slti        $v0, $t5, 0xB8
    ctx->pc = 0x35daa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x35daa4: 0x1440ff6c  bnez        $v0, . + 4 + (-0x94 << 2)
    ctx->pc = 0x35DAA4u;
    {
        const bool branch_taken_0x35daa4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DAA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DAA4u;
        // 0x35daa8: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35daa4) {
            ctx->pc = 0x35D858u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d858;
        }
    }
    ctx->pc = 0x35DAACu;
    // 0x35daac: 0x8f220000  lw          $v0, 0x0($t9)
    ctx->pc = 0x35daacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 0)));
    // 0x35dab0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35dab0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35dab4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x35DAB4u;
    {
        const bool branch_taken_0x35dab4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35dab4) {
            ctx->pc = 0x35DAE8u;
            goto label_35dae8;
        }
    }
    ctx->pc = 0x35DABCu;
    // 0x35dabc: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x35dabcu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x35dac0: 0xf  sync
    ctx->pc = 0x35dac0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dac4: 0x40f  sync.p
    ctx->pc = 0x35dac4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35dac8:
    // 0x35dac8: 0x0  nop
    ctx->pc = 0x35dac8u;
    // NOP
    // 0x35dacc: 0x0  nop
    ctx->pc = 0x35daccu;
    // NOP
    // 0x35dad0: 0x0  nop
    ctx->pc = 0x35dad0u;
    // NOP
    // 0x35dad4: 0x0  nop
    ctx->pc = 0x35dad4u;
    // NOP
    // 0x35dad8: 0x0  nop
    ctx->pc = 0x35dad8u;
    // NOP
    // 0x35dadc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DADCu;
    {
        const bool branch_taken_0x35dadc = (false);
        if (branch_taken_0x35dadc) {
            ctx->pc = 0x35DAC8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dac8;
        }
    }
    ctx->pc = 0x35DAE4u;
    // 0x35dae4: 0x0  nop
    ctx->pc = 0x35dae4u;
    // NOP
label_35dae8:
    // 0x35dae8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x35dae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x35daec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35daecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35daf0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x35DAF0u;
    {
        const bool branch_taken_0x35daf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35daf0) {
            ctx->pc = 0x35DB44u;
            goto label_35db44;
        }
    }
    ctx->pc = 0x35DAF8u;
    // 0x35daf8: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x35daf8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x35dafc: 0xf  sync
    ctx->pc = 0x35dafcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35db00: 0x40f  sync.p
    ctx->pc = 0x35db00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35db04:
    // 0x35db04: 0x0  nop
    ctx->pc = 0x35db04u;
    // NOP
    // 0x35db08: 0x0  nop
    ctx->pc = 0x35db08u;
    // NOP
    // 0x35db0c: 0x0  nop
    ctx->pc = 0x35db0cu;
    // NOP
    // 0x35db10: 0x0  nop
    ctx->pc = 0x35db10u;
    // NOP
    // 0x35db14: 0x0  nop
    ctx->pc = 0x35db14u;
    // NOP
    // 0x35db18: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DB18u;
    {
        const bool branch_taken_0x35db18 = (false);
        if (branch_taken_0x35db18) {
            ctx->pc = 0x35DB04u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35db04;
        }
    }
    ctx->pc = 0x35DB20u;
    // 0x35db20: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35db20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35db24: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35db24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35db28:
    // 0x35db28: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35db28u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35db2c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35db2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35db30: 0x0  nop
    ctx->pc = 0x35db30u;
    // NOP
    // 0x35db34: 0x0  nop
    ctx->pc = 0x35db34u;
    // NOP
    // 0x35db38: 0x0  nop
    ctx->pc = 0x35db38u;
    // NOP
    // 0x35db3c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DB3Cu;
    {
        const bool branch_taken_0x35db3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35db3c) {
            ctx->pc = 0x35DB28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35db28;
        }
    }
    ctx->pc = 0x35DB44u;
label_35db44:
    // 0x35db44: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x35db44u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x35db48: 0x24031140  addiu       $v1, $zero, 0x1140
    ctx->pc = 0x35db48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
    // 0x35db4c: 0x240602e0  addiu       $a2, $zero, 0x2E0
    ctx->pc = 0x35db4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x35db50: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x35db50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x35db54: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35db54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x35db58: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x35db58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x35db5c: 0xac910000  sw          $s1, 0x0($a0)
    ctx->pc = 0x35db5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 17));
    // 0x35db60: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x35db60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x35db64: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x35db64u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x35db68: 0xaf2f0000  sw          $t7, 0x0($t9)
    ctx->pc = 0x35db68u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 15));
    // 0x35db6c: 0xf  sync
    ctx->pc = 0x35db6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35db70: 0x40f  sync.p
    ctx->pc = 0x35db70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35db74: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x35db74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db78: 0x8fb20050  lw          $s2, 0x50($sp)
    ctx->pc = 0x35db78u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35db7c: 0x3c0a82d  daddu       $s5, $fp, $zero
    ctx->pc = 0x35db7cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35db80: 0x2a4200b8  slti        $v0, $s2, 0xB8
    ctx->pc = 0x35db80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x35db84: 0x1040fec2  beqz        $v0, . + 4 + (-0x13E << 2)
    ctx->pc = 0x35DB84u;
    {
        const bool branch_taken_0x35db84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB84u;
        // 0x35db88: 0x8fb10054  lw          $s1, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db84) {
            ctx->pc = 0x35D690u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35d690;
        }
    }
    ctx->pc = 0x35DB8Cu;
    // 0x35db8c: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x35db8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
label_35db90:
    // 0x35db90: 0x144002f7  bnez        $v0, . + 4 + (0x2F7 << 2)
    ctx->pc = 0x35DB90u;
    {
        const bool branch_taken_0x35db90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DB94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DB90u;
        // 0x35db94: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35db90) {
            ctx->pc = 0x35E770u;
            goto label_35e770;
        }
    }
    ctx->pc = 0x35DB98u;
    // 0x35db98: 0x26430003  addiu       $v1, $s2, 0x3
    ctx->pc = 0x35db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 3));
    // 0x35db9c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x35db9cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x35dba0: 0x242180b  movn        $v1, $s2, $v0
    ctx->pc = 0x35dba0u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 18));
    // 0x35dba4: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x35dba4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x35dba8: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x35dba8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x35dbac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbb0: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35dbb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35dbb4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35dbb4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35dbb8: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35dbb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35dbbc: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x35DBBCu;
    {
        const bool branch_taken_0x35dbbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DBC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DBBCu;
        // 0x35dbc0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dbbc) {
            ctx->pc = 0x35DBF8u;
            goto label_35dbf8;
        }
    }
    ctx->pc = 0x35DBC4u;
    // 0x35dbc4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35dbc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35dbc8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35dbcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dbccu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35dbd0: 0xf  sync
    ctx->pc = 0x35dbd0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dbd4: 0x40f  sync.p
    ctx->pc = 0x35dbd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35dbd8:
    // 0x35dbd8: 0x0  nop
    ctx->pc = 0x35dbd8u;
    // NOP
    // 0x35dbdc: 0x0  nop
    ctx->pc = 0x35dbdcu;
    // NOP
    // 0x35dbe0: 0x0  nop
    ctx->pc = 0x35dbe0u;
    // NOP
    // 0x35dbe4: 0x0  nop
    ctx->pc = 0x35dbe4u;
    // NOP
    // 0x35dbe8: 0x0  nop
    ctx->pc = 0x35dbe8u;
    // NOP
    // 0x35dbec: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DBECu;
    {
        const bool branch_taken_0x35dbec = (false);
        if (branch_taken_0x35dbec) {
            ctx->pc = 0x35DBD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dbd8;
        }
    }
    ctx->pc = 0x35DBF4u;
    // 0x35dbf4: 0x0  nop
    ctx->pc = 0x35dbf4u;
    // NOP
label_35dbf8:
    // 0x35dbf8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dbfc: 0x4b200  sll         $s6, $a0, 8
    ctx->pc = 0x35dbfcu;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x35dc00: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35dc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x35dc04: 0x24b3823  subu        $a3, $s2, $t3
    ctx->pc = 0x35dc04u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x35dc08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35dc0c: 0xb77c3  sra         $t6, $t3, 31
    ctx->pc = 0x35dc0cu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 11), 31));
    // 0x35dc10: 0x46100  sll         $t4, $a0, 4
    ctx->pc = 0x35dc10u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35dc14: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35dc14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35dc18: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x35DC18u;
    {
        const bool branch_taken_0x35dc18 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DC18u;
        // 0x35dc1c: 0x47980  sll         $t7, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dc18) {
            ctx->pc = 0x35DC7Cu;
            goto label_35dc7c;
        }
    }
    ctx->pc = 0x35DC20u;
    // 0x35dc20: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc24: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35dc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35dc28: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35dc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35dc2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35dc2cu;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35dc30: 0xf  sync
    ctx->pc = 0x35dc30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dc34: 0x40f  sync.p
    ctx->pc = 0x35dc34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35dc38:
    // 0x35dc38: 0x0  nop
    ctx->pc = 0x35dc38u;
    // NOP
    // 0x35dc3c: 0x0  nop
    ctx->pc = 0x35dc3cu;
    // NOP
    // 0x35dc40: 0x0  nop
    ctx->pc = 0x35dc40u;
    // NOP
    // 0x35dc44: 0x0  nop
    ctx->pc = 0x35dc44u;
    // NOP
    // 0x35dc48: 0x0  nop
    ctx->pc = 0x35dc48u;
    // NOP
    // 0x35dc4c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DC4Cu;
    {
        const bool branch_taken_0x35dc4c = (false);
        if (branch_taken_0x35dc4c) {
            ctx->pc = 0x35DC38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dc38;
        }
    }
    ctx->pc = 0x35DC54u;
    // 0x35dc54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc58: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35dc58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35dc5c: 0x0  nop
    ctx->pc = 0x35dc5cu;
    // NOP
label_35dc60:
    // 0x35dc60: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35dc60u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35dc64: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35dc64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35dc68: 0x0  nop
    ctx->pc = 0x35dc68u;
    // NOP
    // 0x35dc6c: 0x0  nop
    ctx->pc = 0x35dc6cu;
    // NOP
    // 0x35dc70: 0x0  nop
    ctx->pc = 0x35dc70u;
    // NOP
    // 0x35dc74: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DC74u;
    {
        const bool branch_taken_0x35dc74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dc74) {
            ctx->pc = 0x35DC60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dc60;
        }
    }
    ctx->pc = 0x35DC7Cu;
label_35dc7c:
    // 0x35dc7c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc80: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35dc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35dc84: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x35dc84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35dc88: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35dc88u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35dc8c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35dc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc90: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35dc90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35dc94: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dc94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dc98: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x35dc98u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x35dc9c: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35dc9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35dca0: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x35dca0u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 21)); // MMIO: 0x1000d410
    // 0x35dca4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35dca4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35dca8: 0xb1043  sra         $v0, $t3, 1
    ctx->pc = 0x35dca8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 1));
    // 0x35dcac: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x35dcacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x35dcb0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35dcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x35dcb4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35dcb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35dcb8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35dcb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x35dcbc: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35dcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35dcc0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x35dcc0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35dcc4: 0xf  sync
    ctx->pc = 0x35dcc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dcc8: 0x40f  sync.p
    ctx->pc = 0x35dcc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dccc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35dcccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x35dcd0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35dcd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35dcd4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35DCD4u;
    {
        const bool branch_taken_0x35dcd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DCD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DCD4u;
        // 0x35dcd8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dcd4) {
            ctx->pc = 0x35DD2Cu;
            goto label_35dd2c;
        }
    }
    ctx->pc = 0x35DCDCu;
    // 0x35dcdc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35dcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35dce0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35dce0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x35dce4: 0xf  sync
    ctx->pc = 0x35dce4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dce8: 0x40f  sync.p
    ctx->pc = 0x35dce8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35dcec:
    // 0x35dcec: 0x0  nop
    ctx->pc = 0x35dcecu;
    // NOP
    // 0x35dcf0: 0x0  nop
    ctx->pc = 0x35dcf0u;
    // NOP
    // 0x35dcf4: 0x0  nop
    ctx->pc = 0x35dcf4u;
    // NOP
    // 0x35dcf8: 0x0  nop
    ctx->pc = 0x35dcf8u;
    // NOP
    // 0x35dcfc: 0x0  nop
    ctx->pc = 0x35dcfcu;
    // NOP
    // 0x35dd00: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DD00u;
    {
        const bool branch_taken_0x35dd00 = (false);
        if (branch_taken_0x35dd00) {
            ctx->pc = 0x35DCECu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dcec;
        }
    }
    ctx->pc = 0x35DD08u;
    // 0x35dd08: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35dd08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd0c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35dd0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35dd10:
    // 0x35dd10: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35dd10u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35dd14: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35dd14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35dd18: 0x0  nop
    ctx->pc = 0x35dd18u;
    // NOP
    // 0x35dd1c: 0x0  nop
    ctx->pc = 0x35dd1cu;
    // NOP
    // 0x35dd20: 0x0  nop
    ctx->pc = 0x35dd20u;
    // NOP
    // 0x35dd24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DD24u;
    {
        const bool branch_taken_0x35dd24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35dd24) {
            ctx->pc = 0x35DD10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dd10;
        }
    }
    ctx->pc = 0x35DD2Cu;
label_35dd2c:
    // 0x35dd2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd30: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35dd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35dd34: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x35dd34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35dd38: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35dd38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd3c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35dd3cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x35dd40: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x35dd40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x35dd44: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x35dd44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x35dd48: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35dd48u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x35dd4c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35dd4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd50: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x35dd50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x35dd54: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35dd54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd58: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x35dd58u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x35dd5c: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x35dd5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x35dd60: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x35dd60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x35dd64: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x35dd64u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 11)); // MMIO: 0x1000d420
    // 0x35dd68: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x35dd68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x35dd6c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x35dd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35dd70: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x35dd70u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x35dd74: 0xf  sync
    ctx->pc = 0x35dd74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dd78: 0x40f  sync.p
    ctx->pc = 0x35dd78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dd7c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x35dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35dd80: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35dd80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35dd84: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x35DD84u;
    {
        const bool branch_taken_0x35dd84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DD84u;
        // 0x35dd88: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35dd84) {
            ctx->pc = 0x35DDDCu;
            goto label_35dddc;
        }
    }
    ctx->pc = 0x35DD8Cu;
    // 0x35dd8c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35dd8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35dd90: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35dd90u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x35dd94: 0xf  sync
    ctx->pc = 0x35dd94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35dd98: 0x40f  sync.p
    ctx->pc = 0x35dd98u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35dd9c:
    // 0x35dd9c: 0x0  nop
    ctx->pc = 0x35dd9cu;
    // NOP
    // 0x35dda0: 0x0  nop
    ctx->pc = 0x35dda0u;
    // NOP
    // 0x35dda4: 0x0  nop
    ctx->pc = 0x35dda4u;
    // NOP
    // 0x35dda8: 0x0  nop
    ctx->pc = 0x35dda8u;
    // NOP
    // 0x35ddac: 0x0  nop
    ctx->pc = 0x35ddacu;
    // NOP
    // 0x35ddb0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DDB0u;
    {
        const bool branch_taken_0x35ddb0 = (false);
        if (branch_taken_0x35ddb0) {
            ctx->pc = 0x35DD9Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35dd9c;
        }
    }
    ctx->pc = 0x35DDB8u;
    // 0x35ddb8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35ddb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35ddbc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35ddbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35ddc0:
    // 0x35ddc0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35ddc4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35ddc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35ddc8: 0x0  nop
    ctx->pc = 0x35ddc8u;
    // NOP
    // 0x35ddcc: 0x0  nop
    ctx->pc = 0x35ddccu;
    // NOP
    // 0x35ddd0: 0x0  nop
    ctx->pc = 0x35ddd0u;
    // NOP
    // 0x35ddd4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DDD4u;
    {
        const bool branch_taken_0x35ddd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ddd4) {
            ctx->pc = 0x35DDC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ddc0;
        }
    }
    ctx->pc = 0x35DDDCu;
label_35dddc:
    // 0x35dddc: 0xb1043  sra         $v0, $t3, 1
    ctx->pc = 0x35dddcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 1));
    // 0x35dde0: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x35dde0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x35dde4: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x35dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x35dde8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x35dde8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ddec: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x35ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x35ddf0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x35ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x35ddf4: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x35ddf4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x35ddf8: 0x19600215  blez        $t3, . + 4 + (0x215 << 2)
    ctx->pc = 0x35DDF8u;
    {
        const bool branch_taken_0x35ddf8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x35DDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DDF8u;
        // 0x35ddfc: 0x693025  or          $a2, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ddf8) {
            ctx->pc = 0x35E650u;
            goto label_35e650;
        }
    }
    ctx->pc = 0x35DE00u;
    // 0x35de00: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x35de00u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x35de04: 0x1960009e  blez        $t3, . + 4 + (0x9E << 2)
    ctx->pc = 0x35DE04u;
    {
        const bool branch_taken_0x35de04 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x35DE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE04u;
        // 0x35de08: 0x3163000f  andi        $v1, $t3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de04) {
            ctx->pc = 0x35E080u;
            goto label_35e080;
        }
    }
    ctx->pc = 0x35DE0Cu;
    // 0x35de0c: 0x106000e8  beqz        $v1, . + 4 + (0xE8 << 2)
    ctx->pc = 0x35DE0Cu;
    {
        const bool branch_taken_0x35de0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE0Cu;
        // 0x35de10: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de0c) {
            ctx->pc = 0x35E1B0u;
            goto label_35e1b0;
        }
    }
    ctx->pc = 0x35DE14u;
    // 0x35de14: 0x1440009a  bnez        $v0, . + 4 + (0x9A << 2)
    ctx->pc = 0x35DE14u;
    {
        const bool branch_taken_0x35de14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DE18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE14u;
        // 0x35de18: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de14) {
            ctx->pc = 0x35E080u;
            goto label_35e080;
        }
    }
    ctx->pc = 0x35DE1Cu;
    // 0x35de1c: 0x1440004e  bnez        $v0, . + 4 + (0x4E << 2)
    ctx->pc = 0x35DE1Cu;
    {
        const bool branch_taken_0x35de1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35DE20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35DE1Cu;
        // 0x35de20: 0x2862000d  slti        $v0, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35de1c) {
            ctx->pc = 0x35DF58u;
            goto label_35df58;
        }
    }
    ctx->pc = 0x35DE24u;
    // 0x35de24: 0x104000e2  beqz        $v0, . + 4 + (0xE2 << 2)
    ctx->pc = 0x35DE24u;
    {
        const bool branch_taken_0x35de24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35de24) {
            ctx->pc = 0x35E1B0u;
            goto label_35e1b0;
        }
    }
    ctx->pc = 0x35DE2Cu;
label_35de2c:
    // 0x35de2c: 0x42000039  di
    ctx->pc = 0x35de2cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35de30: 0x40f  sync.p
    ctx->pc = 0x35de30u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35de34: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35de34u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35de38: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35de38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x35de3c: 0x0  nop
    ctx->pc = 0x35de3cu;
    // NOP
    // 0x35de40: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DE40u;
    {
        const bool branch_taken_0x35de40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35de40) {
            ctx->pc = 0x35DE2Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35de2c;
        }
    }
    ctx->pc = 0x35DE48u;
    // 0x35de48: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x35de48u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35de4c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35de4cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35de50: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35de50u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35de54: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35de54u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35de58: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35de58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35de5c: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x35de5cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35de60: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x35de60u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x35de64: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x35de64u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x35de68: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x35de68u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35de6c: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x35de6cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x35de70: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35de70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35de74: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35de74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35de78: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35de78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35de7c: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35de7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35de80: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35de80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35de84: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35de84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35de88: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35de88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35de8c: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35de8cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35de90: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35de90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35de94: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35de94u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35de98: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35de98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35de9c: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35de9cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35dea0: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35dea0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35dea4: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35dea4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35dea8: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35dea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35deac: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35deacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35deb0: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35deb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35deb4: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35deb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35deb8: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35deb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35debc: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35debcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35dec0: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35dec0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35dec4: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35dec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35dec8: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35dec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35decc: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35deccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35ded0: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35ded0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35ded4: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35ded4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35ded8: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35ded8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35dedc: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35dedcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35dee0: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35dee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35dee4: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35dee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35dee8: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35dee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35deec: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35deecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35def0: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35def0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35def4: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35def4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35def8: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35def8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35defc: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35defcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35df00: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x35df00u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35df04: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x35df04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35df08: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x35df08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35df0c: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x35df0cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35df10: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x35df10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35df14: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x35df14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35df18: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x35df18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35df1c: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x35df1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35df20: 0xf8d50080  sqc2        $vf21, 0x80($a2)
    ctx->pc = 0x35df20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35df24: 0xf8d60090  sqc2        $vf22, 0x90($a2)
    ctx->pc = 0x35df24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35df28: 0xf8d700a0  sqc2        $vf23, 0xA0($a2)
    ctx->pc = 0x35df28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35df2c: 0xf8d800b0  sqc2        $vf24, 0xB0($a2)
    ctx->pc = 0x35df2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35df30: 0xf8dc00c0  sqc2        $vf28, 0xC0($a2)
    ctx->pc = 0x35df30u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35df34: 0xf8dd00d0  sqc2        $vf29, 0xD0($a2)
    ctx->pc = 0x35df34u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35df38: 0xf8de00e0  sqc2        $vf30, 0xE0($a2)
    ctx->pc = 0x35df38u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35df3c: 0xf8df00f0  sqc2        $vf31, 0xF0($a2)
    ctx->pc = 0x35df3cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35df40: 0x42000038  ei
    ctx->pc = 0x35df40u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35df44: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x35df44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x35df48: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x35df48u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
    // 0x35df4c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x35df4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x35df50: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x35df50u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x35df54: 0x0  nop
    ctx->pc = 0x35df54u;
    // NOP
label_35df58:
    // 0x35df58: 0x42000039  di
    ctx->pc = 0x35df58u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35df5c: 0x40f  sync.p
    ctx->pc = 0x35df5cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35df60: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35df60u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35df64: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35df64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x35df68: 0x0  nop
    ctx->pc = 0x35df68u;
    // NOP
    // 0x35df6c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35DF6Cu;
    {
        const bool branch_taken_0x35df6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35df6c) {
            ctx->pc = 0x35DF58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35df58;
        }
    }
    ctx->pc = 0x35DF74u;
    // 0x35df74: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x35df74u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35df78: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35df78u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35df7c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35df7cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35df80: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35df80u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35df84: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35df84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35df88: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x35df88u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35df8c: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x35df8cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x35df90: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x35df90u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x35df94: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x35df94u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35df98: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x35df98u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x35df9c: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35df9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35dfa0: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35dfa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35dfa4: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35dfa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35dfa8: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35dfa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35dfac: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35dfacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35dfb0: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35dfb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35dfb4: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35dfb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35dfb8: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35dfb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35dfbc: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35dfbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35dfc0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35dfc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35dfc4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35dfc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35dfc8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35dfc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35dfcc: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35dfccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35dfd0: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35dfd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35dfd4: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35dfd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35dfd8: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35dfd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35dfdc: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35dfdcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35dfe0: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35dfe0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35dfe4: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35dfe4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35dfe8: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35dfe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35dfec: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35dfecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35dff0: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35dff0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35dff4: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35dff4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35dff8: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35dff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35dffc: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35dffcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e000: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35e000u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e004: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35e004u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e008: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35e008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e00c: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35e00cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e010: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35e010u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e014: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35e014u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e018: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35e018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e01c: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35e01cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e020: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35e020u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e024: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35e024u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e028: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35e028u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e02c: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x35e02cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e030: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x35e030u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e034: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x35e034u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e038: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x35e038u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e03c: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x35e03cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35e040: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x35e040u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35e044: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x35e044u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35e048: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x35e048u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35e04c: 0xf8d50080  sqc2        $vf21, 0x80($a2)
    ctx->pc = 0x35e04cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35e050: 0xf8d60090  sqc2        $vf22, 0x90($a2)
    ctx->pc = 0x35e050u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35e054: 0xf8d700a0  sqc2        $vf23, 0xA0($a2)
    ctx->pc = 0x35e054u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35e058: 0xf8d800b0  sqc2        $vf24, 0xB0($a2)
    ctx->pc = 0x35e058u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35e05c: 0xf8dc00c0  sqc2        $vf28, 0xC0($a2)
    ctx->pc = 0x35e05cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35e060: 0xf8dd00d0  sqc2        $vf29, 0xD0($a2)
    ctx->pc = 0x35e060u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35e064: 0xf8de00e0  sqc2        $vf30, 0xE0($a2)
    ctx->pc = 0x35e064u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35e068: 0xf8df00f0  sqc2        $vf31, 0xF0($a2)
    ctx->pc = 0x35e068u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35e06c: 0x42000038  ei
    ctx->pc = 0x35e06cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e070: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x35e070u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35e074: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x35e074u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x35e078: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x35e078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x35e07c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x35e07cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_35e080:
    // 0x35e080: 0x42000039  di
    ctx->pc = 0x35e080u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e084: 0x40f  sync.p
    ctx->pc = 0x35e084u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e088: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35e088u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35e08c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35e08cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x35e090: 0x0  nop
    ctx->pc = 0x35e090u;
    // NOP
    // 0x35e094: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E094u;
    {
        const bool branch_taken_0x35e094 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e094) {
            ctx->pc = 0x35E080u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e080;
        }
    }
    ctx->pc = 0x35E09Cu;
    // 0x35e09c: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x35e09cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35e0a0: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e0a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e0a4: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e0a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e0a8: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35e0a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35e0ac: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35e0acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35e0b0: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x35e0b0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35e0b4: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x35e0b4u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x35e0b8: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x35e0b8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x35e0bc: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x35e0bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35e0c0: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x35e0c0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x35e0c4: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35e0c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35e0c8: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35e0c8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35e0cc: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35e0ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35e0d0: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35e0d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35e0d4: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e0d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e0d8: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e0d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e0dc: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e0dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e0e0: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e0e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e0e4: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e0e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e0e8: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e0e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e0ec: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e0ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e0f0: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e0f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e0f4: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35e0f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e0f8: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35e0f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e0fc: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35e0fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e100: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35e100u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e104: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35e104u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e108: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35e108u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e10c: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35e10cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e110: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35e110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e114: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35e114u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e118: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35e118u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e11c: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35e11cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e120: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35e120u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e124: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35e124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e128: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35e128u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e12c: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35e12cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e130: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35e130u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e134: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35e134u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e138: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35e138u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e13c: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35e13cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e140: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35e140u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e144: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35e144u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e148: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35e148u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e14c: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35e14cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e150: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35e150u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e154: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x35e154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e158: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x35e158u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e15c: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x35e15cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e160: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x35e160u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e164: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x35e164u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35e168: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x35e168u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35e16c: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x35e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35e170: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x35e170u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35e174: 0xf8d50080  sqc2        $vf21, 0x80($a2)
    ctx->pc = 0x35e174u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35e178: 0xf8d60090  sqc2        $vf22, 0x90($a2)
    ctx->pc = 0x35e178u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35e17c: 0xf8d700a0  sqc2        $vf23, 0xA0($a2)
    ctx->pc = 0x35e17cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35e180: 0xf8d800b0  sqc2        $vf24, 0xB0($a2)
    ctx->pc = 0x35e180u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35e184: 0xf8dc00c0  sqc2        $vf28, 0xC0($a2)
    ctx->pc = 0x35e184u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35e188: 0xf8dd00d0  sqc2        $vf29, 0xD0($a2)
    ctx->pc = 0x35e188u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35e18c: 0xf8de00e0  sqc2        $vf30, 0xE0($a2)
    ctx->pc = 0x35e18cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35e190: 0xf8df00f0  sqc2        $vf31, 0xF0($a2)
    ctx->pc = 0x35e190u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35e194: 0x42000038  ei
    ctx->pc = 0x35e194u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e198: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x35e198u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35e19c: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x35e19cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x35e1a0: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x35e1a0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x35e1a4: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x35e1a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35e1a8: 0x10400129  beqz        $v0, . + 4 + (0x129 << 2)
    ctx->pc = 0x35E1A8u;
    {
        const bool branch_taken_0x35e1a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E1A8u;
        // 0x35e1ac: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e1a8) {
            ctx->pc = 0x35E650u;
            goto label_35e650;
        }
    }
    ctx->pc = 0x35E1B0u;
label_35e1b0:
    // 0x35e1b0: 0x42000039  di
    ctx->pc = 0x35e1b0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e1b4: 0x40f  sync.p
    ctx->pc = 0x35e1b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e1b8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35e1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35e1bc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x35e1bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x35e1c0: 0x0  nop
    ctx->pc = 0x35e1c0u;
    // NOP
    // 0x35e1c4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E1C4u;
    {
        const bool branch_taken_0x35e1c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e1c4) {
            ctx->pc = 0x35E1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e1b0;
        }
    }
    ctx->pc = 0x35E1CCu;
    // 0x35e1cc: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x35e1ccu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x35e1d0: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e1d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e1d4: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e1d4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e1d8: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35e1d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35e1dc: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35e1dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35e1e0: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x35e1e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x35e1e4: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x35e1e4u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x35e1e8: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x35e1e8u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x35e1ec: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x35e1ecu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x35e1f0: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x35e1f0u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x35e1f4: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35e1f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35e1f8: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35e1f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35e1fc: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35e1fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35e200: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35e200u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35e204: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e204u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e208: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e208u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e20c: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e20cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e210: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e210u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e214: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e214u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e218: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e218u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e21c: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e21cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e220: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e220u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e224: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35e224u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e228: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35e228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e22c: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35e22cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e230: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35e230u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e234: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35e234u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e238: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35e238u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e23c: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35e23cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e240: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35e240u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e244: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35e244u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e248: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35e248u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e24c: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35e24cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e250: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35e250u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e254: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35e254u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e258: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35e258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e25c: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35e25cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e260: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35e260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e264: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35e264u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e268: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35e268u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e26c: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35e26cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e270: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35e270u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e274: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35e274u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e278: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35e278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e27c: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35e27cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e280: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35e280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e284: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x35e284u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e288: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x35e288u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e28c: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x35e28cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e290: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x35e290u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e294: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x35e294u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35e298: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x35e298u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35e29c: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x35e29cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35e2a0: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x35e2a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35e2a4: 0xf8d50080  sqc2        $vf21, 0x80($a2)
    ctx->pc = 0x35e2a4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35e2a8: 0xf8d60090  sqc2        $vf22, 0x90($a2)
    ctx->pc = 0x35e2a8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35e2ac: 0xf8d700a0  sqc2        $vf23, 0xA0($a2)
    ctx->pc = 0x35e2acu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35e2b0: 0xf8d800b0  sqc2        $vf24, 0xB0($a2)
    ctx->pc = 0x35e2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35e2b4: 0xf8dc00c0  sqc2        $vf28, 0xC0($a2)
    ctx->pc = 0x35e2b4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35e2b8: 0xf8dd00d0  sqc2        $vf29, 0xD0($a2)
    ctx->pc = 0x35e2b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35e2bc: 0xf8de00e0  sqc2        $vf30, 0xE0($a2)
    ctx->pc = 0x35e2bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35e2c0: 0xf8df00f0  sqc2        $vf31, 0xF0($a2)
    ctx->pc = 0x35e2c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35e2c4: 0x42000038  ei
    ctx->pc = 0x35e2c4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e2c8: 0x25250020  addiu       $a1, $t1, 0x20
    ctx->pc = 0x35e2c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x35e2cc: 0x24c40100  addiu       $a0, $a2, 0x100
    ctx->pc = 0x35e2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x35e2d0: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x35e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_35e2d4:
    // 0x35e2d4: 0x42000039  di
    ctx->pc = 0x35e2d4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e2d8: 0x40f  sync.p
    ctx->pc = 0x35e2d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e2dc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x35e2dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x35e2e0: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x35e2e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x35e2e4: 0x0  nop
    ctx->pc = 0x35e2e4u;
    // NOP
    // 0x35e2e8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E2E8u;
    {
        const bool branch_taken_0x35e2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e2e8) {
            ctx->pc = 0x35E2D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e2d4;
        }
    }
    ctx->pc = 0x35E2F0u;
    // 0x35e2f0: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x35e2f0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35e2f4: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e2f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e2f8: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e2f8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e2fc: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35e2fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35e300: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35e300u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35e304: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x35e304u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e308: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x35e308u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35e30c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x35e30cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x35e310: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x35e310u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35e314: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x35e314u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x35e318: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35e318u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35e31c: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35e31cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35e320: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35e320u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35e324: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35e324u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35e328: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e328u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e32c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e32cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e330: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e334: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e334u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e338: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e338u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e33c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e33cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e340: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e340u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e344: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e344u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e348: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35e348u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e34c: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35e34cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e350: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35e350u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e354: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35e354u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e358: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35e358u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e35c: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35e35cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e360: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35e360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e364: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35e364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e368: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35e368u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e36c: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35e36cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e370: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35e370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e374: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35e374u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e378: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35e378u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e37c: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35e37cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e380: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35e380u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e384: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35e384u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e388: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35e388u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e38c: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35e38cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e390: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35e390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e394: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35e394u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e398: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35e398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e39c: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35e39cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e3a0: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35e3a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e3a4: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35e3a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e3a8: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x35e3a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e3ac: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x35e3acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e3b0: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x35e3b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e3b4: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x35e3b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e3b8: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x35e3b8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35e3bc: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x35e3bcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35e3c0: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x35e3c0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35e3c4: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x35e3c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35e3c8: 0xf8950080  sqc2        $vf21, 0x80($a0)
    ctx->pc = 0x35e3c8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35e3cc: 0xf8960090  sqc2        $vf22, 0x90($a0)
    ctx->pc = 0x35e3ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35e3d0: 0xf89700a0  sqc2        $vf23, 0xA0($a0)
    ctx->pc = 0x35e3d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35e3d4: 0xf89800b0  sqc2        $vf24, 0xB0($a0)
    ctx->pc = 0x35e3d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35e3d8: 0xf89c00c0  sqc2        $vf28, 0xC0($a0)
    ctx->pc = 0x35e3d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35e3dc: 0xf89d00d0  sqc2        $vf29, 0xD0($a0)
    ctx->pc = 0x35e3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35e3e0: 0xf89e00e0  sqc2        $vf30, 0xE0($a0)
    ctx->pc = 0x35e3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35e3e4: 0xf89f00f0  sqc2        $vf31, 0xF0($a0)
    ctx->pc = 0x35e3e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35e3e8: 0x42000038  ei
    ctx->pc = 0x35e3e8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e3ec: 0x25250040  addiu       $a1, $t1, 0x40
    ctx->pc = 0x35e3ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x35e3f0: 0x24c40200  addiu       $a0, $a2, 0x200
    ctx->pc = 0x35e3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x35e3f4: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x35e3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_35e3f8:
    // 0x35e3f8: 0x42000039  di
    ctx->pc = 0x35e3f8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e3fc: 0x40f  sync.p
    ctx->pc = 0x35e3fcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e400: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x35e400u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x35e404: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x35e404u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x35e408: 0x0  nop
    ctx->pc = 0x35e408u;
    // NOP
    // 0x35e40c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E40Cu;
    {
        const bool branch_taken_0x35e40c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e40c) {
            ctx->pc = 0x35E3F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e3f8;
        }
    }
    ctx->pc = 0x35E414u;
    // 0x35e414: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x35e414u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35e418: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e418u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e41c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e41cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e420: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35e420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35e424: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35e424u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35e428: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x35e428u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e42c: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x35e42cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35e430: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x35e430u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x35e434: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x35e434u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35e438: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x35e438u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x35e43c: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35e43cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35e440: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35e440u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35e444: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35e444u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35e448: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35e448u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35e44c: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e44cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e450: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e450u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e454: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e454u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e458: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e458u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e45c: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e45cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e460: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e460u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e464: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e464u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e468: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e468u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e46c: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35e46cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e470: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35e470u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e474: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35e474u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e478: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35e478u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e47c: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35e47cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e480: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35e480u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e484: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35e484u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e488: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35e488u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e48c: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35e48cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e490: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35e490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e494: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35e494u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e498: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35e498u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e49c: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35e49cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e4a0: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35e4a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e4a4: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35e4a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e4a8: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35e4a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e4ac: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35e4acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e4b0: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35e4b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e4b4: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35e4b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e4b8: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35e4b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e4bc: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35e4bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e4c0: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35e4c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e4c4: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35e4c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e4c8: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35e4c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e4cc: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x35e4ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e4d0: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x35e4d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e4d4: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x35e4d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e4d8: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x35e4d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e4dc: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x35e4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35e4e0: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x35e4e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35e4e4: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x35e4e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35e4e8: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x35e4e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35e4ec: 0xf8950080  sqc2        $vf21, 0x80($a0)
    ctx->pc = 0x35e4ecu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35e4f0: 0xf8960090  sqc2        $vf22, 0x90($a0)
    ctx->pc = 0x35e4f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35e4f4: 0xf89700a0  sqc2        $vf23, 0xA0($a0)
    ctx->pc = 0x35e4f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35e4f8: 0xf89800b0  sqc2        $vf24, 0xB0($a0)
    ctx->pc = 0x35e4f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35e4fc: 0xf89c00c0  sqc2        $vf28, 0xC0($a0)
    ctx->pc = 0x35e4fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35e500: 0xf89d00d0  sqc2        $vf29, 0xD0($a0)
    ctx->pc = 0x35e500u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35e504: 0xf89e00e0  sqc2        $vf30, 0xE0($a0)
    ctx->pc = 0x35e504u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35e508: 0xf89f00f0  sqc2        $vf31, 0xF0($a0)
    ctx->pc = 0x35e508u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35e50c: 0x42000038  ei
    ctx->pc = 0x35e50cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e510: 0x25250060  addiu       $a1, $t1, 0x60
    ctx->pc = 0x35e510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x35e514: 0x24c40300  addiu       $a0, $a2, 0x300
    ctx->pc = 0x35e514u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 768));
    // 0x35e518: 0x250200c0  addiu       $v0, $t0, 0xC0
    ctx->pc = 0x35e518u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
label_35e51c:
    // 0x35e51c: 0x42000039  di
    ctx->pc = 0x35e51cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e520: 0x40f  sync.p
    ctx->pc = 0x35e520u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e524: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x35e524u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x35e528: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x35e528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x35e52c: 0x0  nop
    ctx->pc = 0x35e52cu;
    // NOP
    // 0x35e530: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E530u;
    {
        const bool branch_taken_0x35e530 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e530) {
            ctx->pc = 0x35E51Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e51c;
        }
    }
    ctx->pc = 0x35E538u;
    // 0x35e538: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x35e538u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x35e53c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e53cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e540: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e540u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e544: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x35e544u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x35e548: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x35e548u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x35e54c: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x35e54cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35e550: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x35e550u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x35e554: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x35e554u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x35e558: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x35e558u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x35e55c: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x35e55cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x35e560: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x35e560u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x35e564: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x35e564u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x35e568: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x35e568u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x35e56c: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x35e56cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x35e570: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e570u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e574: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e574u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e578: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e578u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e57c: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e57cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e580: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e580u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e584: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e584u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e588: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e588u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e58c: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e58cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e590: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x35e590u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e594: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x35e594u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e598: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x35e598u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e59c: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x35e59cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e5a0: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x35e5a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x35e5a4: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x35e5a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x35e5a8: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x35e5a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x35e5ac: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x35e5acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x35e5b0: 0x4bd2a56c  vsub.xyz    $vf21, $vf20, $vf18
    ctx->pc = 0x35e5b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e5b4: 0x4bd2a5a8  vadd.xyz    $vf22, $vf20, $vf18
    ctx->pc = 0x35e5b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e5b8: 0x4bd2a5e8  vadd.xyz    $vf23, $vf20, $vf18
    ctx->pc = 0x35e5b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e5bc: 0x4bd2a62c  vsub.xyz    $vf24, $vf20, $vf18
    ctx->pc = 0x35e5bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e5c0: 0x4bd3ad6c  vsub.xyz    $vf21, $vf21, $vf19
    ctx->pc = 0x35e5c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[21], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[21] = PS2_VBLEND(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x35e5c4: 0x4bd3b5ac  vsub.xyz    $vf22, $vf22, $vf19
    ctx->pc = 0x35e5c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[22], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[22] = PS2_VBLEND(ctx->vu0_vf[22], res, _mm_castsi128_ps(mask)); }
    // 0x35e5c8: 0x4bd3bde8  vadd.xyz    $vf23, $vf23, $vf19
    ctx->pc = 0x35e5c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[23], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[23] = PS2_VBLEND(ctx->vu0_vf[23], res, _mm_castsi128_ps(mask)); }
    // 0x35e5cc: 0x4bd3c628  vadd.xyz    $vf24, $vf24, $vf19
    ctx->pc = 0x35e5ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[24], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[24] = PS2_VBLEND(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x35e5d0: 0x4bd9df2c  vsub.xyz    $vf28, $vf27, $vf25
    ctx->pc = 0x35e5d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e5d4: 0x4bd9df68  vadd.xyz    $vf29, $vf27, $vf25
    ctx->pc = 0x35e5d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e5d8: 0x4bd9dfa8  vadd.xyz    $vf30, $vf27, $vf25
    ctx->pc = 0x35e5d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e5dc: 0x4bd9dfec  vsub.xyz    $vf31, $vf27, $vf25
    ctx->pc = 0x35e5dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e5e0: 0x4bdae72c  vsub.xyz    $vf28, $vf28, $vf26
    ctx->pc = 0x35e5e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[28], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[28] = PS2_VBLEND(ctx->vu0_vf[28], res, _mm_castsi128_ps(mask)); }
    // 0x35e5e4: 0x4bdaef6c  vsub.xyz    $vf29, $vf29, $vf26
    ctx->pc = 0x35e5e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[29], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[29] = PS2_VBLEND(ctx->vu0_vf[29], res, _mm_castsi128_ps(mask)); }
    // 0x35e5e8: 0x4bdaf7a8  vadd.xyz    $vf30, $vf30, $vf26
    ctx->pc = 0x35e5e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[30], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[30] = PS2_VBLEND(ctx->vu0_vf[30], res, _mm_castsi128_ps(mask)); }
    // 0x35e5ec: 0x4bdaffe8  vadd.xyz    $vf31, $vf31, $vf26
    ctx->pc = 0x35e5ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[31], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = PS2_VBLEND(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x35e5f0: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x35e5f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e5f4: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x35e5f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e5f8: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x35e5f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e5fc: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x35e5fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e600: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x35e600u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x35e604: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x35e604u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x35e608: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x35e608u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x35e60c: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x35e60cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x35e610: 0xf8950080  sqc2        $vf21, 0x80($a0)
    ctx->pc = 0x35e610u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[21]));
    // 0x35e614: 0xf8960090  sqc2        $vf22, 0x90($a0)
    ctx->pc = 0x35e614u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x35e618: 0xf89700a0  sqc2        $vf23, 0xA0($a0)
    ctx->pc = 0x35e618u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[23]));
    // 0x35e61c: 0xf89800b0  sqc2        $vf24, 0xB0($a0)
    ctx->pc = 0x35e61cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x35e620: 0xf89c00c0  sqc2        $vf28, 0xC0($a0)
    ctx->pc = 0x35e620u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[28]));
    // 0x35e624: 0xf89d00d0  sqc2        $vf29, 0xD0($a0)
    ctx->pc = 0x35e624u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[29]));
    // 0x35e628: 0xf89e00e0  sqc2        $vf30, 0xE0($a0)
    ctx->pc = 0x35e628u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[30]));
    // 0x35e62c: 0xf89f00f0  sqc2        $vf31, 0xF0($a0)
    ctx->pc = 0x35e62cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[31]));
    // 0x35e630: 0x42000038  ei
    ctx->pc = 0x35e630u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e634: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x35e634u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x35e638: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x35e638u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x35e63c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x35e63cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x35e640: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x35e640u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x35e644: 0x1440feda  bnez        $v0, . + 4 + (-0x126 << 2)
    ctx->pc = 0x35E644u;
    {
        const bool branch_taken_0x35e644 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35E648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E644u;
        // 0x35e648: 0x25080100  addiu       $t0, $t0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e644) {
            ctx->pc = 0x35E1B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e1b0;
        }
    }
    ctx->pc = 0x35E64Cu;
    // 0x35e64c: 0x0  nop
    ctx->pc = 0x35e64cu;
    // NOP
label_35e650:
    // 0x35e650: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e654: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35e654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35e658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35e658u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x35e65c: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35e65cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35e660: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x35E660u;
    {
        const bool branch_taken_0x35e660 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E660u;
        // 0x35e664: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e660) {
            ctx->pc = 0x35E698u;
            goto label_35e698;
        }
    }
    ctx->pc = 0x35E668u;
    // 0x35e668: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x35e668u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35e66c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35e66cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35e670: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35e670u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35e674: 0xf  sync
    ctx->pc = 0x35e674u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e678: 0x40f  sync.p
    ctx->pc = 0x35e678u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35e67c:
    // 0x35e67c: 0x0  nop
    ctx->pc = 0x35e67cu;
    // NOP
    // 0x35e680: 0x0  nop
    ctx->pc = 0x35e680u;
    // NOP
    // 0x35e684: 0x0  nop
    ctx->pc = 0x35e684u;
    // NOP
    // 0x35e688: 0x0  nop
    ctx->pc = 0x35e688u;
    // NOP
    // 0x35e68c: 0x0  nop
    ctx->pc = 0x35e68cu;
    // NOP
    // 0x35e690: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E690u;
    {
        const bool branch_taken_0x35e690 = (false);
        if (branch_taken_0x35e690) {
            ctx->pc = 0x35E67Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e67c;
        }
    }
    ctx->pc = 0x35E698u;
label_35e698:
    // 0x35e698: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e69c: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x35e69cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x35e6a0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x35e6a0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x35e6a4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x35e6a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x35e6a8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x35E6A8u;
    {
        const bool branch_taken_0x35e6a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E6ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E6A8u;
        // 0x35e6ac: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e6a8) {
            ctx->pc = 0x35E704u;
            goto label_35e704;
        }
    }
    ctx->pc = 0x35E6B0u;
    // 0x35e6b0: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x35e6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x35e6b4: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x35e6b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x35e6b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x35e6b8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x35e6bc: 0xf  sync
    ctx->pc = 0x35e6bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e6c0: 0x40f  sync.p
    ctx->pc = 0x35e6c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35e6c4:
    // 0x35e6c4: 0x0  nop
    ctx->pc = 0x35e6c4u;
    // NOP
    // 0x35e6c8: 0x0  nop
    ctx->pc = 0x35e6c8u;
    // NOP
    // 0x35e6cc: 0x0  nop
    ctx->pc = 0x35e6ccu;
    // NOP
    // 0x35e6d0: 0x0  nop
    ctx->pc = 0x35e6d0u;
    // NOP
    // 0x35e6d4: 0x0  nop
    ctx->pc = 0x35e6d4u;
    // NOP
    // 0x35e6d8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E6D8u;
    {
        const bool branch_taken_0x35e6d8 = (false);
        if (branch_taken_0x35e6d8) {
            ctx->pc = 0x35E6C4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e6c4;
        }
    }
    ctx->pc = 0x35E6E0u;
    // 0x35e6e0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35e6e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35e6e4: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x35e6e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_35e6e8:
    // 0x35e6e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x35e6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x35e6ec: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x35e6ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x35e6f0: 0x0  nop
    ctx->pc = 0x35e6f0u;
    // NOP
    // 0x35e6f4: 0x0  nop
    ctx->pc = 0x35e6f4u;
    // NOP
    // 0x35e6f8: 0x0  nop
    ctx->pc = 0x35e6f8u;
    // NOP
    // 0x35e6fc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E6FCu;
    {
        const bool branch_taken_0x35e6fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e6fc) {
            ctx->pc = 0x35E6E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e6e8;
        }
    }
    ctx->pc = 0x35E704u;
label_35e704:
    // 0x35e704: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e708: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x35e708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x35e70c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x35e70cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x35e710: 0xb3043  sra         $a2, $t3, 1
    ctx->pc = 0x35e710u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 1));
    // 0x35e714: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35e714u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x35e718: 0xcb2021  addu        $a0, $a2, $t3
    ctx->pc = 0x35e718u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x35e71c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35e71cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35e720: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x35e720u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x35e724: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x35e724u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x35e728: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e728u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e72c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x35e72cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x35e730: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x35e730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x35e734: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x35e734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x35e738: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x35e738u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x35e73c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x35e73cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x35e740: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x35e740u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x35e744: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x35e744u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 12)); // MMIO: 0x1000d020
    // 0x35e748: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x35e748u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x35e74c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x35e74cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x35e750: 0xf  sync
    ctx->pc = 0x35e750u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e754: 0x40f  sync.p
    ctx->pc = 0x35e754u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e758: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x35e758u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x35e75c: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x35e75cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x35e760: 0x2368821  addu        $s1, $s1, $s6
    ctx->pc = 0x35e760u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 22)));
    // 0x35e764: 0x2a6a821  addu        $s5, $s5, $a2
    ctx->pc = 0x35e764u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 6)));
    // 0x35e768: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x35e768u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e76c: 0x0  nop
    ctx->pc = 0x35e76cu;
    // NOP
label_35e770:
    // 0x35e770: 0x1a4001fd  blez        $s2, . + 4 + (0x1FD << 2)
    ctx->pc = 0x35E770u;
    {
        const bool branch_taken_0x35e770 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x35E774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E770u;
        // 0x35e774: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e770) {
            ctx->pc = 0x35EF68u;
            goto label_35ef68;
        }
    }
    ctx->pc = 0x35E778u;
    // 0x35e778: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x35e778u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35e77c: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x35e77cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35e780: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x35e780u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x35e784: 0x72880  sll         $a1, $a3, 2
    ctx->pc = 0x35e784u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x35e788: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x35e788u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35e78c: 0x10800068  beqz        $a0, . + 4 + (0x68 << 2)
    ctx->pc = 0x35E78Cu;
    {
        const bool branch_taken_0x35e78c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E78Cu;
        // 0x35e790: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e78c) {
            ctx->pc = 0x35E930u;
            goto label_35e930;
        }
    }
    ctx->pc = 0x35E794u;
    // 0x35e794: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x35e794u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35e798: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x35E798u;
    {
        const bool branch_taken_0x35e798 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E798u;
        // 0x35e79c: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e798) {
            ctx->pc = 0x35E8ACu;
            goto label_35e8ac;
        }
    }
    ctx->pc = 0x35E7A0u;
    // 0x35e7a0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x35E7A0u;
    {
        const bool branch_taken_0x35e7a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35e7a0) {
            ctx->pc = 0x35E7A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35E7A0u;
            // 0x35e7a4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35E830u;
            goto label_35e830;
        }
    }
    ctx->pc = 0x35E7A8u;
    // 0x35e7a8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x35e7a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35e7ac: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35e7acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35e7b0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x35e7b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35e7b4: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35e7b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35e7b8:
    // 0x35e7b8: 0x42000039  di
    ctx->pc = 0x35e7b8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e7bc: 0x40f  sync.p
    ctx->pc = 0x35e7bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e7c0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35e7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35e7c4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35e7c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35e7c8: 0x0  nop
    ctx->pc = 0x35e7c8u;
    // NOP
    // 0x35e7cc: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E7CCu;
    {
        const bool branch_taken_0x35e7cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e7cc) {
            ctx->pc = 0x35E7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e7b8;
        }
    }
    ctx->pc = 0x35E7D4u;
    // 0x35e7d4: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x35e7d4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e7d8: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e7d8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e7dc: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e7dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e7e0: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35e7e0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35e7e4: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e7e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e7e8: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e7e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e7ec: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e7ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e7f0: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e7f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e7f4: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e7f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e7f8: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e7f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e7fc: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e7fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e800: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e804: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35e804u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e808: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35e808u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e80c: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35e80cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e810: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35e810u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e814: 0x42000038  ei
    ctx->pc = 0x35e814u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e818: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x35e818u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x35e81c: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35e81cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35e820: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35e820u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35e824: 0x264dffff  addiu       $t5, $s2, -0x1
    ctx->pc = 0x35e824u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x35e828: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35e828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35e82c: 0x0  nop
    ctx->pc = 0x35e82cu;
    // NOP
label_35e830:
    // 0x35e830: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35e830u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35e834: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35e834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35e838: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35e838u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35e83c:
    // 0x35e83c: 0x42000039  di
    ctx->pc = 0x35e83cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e840: 0x40f  sync.p
    ctx->pc = 0x35e840u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e844: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35e844u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35e848: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35e848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35e84c: 0x0  nop
    ctx->pc = 0x35e84cu;
    // NOP
    // 0x35e850: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E850u;
    {
        const bool branch_taken_0x35e850 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e850) {
            ctx->pc = 0x35E83Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e83c;
        }
    }
    ctx->pc = 0x35E858u;
    // 0x35e858: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x35e858u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e85c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e85cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e860: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e860u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e864: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35e864u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35e868: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e868u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e86c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e86cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e870: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e870u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e874: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e874u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e878: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e878u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e87c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e87cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e880: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e884: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e884u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e888: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35e888u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e88c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35e88cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e890: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35e890u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e894: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35e894u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e898: 0x42000038  ei
    ctx->pc = 0x35e898u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e89c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35e89cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35e8a0: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35e8a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35e8a4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35e8a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35e8a8: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x35e8a8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_35e8ac:
    // 0x35e8ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35e8acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35e8b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35e8b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35e8b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35e8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35e8b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35e8b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35e8bc:
    // 0x35e8bc: 0x42000039  di
    ctx->pc = 0x35e8bcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e8c0: 0x40f  sync.p
    ctx->pc = 0x35e8c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e8c4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35e8c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35e8c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35e8c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35e8cc: 0x0  nop
    ctx->pc = 0x35e8ccu;
    // NOP
    // 0x35e8d0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E8D0u;
    {
        const bool branch_taken_0x35e8d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e8d0) {
            ctx->pc = 0x35E8BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e8bc;
        }
    }
    ctx->pc = 0x35E8D8u;
    // 0x35e8d8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x35e8d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e8dc: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e8dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e8e0: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e8e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e8e4: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35e8e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35e8e8: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e8e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e8ec: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e8ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e8f0: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e8f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e8f4: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e8f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e8f8: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e8f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e8fc: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e8fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e900: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e900u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e904: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e904u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e908: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35e908u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e90c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35e90cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e910: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35e910u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e914: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35e914u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e918: 0x42000038  ei
    ctx->pc = 0x35e918u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e91c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35e91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35e920: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35e920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35e924: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x35e924u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x35e928: 0x11a0018f  beqz        $t5, . + 4 + (0x18F << 2)
    ctx->pc = 0x35E928u;
    {
        const bool branch_taken_0x35e928 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x35E92Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35E928u;
        // 0x35e92c: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35e928) {
            ctx->pc = 0x35EF68u;
            goto label_35ef68;
        }
    }
    ctx->pc = 0x35E930u;
label_35e930:
    // 0x35e930: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35e930u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35e934: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35e934u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35e938: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35e938u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35e93c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35e93cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35e940:
    // 0x35e940: 0x42000039  di
    ctx->pc = 0x35e940u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e944: 0x40f  sync.p
    ctx->pc = 0x35e944u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e948: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35e948u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35e94c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35e94cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35e950: 0x0  nop
    ctx->pc = 0x35e950u;
    // NOP
    // 0x35e954: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E954u;
    {
        const bool branch_taken_0x35e954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e954) {
            ctx->pc = 0x35E940u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e940;
        }
    }
    ctx->pc = 0x35E95Cu;
    // 0x35e95c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x35e95cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e960: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e960u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e964: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e964u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e968: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35e968u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35e96c: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e96cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e970: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e970u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e974: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e974u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e978: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e978u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e97c: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e97cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e980: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e980u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e984: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35e984u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e988: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35e988u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e98c: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35e98cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35e990: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35e990u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35e994: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35e994u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35e998: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35e998u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35e99c: 0x42000038  ei
    ctx->pc = 0x35e99cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35e9a0: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35e9a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35e9a4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35e9a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35e9a8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35e9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35e9ac: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35e9acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35e9b0: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35e9b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35e9b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35e9b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35e9b8: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35e9b8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35e9bc:
    // 0x35e9bc: 0x42000039  di
    ctx->pc = 0x35e9bcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35e9c0: 0x40f  sync.p
    ctx->pc = 0x35e9c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35e9c4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35e9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35e9c8: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35e9c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35e9cc: 0x0  nop
    ctx->pc = 0x35e9ccu;
    // NOP
    // 0x35e9d0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35E9D0u;
    {
        const bool branch_taken_0x35e9d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e9d0) {
            ctx->pc = 0x35E9BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e9bc;
        }
    }
    ctx->pc = 0x35E9D8u;
    // 0x35e9d8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x35e9d8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e9dc: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35e9dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35e9e0: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35e9e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35e9e4: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35e9e4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35e9e8: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35e9e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e9ec: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35e9ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35e9f0: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35e9f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35e9f4: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35e9f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35e9f8: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35e9f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35e9fc: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35e9fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ea00: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35ea00u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ea04: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35ea04u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ea08: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35ea08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ea0c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35ea0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35ea10: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35ea10u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35ea14: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35ea14u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35ea18: 0x42000038  ei
    ctx->pc = 0x35ea18u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ea1c: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35ea1cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35ea20: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35ea20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35ea24: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ea24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ea28: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ea28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ea2c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35ea2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35ea30: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ea30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ea34: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35ea34u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35ea38:
    // 0x35ea38: 0x42000039  di
    ctx->pc = 0x35ea38u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ea3c: 0x40f  sync.p
    ctx->pc = 0x35ea3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ea40: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ea40u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ea44: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35ea44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35ea48: 0x0  nop
    ctx->pc = 0x35ea48u;
    // NOP
    // 0x35ea4c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EA4Cu;
    {
        const bool branch_taken_0x35ea4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ea4c) {
            ctx->pc = 0x35EA38u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ea38;
        }
    }
    ctx->pc = 0x35EA54u;
    // 0x35ea54: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x35ea54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ea58: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ea58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ea5c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35ea5cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ea60: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35ea60u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ea64: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35ea64u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ea68: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35ea68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ea6c: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35ea6cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ea70: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35ea70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ea74: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35ea74u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ea78: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35ea78u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ea7c: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35ea7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ea80: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35ea80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ea84: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35ea84u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ea88: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35ea88u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35ea8c: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35ea8cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35ea90: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35ea90u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35ea94: 0x42000038  ei
    ctx->pc = 0x35ea94u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ea98: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35ea98u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35ea9c: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35ea9cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35eaa0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35eaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35eaa4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35eaa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35eaa8: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x35eaa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x35eaac: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35eaacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eab0: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x35eab0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_35eab4:
    // 0x35eab4: 0x42000039  di
    ctx->pc = 0x35eab4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35eab8: 0x40f  sync.p
    ctx->pc = 0x35eab8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35eabc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35eabcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35eac0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x35eac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x35eac4: 0x0  nop
    ctx->pc = 0x35eac4u;
    // NOP
    // 0x35eac8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EAC8u;
    {
        const bool branch_taken_0x35eac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eac8) {
            ctx->pc = 0x35EAB4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35eab4;
        }
    }
    ctx->pc = 0x35EAD0u;
    // 0x35ead0: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x35ead0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35ead4: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ead4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ead8: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35ead8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35eadc: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35eadcu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35eae0: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35eae0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35eae4: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35eae4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35eae8: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35eae8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35eaec: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35eaecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35eaf0: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35eaf0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35eaf4: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35eaf4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35eaf8: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35eaf8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35eafc: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35eafcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35eb00: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35eb00u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35eb04: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35eb04u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35eb08: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35eb08u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35eb0c: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35eb0cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35eb10: 0x42000038  ei
    ctx->pc = 0x35eb10u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35eb14: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35eb14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35eb18: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x35eb18u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x35eb1c: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x35eb1cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x35eb20: 0x15a0ff83  bnez        $t5, . + 4 + (-0x7D << 2)
    ctx->pc = 0x35EB20u;
    {
        const bool branch_taken_0x35eb20 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB20u;
        // 0x35eb24: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb20) {
            ctx->pc = 0x35E930u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35e930;
        }
    }
    ctx->pc = 0x35EB28u;
    // 0x35eb28: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x35EB28u;
    {
        const bool branch_taken_0x35eb28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EB28u;
        // 0x35eb2c: 0x7bb000f0  lq          $s0, 0xF0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35eb28) {
            ctx->pc = 0x35EF6Cu;
            goto label_35ef6c;
        }
    }
    ctx->pc = 0x35EB30u;
label_35eb30:
    // 0x35eb30: 0x6ac80007  ldl         $t0, 0x7($s6)
    ctx->pc = 0x35eb30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x35eb34: 0x6ec80000  ldr         $t0, 0x0($s6)
    ctx->pc = 0x35eb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x35eb38: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x35eb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x35eb3c: 0xb3a80017  sdl         $t0, 0x17($sp)
    ctx->pc = 0x35eb3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35eb40: 0xb7a80010  sdr         $t0, 0x10($sp)
    ctx->pc = 0x35eb40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35eb44: 0xafa20018  sw          $v0, 0x18($sp)
    ctx->pc = 0x35eb44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 2));
    // 0x35eb48: 0x6ae50007  ldl         $a1, 0x7($s7)
    ctx->pc = 0x35eb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x35eb4c: 0x6ee50000  ldr         $a1, 0x0($s7)
    ctx->pc = 0x35eb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x35eb50: 0x8ee60008  lw          $a2, 0x8($s7)
    ctx->pc = 0x35eb50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x35eb54: 0xb3a50027  sdl         $a1, 0x27($sp)
    ctx->pc = 0x35eb54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35eb58: 0xb7a50020  sdr         $a1, 0x20($sp)
    ctx->pc = 0x35eb58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35eb5c: 0xafa60028  sw          $a2, 0x28($sp)
    ctx->pc = 0x35eb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
    // 0x35eb60: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x35eb60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x35eb64: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x35eb64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x35eb68: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x35eb68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_35eb6c:
    // 0x35eb6c: 0x42000039  di
    ctx->pc = 0x35eb6cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35eb70: 0x40f  sync.p
    ctx->pc = 0x35eb70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35eb74: 0x40056000  mfc0        $a1, Status
    ctx->pc = 0x35eb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_status);
    // 0x35eb78: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x35eb78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x35eb7c: 0x0  nop
    ctx->pc = 0x35eb7cu;
    // NOP
    // 0x35eb80: 0x14a0fffa  bnez        $a1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EB80u;
    {
        const bool branch_taken_0x35eb80 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x35eb80) {
            ctx->pc = 0x35EB6Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35eb6c;
        }
    }
    ctx->pc = 0x35EB88u;
    // 0x35eb88: 0x3c063f00  lui         $a2, 0x3F00
    ctx->pc = 0x35eb88u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16128 << 16));
    // 0x35eb8c: 0x48c6a800  ctc2.ni     $a2, $vi21
    ctx->pc = 0x35eb8cu;
    { uint32_t tmp = GPR_U32(ctx, 6); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x35eb90: 0x4a0002ff  vnop
    ctx->pc = 0x35eb90u;
    // NOP operation, no action needed for VU0
    // 0x35eb94: 0x4a0002ff  vnop
    ctx->pc = 0x35eb94u;
    // NOP operation, no action needed for VU0
    // 0x35eb98: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x35eb98u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x35eb9c: 0xd8820000  lqc2        $vf2, 0x0($a0)
    ctx->pc = 0x35eb9cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35eba0: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x35eba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x35eba4: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x35eba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x35eba8: 0x42000038  ei
    ctx->pc = 0x35eba8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ebac: 0x1a4000ee  blez        $s2, . + 4 + (0xEE << 2)
    ctx->pc = 0x35EBACu;
    {
        const bool branch_taken_0x35ebac = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x35EBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBACu;
        // 0x35ebb0: 0x121023  negu        $v0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebac) {
            ctx->pc = 0x35EF68u;
            goto label_35ef68;
        }
    }
    ctx->pc = 0x35EBB4u;
    // 0x35ebb4: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x35ebb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35ebb8: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x35ebb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x35ebbc: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x35ebbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x35ebc0: 0x73080  sll         $a2, $a3, 2
    ctx->pc = 0x35ebc0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x35ebc4: 0x240682d  daddu       $t5, $s2, $zero
    ctx->pc = 0x35ebc4u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x35ebc8: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x35ebc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x35ebcc: 0x10a00068  beqz        $a1, . + 4 + (0x68 << 2)
    ctx->pc = 0x35EBCCu;
    {
        const bool branch_taken_0x35ebcc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EBD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBCCu;
        // 0x35ebd0: 0x2a0182d  daddu       $v1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebcc) {
            ctx->pc = 0x35ED70u;
            goto label_35ed70;
        }
    }
    ctx->pc = 0x35EBD4u;
    // 0x35ebd4: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x35ebd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x35ebd8: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
    ctx->pc = 0x35EBD8u;
    {
        const bool branch_taken_0x35ebd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x35EBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EBD8u;
        // 0x35ebdc: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ebd8) {
            ctx->pc = 0x35ECECu;
            goto label_35ecec;
        }
    }
    ctx->pc = 0x35EBE0u;
    // 0x35ebe0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x35EBE0u;
    {
        const bool branch_taken_0x35ebe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x35ebe0) {
            ctx->pc = 0x35EBE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x35EBE0u;
            // 0x35ebe4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x35EC70u;
            goto label_35ec70;
        }
    }
    ctx->pc = 0x35EBE8u;
    // 0x35ebe8: 0xc6a00000  lwc1        $f0, 0x0($s5)
    ctx->pc = 0x35ebe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ebec: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35ebecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35ebf0: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x35ebf0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ebf4: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35ebf4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35ebf8:
    // 0x35ebf8: 0x42000039  di
    ctx->pc = 0x35ebf8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ebfc: 0x40f  sync.p
    ctx->pc = 0x35ebfcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ec00: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ec00u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ec04: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35ec04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35ec08: 0x0  nop
    ctx->pc = 0x35ec08u;
    // NOP
    // 0x35ec0c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EC0Cu;
    {
        const bool branch_taken_0x35ec0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ec0c) {
            ctx->pc = 0x35EBF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ebf8;
        }
    }
    ctx->pc = 0x35EC14u;
    // 0x35ec14: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x35ec14u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ec18: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ec18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ec1c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35ec1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ec20: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35ec20u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ec24: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35ec24u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ec28: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35ec28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ec2c: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35ec2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ec30: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35ec30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ec34: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35ec34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ec38: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35ec38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ec3c: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35ec3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ec40: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35ec40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ec44: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35ec44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ec48: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35ec48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35ec4c: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35ec4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35ec50: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35ec50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35ec54: 0x42000038  ei
    ctx->pc = 0x35ec54u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ec58: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x35ec58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
    // 0x35ec5c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35ec5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35ec60: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35ec60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35ec64: 0x264dffff  addiu       $t5, $s2, -0x1
    ctx->pc = 0x35ec64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x35ec68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ec68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ec6c: 0x0  nop
    ctx->pc = 0x35ec6cu;
    // NOP
label_35ec70:
    // 0x35ec70: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35ec70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35ec74: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ec74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ec78: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35ec78u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35ec7c:
    // 0x35ec7c: 0x42000039  di
    ctx->pc = 0x35ec7cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ec80: 0x40f  sync.p
    ctx->pc = 0x35ec80u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ec84: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ec84u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ec88: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35ec88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35ec8c: 0x0  nop
    ctx->pc = 0x35ec8cu;
    // NOP
    // 0x35ec90: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EC90u;
    {
        const bool branch_taken_0x35ec90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ec90) {
            ctx->pc = 0x35EC7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ec7c;
        }
    }
    ctx->pc = 0x35EC98u;
    // 0x35ec98: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x35ec98u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ec9c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ec9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35eca0: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35eca0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35eca4: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35eca4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35eca8: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35eca8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ecac: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35ecacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ecb0: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35ecb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ecb4: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35ecb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ecb8: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35ecb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ecbc: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35ecbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ecc0: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35ecc0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ecc4: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35ecc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ecc8: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35ecc8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35eccc: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35ecccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35ecd0: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35ecd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35ecd4: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35ecd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35ecd8: 0x42000038  ei
    ctx->pc = 0x35ecd8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ecdc: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ecdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ece0: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35ece0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35ece4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35ece4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35ece8: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x35ece8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_35ecec:
    // 0x35ecec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ececu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ecf0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35ecf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35ecf4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ecf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ecf8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35ecf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35ecfc:
    // 0x35ecfc: 0x42000039  di
    ctx->pc = 0x35ecfcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ed00: 0x40f  sync.p
    ctx->pc = 0x35ed00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ed04: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ed04u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ed08: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35ed08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35ed0c: 0x0  nop
    ctx->pc = 0x35ed0cu;
    // NOP
    // 0x35ed10: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35ED10u;
    {
        const bool branch_taken_0x35ed10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ed10) {
            ctx->pc = 0x35ECFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ecfc;
        }
    }
    ctx->pc = 0x35ED18u;
    // 0x35ed18: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x35ed18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ed1c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ed1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ed20: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35ed20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ed24: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35ed24u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ed28: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35ed28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ed2c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35ed2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ed30: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35ed30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ed34: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35ed34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ed38: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35ed38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ed3c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35ed3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ed40: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35ed40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ed44: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35ed44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ed48: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35ed48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ed4c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35ed4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35ed50: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35ed50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35ed54: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35ed54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35ed58: 0x42000038  ei
    ctx->pc = 0x35ed58u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ed5c: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ed5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ed60: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35ed60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35ed64: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x35ed64u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x35ed68: 0x11a0007f  beqz        $t5, . + 4 + (0x7F << 2)
    ctx->pc = 0x35ED68u;
    {
        const bool branch_taken_0x35ed68 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x35ED6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35ED68u;
        // 0x35ed6c: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ed68) {
            ctx->pc = 0x35EF68u;
            goto label_35ef68;
        }
    }
    ctx->pc = 0x35ED70u;
label_35ed70:
    // 0x35ed70: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ed70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ed74: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35ed74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35ed78: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ed78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ed7c: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35ed7cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35ed80:
    // 0x35ed80: 0x42000039  di
    ctx->pc = 0x35ed80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ed84: 0x40f  sync.p
    ctx->pc = 0x35ed84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ed88: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ed88u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ed8c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35ed8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35ed90: 0x0  nop
    ctx->pc = 0x35ed90u;
    // NOP
    // 0x35ed94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35ED94u;
    {
        const bool branch_taken_0x35ed94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ed94) {
            ctx->pc = 0x35ED80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ed80;
        }
    }
    ctx->pc = 0x35ED9Cu;
    // 0x35ed9c: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x35ed9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35eda0: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35eda0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35eda4: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35eda4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35eda8: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35eda8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35edac: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35edacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35edb0: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35edb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35edb4: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35edb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35edb8: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35edb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35edbc: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35edbcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35edc0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35edc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35edc4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35edc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35edc8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35edc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35edcc: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35edccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35edd0: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35edd0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35edd4: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35edd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35edd8: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35edd8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35eddc: 0x42000038  ei
    ctx->pc = 0x35eddcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ede0: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35ede0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35ede4: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35ede4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35ede8: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ede8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35edec: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35edecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35edf0: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35edf0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35edf4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35edf4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35edf8: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35edf8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35edfc:
    // 0x35edfc: 0x42000039  di
    ctx->pc = 0x35edfcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ee00: 0x40f  sync.p
    ctx->pc = 0x35ee00u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ee04: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ee04u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ee08: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35ee08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35ee0c: 0x0  nop
    ctx->pc = 0x35ee0cu;
    // NOP
    // 0x35ee10: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EE10u;
    {
        const bool branch_taken_0x35ee10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ee10) {
            ctx->pc = 0x35EDFCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35edfc;
        }
    }
    ctx->pc = 0x35EE18u;
    // 0x35ee18: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x35ee18u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ee1c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ee1cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ee20: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35ee20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ee24: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35ee24u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ee28: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35ee28u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ee2c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35ee2cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ee30: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35ee30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ee34: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35ee34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ee38: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35ee38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ee3c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35ee3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ee40: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35ee40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ee44: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35ee44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ee48: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35ee48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ee4c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35ee4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35ee50: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35ee50u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35ee54: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35ee54u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35ee58: 0x42000038  ei
    ctx->pc = 0x35ee58u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ee5c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35ee5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35ee60: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35ee60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35ee64: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ee64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ee68: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35ee68u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35ee6c: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35ee6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35ee70: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35ee70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35ee74: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35ee74u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35ee78:
    // 0x35ee78: 0x42000039  di
    ctx->pc = 0x35ee78u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35ee7c: 0x40f  sync.p
    ctx->pc = 0x35ee7cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35ee80: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35ee80u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ee84: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35ee84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35ee88: 0x0  nop
    ctx->pc = 0x35ee88u;
    // NOP
    // 0x35ee8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EE8Cu;
    {
        const bool branch_taken_0x35ee8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ee8c) {
            ctx->pc = 0x35EE78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ee78;
        }
    }
    ctx->pc = 0x35EE94u;
    // 0x35ee94: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x35ee94u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ee98: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ee98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ee9c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35ee9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35eea0: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35eea0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35eea4: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35eea4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35eea8: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35eea8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35eeac: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35eeacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35eeb0: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35eeb0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35eeb4: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35eeb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35eeb8: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35eeb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35eebc: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35eebcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35eec0: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35eec0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35eec4: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35eec4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35eec8: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35eec8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35eecc: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35eeccu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35eed0: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35eed0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35eed4: 0x42000038  ei
    ctx->pc = 0x35eed4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35eed8: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35eed8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35eedc: 0x2138021  addu        $s0, $s0, $s3
    ctx->pc = 0x35eedcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
    // 0x35eee0: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35eee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35eee4: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x35eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x35eee8: 0xe7a00030  swc1        $f0, 0x30($sp)
    ctx->pc = 0x35eee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x35eeec: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x35eeecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x35eef0: 0xe7a10034  swc1        $f1, 0x34($sp)
    ctx->pc = 0x35eef0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
label_35eef4:
    // 0x35eef4: 0x42000039  di
    ctx->pc = 0x35eef4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x35eef8: 0x40f  sync.p
    ctx->pc = 0x35eef8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x35eefc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x35eefcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x35ef00: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x35ef00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x35ef04: 0x0  nop
    ctx->pc = 0x35ef04u;
    // NOP
    // 0x35ef08: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x35EF08u;
    {
        const bool branch_taken_0x35ef08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35ef08) {
            ctx->pc = 0x35EEF4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35eef4;
        }
    }
    ctx->pc = 0x35EF10u;
    // 0x35ef10: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x35ef10u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x35ef14: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x35ef14u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x35ef18: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x35ef18u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x35ef1c: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x35ef1cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x35ef20: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x35ef20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ef24: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x35ef24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ef28: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x35ef28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ef2c: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x35ef2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ef30: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x35ef30u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x35ef34: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x35ef34u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x35ef38: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x35ef38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x35ef3c: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x35ef3cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x35ef40: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x35ef40u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x35ef44: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x35ef44u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x35ef48: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x35ef48u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x35ef4c: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x35ef4cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x35ef50: 0x42000038  ei
    ctx->pc = 0x35ef50u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x35ef54: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x35ef54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x35ef58: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x35ef58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x35ef5c: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x35ef5cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x35ef60: 0x15a0ff83  bnez        $t5, . + 4 + (-0x7D << 2)
    ctx->pc = 0x35EF60u;
    {
        const bool branch_taken_0x35ef60 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x35EF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF60u;
        // 0x35ef64: 0x2138021  addu        $s0, $s0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ef60) {
            ctx->pc = 0x35ED70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_35ed70;
        }
    }
    ctx->pc = 0x35EF68u;
label_35ef68:
    // 0x35ef68: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x35ef68u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_35ef6c:
    // 0x35ef6c: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x35ef6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x35ef70: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x35ef70u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x35ef74: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x35ef74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x35ef78: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x35ef78u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x35ef7c: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x35ef7cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x35ef80: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x35ef80u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x35ef84: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x35ef84u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x35ef88: 0x7bbe0070  lq          $fp, 0x70($sp)
    ctx->pc = 0x35ef88u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x35ef8c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x35ef8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35ef90: 0x3e00008  jr          $ra
    ctx->pc = 0x35EF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35EF94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x35EF90u;
        // 0x35ef94: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35EF90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35EF98u;
}
