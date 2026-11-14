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

// Function: sub_00364308
// Address: 0x364308 - 0x365f40
void sub_00364308_0x364308(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00364308_0x364308");
#endif

    switch (ctx->pc) {
        case 0x36436cu: goto label_36436c;
        case 0x364398u: goto label_364398;
        case 0x3643e8u: goto label_3643e8;
        case 0x364410u: goto label_364410;
        case 0x364488u: goto label_364488;
        case 0x364550u: goto label_364550;
        case 0x36456cu: goto label_36456c;
        case 0x3645b8u: goto label_3645b8;
        case 0x3645e0u: goto label_3645e0;
        case 0x364638u: goto label_364638;
        case 0x364660u: goto label_364660;
        case 0x3646bcu: goto label_3646bc;
        case 0x3646e0u: goto label_3646e0;
        case 0x364718u: goto label_364718;
        case 0x36484cu: goto label_36484c;
        case 0x3649a8u: goto label_3649a8;
        case 0x3649e4u: goto label_3649e4;
        case 0x364a08u: goto label_364a08;
        case 0x364ab8u: goto label_364ab8;
        case 0x364b18u: goto label_364b18;
        case 0x364b40u: goto label_364b40;
        case 0x364bccu: goto label_364bcc;
        case 0x364bf0u: goto label_364bf0;
        case 0x364c7cu: goto label_364c7c;
        case 0x364ca0u: goto label_364ca0;
        case 0x364d0cu: goto label_364d0c;
        case 0x364e48u: goto label_364e48;
        case 0x364f80u: goto label_364f80;
        case 0x3650c0u: goto label_3650c0;
        case 0x3651f4u: goto label_3651f4;
        case 0x365328u: goto label_365328;
        case 0x36545cu: goto label_36545c;
        case 0x3655ccu: goto label_3655cc;
        case 0x365614u: goto label_365614;
        case 0x365638u: goto label_365638;
        case 0x365708u: goto label_365708;
        case 0x36578cu: goto label_36578c;
        case 0x365810u: goto label_365810;
        case 0x365888u: goto label_365888;
        case 0x365898u: goto label_365898;
        case 0x365918u: goto label_365918;
        case 0x365998u: goto label_365998;
        case 0x365a18u: goto label_365a18;
        case 0x365ae4u: goto label_365ae4;
        case 0x365b84u: goto label_365b84;
        case 0x365c0cu: goto label_365c0c;
        case 0x365c90u: goto label_365c90;
        case 0x365d08u: goto label_365d08;
        case 0x365d18u: goto label_365d18;
        case 0x365d98u: goto label_365d98;
        case 0x365e18u: goto label_365e18;
        case 0x365e98u: goto label_365e98;
        default: break;
    }

    ctx->pc = 0x364308u;

    // 0x364308: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x364308u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
    // 0x36430c: 0x7fb200e0  sq          $s2, 0xE0($sp)
    ctx->pc = 0x36430cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 18));
    // 0x364310: 0x7fb300d0  sq          $s3, 0xD0($sp)
    ctx->pc = 0x364310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 19));
    // 0x364314: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x364314u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364318: 0x7fb70090  sq          $s7, 0x90($sp)
    ctx->pc = 0x364318u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 23));
    // 0x36431c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x36431cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364320: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x364320u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x364324: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x364324u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364328: 0x7fb00100  sq          $s0, 0x100($sp)
    ctx->pc = 0x364328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 16));
    // 0x36432c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x36432cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364330: 0x7fb100f0  sq          $s1, 0xF0($sp)
    ctx->pc = 0x364330u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 17));
    // 0x364334: 0x7fb400c0  sq          $s4, 0xC0($sp)
    ctx->pc = 0x364334u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 20));
    // 0x364338: 0x7fb500b0  sq          $s5, 0xB0($sp)
    ctx->pc = 0x364338u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 21));
    // 0x36433c: 0x7fb600a0  sq          $s6, 0xA0($sp)
    ctx->pc = 0x36433cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 22));
    // 0x364340: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x364340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x364344: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x364344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x364348: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x364348u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x36434c: 0x8e540008  lw          $s4, 0x8($s2)
    ctx->pc = 0x36434cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x364350: 0x8e550020  lw          $s5, 0x20($s2)
    ctx->pc = 0x364350u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x364354: 0x8e500004  lw          $s0, 0x4($s2)
    ctx->pc = 0x364354u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x364358: 0x8e56001c  lw          $s6, 0x1C($s2)
    ctx->pc = 0x364358u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x36435c: 0x168205ce  bne         $s4, $v0, . + 4 + (0x5CE << 2)
    ctx->pc = 0x36435Cu;
    {
        const bool branch_taken_0x36435c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x364360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36435Cu;
        // 0x364360: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36435c) {
            ctx->pc = 0x365A98u;
            goto label_365a98;
        }
    }
    ctx->pc = 0x364364u;
    // 0x364364: 0xc0bf778  jal         func_2FDDE0
    ctx->pc = 0x364364u;
    SET_GPR_U32(ctx, 31, 0x36436Cu);
    ctx->pc = 0x364368u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x364364u;
    // 0x364368: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDDE0u, 0x364364u, 0x36436Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36436Cu;
label_36436c:
    // 0x36436c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x36436cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364370: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x364370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x364374: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x364374u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x364378: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x364378u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x36437c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x36437Cu;
    {
        const bool branch_taken_0x36437c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36437Cu;
        // 0x364380: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36437c) {
            ctx->pc = 0x3643B8u;
            goto label_3643b8;
        }
    }
    ctx->pc = 0x364384u;
    // 0x364384: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x364384u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364388: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x364388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x36438c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x36438cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x364390: 0xf  sync
    ctx->pc = 0x364390u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364394: 0x40f  sync.p
    ctx->pc = 0x364394u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_364398:
    // 0x364398: 0x0  nop
    ctx->pc = 0x364398u;
    // NOP
    // 0x36439c: 0x0  nop
    ctx->pc = 0x36439cu;
    // NOP
    // 0x3643a0: 0x0  nop
    ctx->pc = 0x3643a0u;
    // NOP
    // 0x3643a4: 0x0  nop
    ctx->pc = 0x3643a4u;
    // NOP
    // 0x3643a8: 0x0  nop
    ctx->pc = 0x3643a8u;
    // NOP
    // 0x3643ac: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3643ACu;
    {
        const bool branch_taken_0x3643ac = (false);
        if (branch_taken_0x3643ac) {
            ctx->pc = 0x364398u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364398;
        }
    }
    ctx->pc = 0x3643B4u;
    // 0x3643b4: 0x0  nop
    ctx->pc = 0x3643b4u;
    // NOP
label_3643b8:
    // 0x3643b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3643b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3643bc: 0x2a6600b8  slti        $a2, $s3, 0xB8
    ctx->pc = 0x3643bcu;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x3643c0: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x3643c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x3643c4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3643c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3643c8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3643c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3643cc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3643CCu;
    {
        const bool branch_taken_0x3643cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3643D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3643CCu;
        // 0x3643d0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3643cc) {
            ctx->pc = 0x36442Cu;
            goto label_36442c;
        }
    }
    ctx->pc = 0x3643D4u;
    // 0x3643d4: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x3643d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x3643d8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3643d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3643dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3643dcu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3643e0: 0xf  sync
    ctx->pc = 0x3643e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3643e4: 0x40f  sync.p
    ctx->pc = 0x3643e4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3643e8:
    // 0x3643e8: 0x0  nop
    ctx->pc = 0x3643e8u;
    // NOP
    // 0x3643ec: 0x0  nop
    ctx->pc = 0x3643ecu;
    // NOP
    // 0x3643f0: 0x0  nop
    ctx->pc = 0x3643f0u;
    // NOP
    // 0x3643f4: 0x0  nop
    ctx->pc = 0x3643f4u;
    // NOP
    // 0x3643f8: 0x0  nop
    ctx->pc = 0x3643f8u;
    // NOP
    // 0x3643fc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3643FCu;
    {
        const bool branch_taken_0x3643fc = (false);
        if (branch_taken_0x3643fc) {
            ctx->pc = 0x3643E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3643e8;
        }
    }
    ctx->pc = 0x364404u;
    // 0x364404: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364408: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x364408u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36440c: 0x0  nop
    ctx->pc = 0x36440cu;
    // NOP
label_364410:
    // 0x364410: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364410u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x364414: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364414u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364418: 0x0  nop
    ctx->pc = 0x364418u;
    // NOP
    // 0x36441c: 0x0  nop
    ctx->pc = 0x36441cu;
    // NOP
    // 0x364420: 0x0  nop
    ctx->pc = 0x364420u;
    // NOP
    // 0x364424: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364424u;
    {
        const bool branch_taken_0x364424 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364424) {
            ctx->pc = 0x364410u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364410;
        }
    }
    ctx->pc = 0x36442Cu;
label_36442c:
    // 0x36442c: 0x3c047000  lui         $a0, 0x7000
    ctx->pc = 0x36442cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
    // 0x364430: 0x3c057000  lui         $a1, 0x7000
    ctx->pc = 0x364430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)28672 << 16));
    // 0x364434: 0x34843f50  ori         $a0, $a0, 0x3F50
    ctx->pc = 0x364434u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16208);
    // 0x364438: 0x34a53f60  ori         $a1, $a1, 0x3F60
    ctx->pc = 0x364438u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16224);
    // 0x36443c: 0x6ae30007  ldl         $v1, 0x7($s7)
    ctx->pc = 0x36443cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x364440: 0x6ee30000  ldr         $v1, 0x0($s7)
    ctx->pc = 0x364440u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x364444: 0x8ee70008  lw          $a3, 0x8($s7)
    ctx->pc = 0x364444u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x364448: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x364448u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36444c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x36444cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364450: 0x3c027000  lui         $v0, 0x7000
    ctx->pc = 0x364450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)28672 << 16));
    // 0x364454: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x364454u;
    runtime->Store32(rdram, ctx, 0x70003F58u, GPR_U32(ctx, 7)); // MMIO: 0x70003f58
    // 0x364458: 0x34423f90  ori         $v0, $v0, 0x3F90
    ctx->pc = 0x364458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16272);
    // 0x36445c: 0x6bc30007  ldl         $v1, 0x7($fp)
    ctx->pc = 0x36445cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x364460: 0x6fc30000  ldr         $v1, 0x0($fp)
    ctx->pc = 0x364460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x364464: 0x8fc70008  lw          $a3, 0x8($fp)
    ctx->pc = 0x364464u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x364468: 0xb0a30007  sdl         $v1, 0x7($a1)
    ctx->pc = 0x364468u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36446c: 0xb4a30000  sdr         $v1, 0x0($a1)
    ctx->pc = 0x36446cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x364470: 0xaca70008  sw          $a3, 0x8($a1)
    ctx->pc = 0x364470u;
    runtime->Store32(rdram, ctx, 0x70003F68u, GPR_U32(ctx, 7)); // MMIO: 0x70003f68
    // 0x364474: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x364474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x364478: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x364478u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x36447c: 0xe4410000  swc1        $f1, 0x0($v0)
    ctx->pc = 0x36447cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F90u, bits); }
    // 0x364480: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x364480u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x364484: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x364484u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); runtime->Store32(rdram, ctx, 0x70003F94u, bits); }
label_364488:
    // 0x364488: 0x42000039  di
    ctx->pc = 0x364488u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36448c: 0x40f  sync.p
    ctx->pc = 0x36448cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364490: 0x40076000  mfc0        $a3, Status
    ctx->pc = 0x364490u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_status);
    // 0x364494: 0xe33824  and         $a3, $a3, $v1
    ctx->pc = 0x364494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 3));
    // 0x364498: 0x0  nop
    ctx->pc = 0x364498u;
    // NOP
    // 0x36449c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36449Cu;
    {
        const bool branch_taken_0x36449c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x36449c) {
            ctx->pc = 0x364488u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364488;
        }
    }
    ctx->pc = 0x3644A4u;
    // 0x3644a4: 0x3c083f00  lui         $t0, 0x3F00
    ctx->pc = 0x3644a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)16128 << 16));
    // 0x3644a8: 0x48c8a800  ctc2.ni     $t0, $vi21
    ctx->pc = 0x3644a8u;
    { uint32_t tmp = GPR_U32(ctx, 8); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x3644ac: 0x4a0002ff  vnop
    ctx->pc = 0x3644acu;
    // NOP operation, no action needed for VU0
    // 0x3644b0: 0x4a0002ff  vnop
    ctx->pc = 0x3644b0u;
    // NOP operation, no action needed for VU0
    // 0x3644b4: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x3644b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3644b8: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x3644b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3644bc: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x3644bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3644c0: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x3644c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3644c4: 0x4be310bd  vmadday.xyzw $ACC, $vf2, $vf3y
    ctx->pc = 0x3644c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3644c8: 0x4be00569  vmadd.xyzw  $vf21, $vf0, $vf0
    ctx->pc = 0x3644c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x3644cc: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x3644ccu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x3644d0: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x3644d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3644d4: 0x42000038  ei
    ctx->pc = 0x3644d4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3644d8: 0x14c00165  bnez        $a2, . + 4 + (0x165 << 2)
    ctx->pc = 0x3644D8u;
    {
        const bool branch_taken_0x3644d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x3644DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3644D8u;
        // 0x3644dc: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3644d8) {
            ctx->pc = 0x364A70u;
            goto label_364a70;
        }
    }
    ctx->pc = 0x3644E0u;
    // 0x3644e0: 0x3c191000  lui         $t9, 0x1000
    ctx->pc = 0x3644e0u;
    SET_GPR_S32(ctx, 25, (int32_t)((uint32_t)4096 << 16));
    // 0x3644e4: 0x3c181000  lui         $t8, 0x1000
    ctx->pc = 0x3644e4u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)4096 << 16));
    // 0x3644e8: 0xafb90054  sw          $t9, 0x54($sp)
    ctx->pc = 0x3644e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 25));
    // 0x3644ec: 0x3c0c1000  lui         $t4, 0x1000
    ctx->pc = 0x3644ecu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4096 << 16));
    // 0x3644f0: 0xafb90058  sw          $t9, 0x58($sp)
    ctx->pc = 0x3644f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 25));
    // 0x3644f4: 0x3c0b1000  lui         $t3, 0x1000
    ctx->pc = 0x3644f4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)4096 << 16));
    // 0x3644f8: 0xafb9005c  sw          $t9, 0x5C($sp)
    ctx->pc = 0x3644f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 25));
    // 0x3644fc: 0x3c121000  lui         $s2, 0x1000
    ctx->pc = 0x3644fcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)4096 << 16));
    // 0x364500: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x364500u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x364504: 0x3c171000  lui         $s7, 0x1000
    ctx->pc = 0x364504u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)4096 << 16));
    // 0x364508: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x364508u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x36450c: 0x3c071000  lui         $a3, 0x1000
    ctx->pc = 0x36450cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)4096 << 16));
    // 0x364510: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x364510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x364514: 0x3529d080  ori         $t1, $t1, 0xD080
    ctx->pc = 0x364514u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)53376);
    // 0x364518: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x364518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x36451c: 0xafa90054  sw          $t1, 0x54($sp)
    ctx->pc = 0x36451cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 9));
    // 0x364520: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x364520u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x364524: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x364524u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x364528: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x364528u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x36452c: 0x3718d000  ori         $t8, $t8, 0xD000
    ctx->pc = 0x36452cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 24) | (uint64_t)(uint16_t)53248);
    // 0x364530: 0x358ce020  ori         $t4, $t4, 0xE020
    ctx->pc = 0x364530u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)57376);
    // 0x364534: 0x240f0100  addiu       $t7, $zero, 0x100
    ctx->pc = 0x364534u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364538: 0x356bd400  ori         $t3, $t3, 0xD400
    ctx->pc = 0x364538u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | (uint64_t)(uint16_t)54272);
    // 0x36453c: 0x240e0200  addiu       $t6, $zero, 0x200
    ctx->pc = 0x36453cu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x364540: 0x3652e010  ori         $s2, $s2, 0xE010
    ctx->pc = 0x364540u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)57360);
    // 0x364544: 0x36f7d480  ori         $s7, $s7, 0xD480
    ctx->pc = 0x364544u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)54400);
    // 0x364548: 0x34e7d410  ori         $a3, $a3, 0xD410
    ctx->pc = 0x364548u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)54288);
    // 0x36454c: 0x3739d420  ori         $t9, $t9, 0xD420
    ctx->pc = 0x36454cu;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 25) | (uint64_t)(uint16_t)54304);
label_364550:
    // 0x364550: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x364550u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 24), 0))); // MMIO: 0x1000d000
    // 0x364554: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364558: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x364558u;
    {
        const bool branch_taken_0x364558 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364558) {
            ctx->pc = 0x364588u;
            goto label_364588;
        }
    }
    ctx->pc = 0x364560u;
    // 0x364560: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x364560u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x364564: 0xf  sync
    ctx->pc = 0x364564u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364568: 0x40f  sync.p
    ctx->pc = 0x364568u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_36456c:
    // 0x36456c: 0x0  nop
    ctx->pc = 0x36456cu;
    // NOP
    // 0x364570: 0x0  nop
    ctx->pc = 0x364570u;
    // NOP
    // 0x364574: 0x0  nop
    ctx->pc = 0x364574u;
    // NOP
    // 0x364578: 0x0  nop
    ctx->pc = 0x364578u;
    // NOP
    // 0x36457c: 0x0  nop
    ctx->pc = 0x36457cu;
    // NOP
    // 0x364580: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x364580u;
    {
        const bool branch_taken_0x364580 = (false);
        if (branch_taken_0x364580) {
            ctx->pc = 0x36456Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36456c;
        }
    }
    ctx->pc = 0x364588u;
label_364588:
    // 0x364588: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x364588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x36458c: 0x2673ff48  addiu       $s3, $s3, -0xB8
    ctx->pc = 0x36458cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967112));
    // 0x364590: 0xafb30064  sw          $s3, 0x64($sp)
    ctx->pc = 0x364590u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 19));
    // 0x364594: 0x26242e00  addiu       $a0, $s1, 0x2E00
    ctx->pc = 0x364594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 11776));
    // 0x364598: 0x26130b80  addiu       $s3, $s0, 0xB80
    ctx->pc = 0x364598u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2944));
    // 0x36459c: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x36459cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x3645a0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3645a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3645a4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x3645A4u;
    {
        const bool branch_taken_0x3645a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3645A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3645A4u;
        // 0x3645a8: 0x26de05c0  addiu       $fp, $s6, 0x5C0 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 22), 1472));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3645a4) {
            ctx->pc = 0x3645FCu;
            goto label_3645fc;
        }
    }
    ctx->pc = 0x3645ACu;
    // 0x3645ac: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x3645acu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x3645b0: 0xf  sync
    ctx->pc = 0x3645b0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3645b4: 0x40f  sync.p
    ctx->pc = 0x3645b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3645b8:
    // 0x3645b8: 0x0  nop
    ctx->pc = 0x3645b8u;
    // NOP
    // 0x3645bc: 0x0  nop
    ctx->pc = 0x3645bcu;
    // NOP
    // 0x3645c0: 0x0  nop
    ctx->pc = 0x3645c0u;
    // NOP
    // 0x3645c4: 0x0  nop
    ctx->pc = 0x3645c4u;
    // NOP
    // 0x3645c8: 0x0  nop
    ctx->pc = 0x3645c8u;
    // NOP
    // 0x3645cc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3645CCu;
    {
        const bool branch_taken_0x3645cc = (false);
        if (branch_taken_0x3645cc) {
            ctx->pc = 0x3645B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3645b8;
        }
    }
    ctx->pc = 0x3645D4u;
    // 0x3645d4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3645d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3645d8: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x3645d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x3645dc: 0x0  nop
    ctx->pc = 0x3645dcu;
    // NOP
label_3645e0:
    // 0x3645e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3645e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x3645e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3645e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3645e8: 0x0  nop
    ctx->pc = 0x3645e8u;
    // NOP
    // 0x3645ec: 0x0  nop
    ctx->pc = 0x3645ecu;
    // NOP
    // 0x3645f0: 0x0  nop
    ctx->pc = 0x3645f0u;
    // NOP
    // 0x3645f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3645F4u;
    {
        const bool branch_taken_0x3645f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3645f4) {
            ctx->pc = 0x3645E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3645e0;
        }
    }
    ctx->pc = 0x3645FCu;
label_3645fc:
    // 0x3645fc: 0xae4e0000  sw          $t6, 0x0($s2)
    ctx->pc = 0x3645fcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 14));
    // 0x364600: 0x2405005c  addiu       $a1, $zero, 0x5C
    ctx->pc = 0x364600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x364604: 0xaee00000  sw          $zero, 0x0($s7)
    ctx->pc = 0x364604u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 0));
    // 0x364608: 0xacf60000  sw          $s6, 0x0($a3)
    ctx->pc = 0x364608u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 22));
    // 0x36460c: 0xaf250000  sw          $a1, 0x0($t9)
    ctx->pc = 0x36460cu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 5));
    // 0x364610: 0xad6f0000  sw          $t7, 0x0($t3)
    ctx->pc = 0x364610u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 15));
    // 0x364614: 0xf  sync
    ctx->pc = 0x364614u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364618: 0x40f  sync.p
    ctx->pc = 0x364618u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36461c: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x36461cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x364620: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364624: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x364624u;
    {
        const bool branch_taken_0x364624 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364624) {
            ctx->pc = 0x36467Cu;
            goto label_36467c;
        }
    }
    ctx->pc = 0x36462Cu;
    // 0x36462c: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x36462cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x364630: 0xf  sync
    ctx->pc = 0x364630u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364634: 0x40f  sync.p
    ctx->pc = 0x364634u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_364638:
    // 0x364638: 0x0  nop
    ctx->pc = 0x364638u;
    // NOP
    // 0x36463c: 0x0  nop
    ctx->pc = 0x36463cu;
    // NOP
    // 0x364640: 0x0  nop
    ctx->pc = 0x364640u;
    // NOP
    // 0x364644: 0x0  nop
    ctx->pc = 0x364644u;
    // NOP
    // 0x364648: 0x0  nop
    ctx->pc = 0x364648u;
    // NOP
    // 0x36464c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x36464Cu;
    {
        const bool branch_taken_0x36464c = (false);
        if (branch_taken_0x36464c) {
            ctx->pc = 0x364638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364638;
        }
    }
    ctx->pc = 0x364654u;
    // 0x364654: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364654u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364658: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x364658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x36465c: 0x0  nop
    ctx->pc = 0x36465cu;
    // NOP
label_364660:
    // 0x364660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364660u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x364664: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364664u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364668: 0x0  nop
    ctx->pc = 0x364668u;
    // NOP
    // 0x36466c: 0x0  nop
    ctx->pc = 0x36466cu;
    // NOP
    // 0x364670: 0x0  nop
    ctx->pc = 0x364670u;
    // NOP
    // 0x364674: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364674u;
    {
        const bool branch_taken_0x364674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364674) {
            ctx->pc = 0x364660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364660;
        }
    }
    ctx->pc = 0x36467Cu;
label_36467c:
    // 0x36467c: 0xae4e0000  sw          $t6, 0x0($s2)
    ctx->pc = 0x36467cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 14));
    // 0x364680: 0x240605c0  addiu       $a2, $zero, 0x5C0
    ctx->pc = 0x364680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1472));
    // 0x364684: 0xaee60000  sw          $a2, 0x0($s7)
    ctx->pc = 0x364684u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 6));
    // 0x364688: 0x240800b8  addiu       $t0, $zero, 0xB8
    ctx->pc = 0x364688u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 184));
    // 0x36468c: 0xacf00000  sw          $s0, 0x0($a3)
    ctx->pc = 0x36468cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 16));
    // 0x364690: 0xaf280000  sw          $t0, 0x0($t9)
    ctx->pc = 0x364690u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 0), GPR_U32(ctx, 8));
    // 0x364694: 0xad6f0000  sw          $t7, 0x0($t3)
    ctx->pc = 0x364694u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 15));
    // 0x364698: 0xf  sync
    ctx->pc = 0x364698u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x36469c: 0x40f  sync.p
    ctx->pc = 0x36469cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3646a0: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3646a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3646a4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3646a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3646a8: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3646A8u;
    {
        const bool branch_taken_0x3646a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3646ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646A8u;
        // 0x3646ac: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3646a8) {
            ctx->pc = 0x3646FCu;
            goto label_3646fc;
        }
    }
    ctx->pc = 0x3646B0u;
    // 0x3646b0: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x3646b0u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x3646b4: 0xf  sync
    ctx->pc = 0x3646b4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3646b8: 0x40f  sync.p
    ctx->pc = 0x3646b8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3646bc:
    // 0x3646bc: 0x0  nop
    ctx->pc = 0x3646bcu;
    // NOP
    // 0x3646c0: 0x0  nop
    ctx->pc = 0x3646c0u;
    // NOP
    // 0x3646c4: 0x0  nop
    ctx->pc = 0x3646c4u;
    // NOP
    // 0x3646c8: 0x0  nop
    ctx->pc = 0x3646c8u;
    // NOP
    // 0x3646cc: 0x0  nop
    ctx->pc = 0x3646ccu;
    // NOP
    // 0x3646d0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3646D0u;
    {
        const bool branch_taken_0x3646d0 = (false);
        if (branch_taken_0x3646d0) {
            ctx->pc = 0x3646BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3646bc;
        }
    }
    ctx->pc = 0x3646D8u;
    // 0x3646d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3646d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3646dc: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x3646dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_3646e0:
    // 0x3646e0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3646e0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x3646e4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3646e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3646e8: 0x0  nop
    ctx->pc = 0x3646e8u;
    // NOP
    // 0x3646ec: 0x0  nop
    ctx->pc = 0x3646ecu;
    // NOP
    // 0x3646f0: 0x0  nop
    ctx->pc = 0x3646f0u;
    // NOP
    // 0x3646f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3646F4u;
    {
        const bool branch_taken_0x3646f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3646F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3646F4u;
        // 0x3646f8: 0x3c087000  lui         $t0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3646f4) {
            ctx->pc = 0x3646E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3646e0;
        }
    }
    ctx->pc = 0x3646FCu;
label_3646fc:
    // 0x3646fc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3646fcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
    // 0x364700: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x364700u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x364704: 0x350805c0  ori         $t0, $t0, 0x5C0
    ctx->pc = 0x364704u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1472);
    // 0x364708: 0x34c61140  ori         $a2, $a2, 0x1140
    ctx->pc = 0x364708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4416);
    // 0x36470c: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x36470cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364710: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x364710u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x364714: 0x0  nop
    ctx->pc = 0x364714u;
    // NOP
label_364718:
    // 0x364718: 0x42000039  di
    ctx->pc = 0x364718u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36471c: 0x40f  sync.p
    ctx->pc = 0x36471cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364720: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x364720u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x364724: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x364724u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x364728: 0x0  nop
    ctx->pc = 0x364728u;
    // NOP
    // 0x36472c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36472Cu;
    {
        const bool branch_taken_0x36472c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36472c) {
            ctx->pc = 0x364718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364718;
        }
    }
    ctx->pc = 0x364734u;
    // 0x364734: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x364734u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364738: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x364738u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36473c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x36473cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x364740: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x364740u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x364744: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x364744u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x364748: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x364748u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x36474c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x36474cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x364750: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x364750u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x364754: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x364754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x364758: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x364758u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x36475c: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x36475cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x364760: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x364760u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x364764: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x364764u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x364768: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x364768u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x36476c: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x36476cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x364770: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x364770u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x364774: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x364774u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x364778: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x364778u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x36477c: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x36477cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364780: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x364780u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364784: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x364784u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364788: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x364788u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36478c: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x36478cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364790: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x364790u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364794: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x364794u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364798: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x364798u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36479c: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x36479cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3647a0: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x3647a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3647a4: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x3647a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3647a8: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x3647a8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3647ac: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x3647acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3647b0: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x3647b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3647b4: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x3647b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3647b8: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x3647b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3647bc: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x3647bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3647c0: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x3647c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3647c4: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x3647c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3647c8: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x3647c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3647cc: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x3647ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x3647d0: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x3647d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x3647d4: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x3647d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3647d8: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x3647d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3647dc: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x3647dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3647e0: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x3647e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3647e4: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x3647e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3647e8: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x3647e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3647ec: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x3647ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3647f0: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x3647f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3647f4: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x3647f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3647f8: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x3647f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3647fc: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x3647fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364800: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x364800u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364804: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x364804u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364808: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x364808u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x36480c: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x36480cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364810: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x364810u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364814: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x364814u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364818: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x364818u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x36481c: 0xf8c70080  sqc2        $vf7, 0x80($a2)
    ctx->pc = 0x36481cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x364820: 0xf8c80090  sqc2        $vf8, 0x90($a2)
    ctx->pc = 0x364820u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x364824: 0xf8c900a0  sqc2        $vf9, 0xA0($a2)
    ctx->pc = 0x364824u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x364828: 0xf8ca00b0  sqc2        $vf10, 0xB0($a2)
    ctx->pc = 0x364828u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36482c: 0xf8ce00c0  sqc2        $vf14, 0xC0($a2)
    ctx->pc = 0x36482cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x364830: 0xf8cf00d0  sqc2        $vf15, 0xD0($a2)
    ctx->pc = 0x364830u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x364834: 0xf8d000e0  sqc2        $vf16, 0xE0($a2)
    ctx->pc = 0x364834u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x364838: 0xf8d100f0  sqc2        $vf17, 0xF0($a2)
    ctx->pc = 0x364838u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x36483c: 0x42000038  ei
    ctx->pc = 0x36483cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x364840: 0x25250020  addiu       $a1, $t1, 0x20
    ctx->pc = 0x364840u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x364844: 0x24c40100  addiu       $a0, $a2, 0x100
    ctx->pc = 0x364844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x364848: 0x25030040  addiu       $v1, $t0, 0x40
    ctx->pc = 0x364848u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_36484c:
    // 0x36484c: 0x42000039  di
    ctx->pc = 0x36484cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x364850: 0x40f  sync.p
    ctx->pc = 0x364850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364854: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x364854u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x364858: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x364858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x36485c: 0x0  nop
    ctx->pc = 0x36485cu;
    // NOP
    // 0x364860: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364860u;
    {
        const bool branch_taken_0x364860 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364860) {
            ctx->pc = 0x36484Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36484c;
        }
    }
    ctx->pc = 0x364868u;
    // 0x364868: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x364868u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36486c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x36486cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x364870: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x364870u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x364874: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x364874u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x364878: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x364878u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36487c: 0xd8660000  lqc2        $vf6, 0x0($v1)
    ctx->pc = 0x36487cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x364880: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x364880u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x364884: 0xd86d0010  lqc2        $vf13, 0x10($v1)
    ctx->pc = 0x364884u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x364888: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x364888u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36488c: 0xd8740020  lqc2        $vf20, 0x20($v1)
    ctx->pc = 0x36488cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x364890: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x364890u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x364894: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x364894u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x364898: 0xd87b0030  lqc2        $vf27, 0x30($v1)
    ctx->pc = 0x364898u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x36489c: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x36489cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x3648a0: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x3648a0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3648a4: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x3648a4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3648a8: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x3648a8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3648ac: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x3648acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3648b0: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x3648b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3648b4: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x3648b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3648b8: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x3648b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3648bc: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x3648bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3648c0: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x3648c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3648c4: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x3648c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3648c8: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x3648c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3648cc: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x3648ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3648d0: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x3648d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3648d4: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x3648d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3648d8: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x3648d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3648dc: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x3648dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3648e0: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x3648e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3648e4: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x3648e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3648e8: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x3648e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3648ec: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x3648ecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3648f0: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x3648f0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3648f4: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x3648f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3648f8: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x3648f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3648fc: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x3648fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x364900: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x364900u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x364904: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x364904u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x364908: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x364908u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36490c: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x36490cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x364910: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x364910u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364914: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x364914u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364918: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x364918u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x36491c: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x36491cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364920: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x364920u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364924: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x364924u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364928: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x364928u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x36492c: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x36492cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364930: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x364930u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364934: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x364934u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364938: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x364938u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36493c: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x36493cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364940: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x364940u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364944: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x364944u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364948: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x364948u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36494c: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x36494cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364950: 0xf8870080  sqc2        $vf7, 0x80($a0)
    ctx->pc = 0x364950u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x364954: 0xf8880090  sqc2        $vf8, 0x90($a0)
    ctx->pc = 0x364954u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x364958: 0xf88900a0  sqc2        $vf9, 0xA0($a0)
    ctx->pc = 0x364958u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x36495c: 0xf88a00b0  sqc2        $vf10, 0xB0($a0)
    ctx->pc = 0x36495cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x364960: 0xf88e00c0  sqc2        $vf14, 0xC0($a0)
    ctx->pc = 0x364960u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x364964: 0xf88f00d0  sqc2        $vf15, 0xD0($a0)
    ctx->pc = 0x364964u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x364968: 0xf89000e0  sqc2        $vf16, 0xE0($a0)
    ctx->pc = 0x364968u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36496c: 0xf89100f0  sqc2        $vf17, 0xF0($a0)
    ctx->pc = 0x36496cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x364970: 0x42000038  ei
    ctx->pc = 0x364970u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x364974: 0x25290040  addiu       $t1, $t1, 0x40
    ctx->pc = 0x364974u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x364978: 0x24c60200  addiu       $a2, $a2, 0x200
    ctx->pc = 0x364978u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x36497c: 0x25ad0008  addiu       $t5, $t5, 0x8
    ctx->pc = 0x36497cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 8));
    // 0x364980: 0x29a200b8  slti        $v0, $t5, 0xB8
    ctx->pc = 0x364980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x364984: 0x1440ff64  bnez        $v0, . + 4 + (-0x9C << 2)
    ctx->pc = 0x364984u;
    {
        const bool branch_taken_0x364984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364984u;
        // 0x364988: 0x25080080  addiu       $t0, $t0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364984) {
            ctx->pc = 0x364718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364718;
        }
    }
    ctx->pc = 0x36498Cu;
    // 0x36498c: 0x8f020000  lw          $v0, 0x0($t8)
    ctx->pc = 0x36498cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 24), 0)));
    // 0x364990: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364994: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x364994u;
    {
        const bool branch_taken_0x364994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364994) {
            ctx->pc = 0x3649C8u;
            goto label_3649c8;
        }
    }
    ctx->pc = 0x36499Cu;
    // 0x36499c: 0xad8f0000  sw          $t7, 0x0($t4)
    ctx->pc = 0x36499cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 15));
    // 0x3649a0: 0xf  sync
    ctx->pc = 0x3649a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3649a4: 0x40f  sync.p
    ctx->pc = 0x3649a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3649a8:
    // 0x3649a8: 0x0  nop
    ctx->pc = 0x3649a8u;
    // NOP
    // 0x3649ac: 0x0  nop
    ctx->pc = 0x3649acu;
    // NOP
    // 0x3649b0: 0x0  nop
    ctx->pc = 0x3649b0u;
    // NOP
    // 0x3649b4: 0x0  nop
    ctx->pc = 0x3649b4u;
    // NOP
    // 0x3649b8: 0x0  nop
    ctx->pc = 0x3649b8u;
    // NOP
    // 0x3649bc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3649BCu;
    {
        const bool branch_taken_0x3649bc = (false);
        if (branch_taken_0x3649bc) {
            ctx->pc = 0x3649A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3649a8;
        }
    }
    ctx->pc = 0x3649C4u;
    // 0x3649c4: 0x0  nop
    ctx->pc = 0x3649c4u;
    // NOP
label_3649c8:
    // 0x3649c8: 0x8d620000  lw          $v0, 0x0($t3)
    ctx->pc = 0x3649c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x3649cc: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x3649ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x3649d0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x3649D0u;
    {
        const bool branch_taken_0x3649d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3649d0) {
            ctx->pc = 0x364A24u;
            goto label_364a24;
        }
    }
    ctx->pc = 0x3649D8u;
    // 0x3649d8: 0xad8e0000  sw          $t6, 0x0($t4)
    ctx->pc = 0x3649d8u;
    WRITE32(ADD32(GPR_U32(ctx, 12), 0), GPR_U32(ctx, 14));
    // 0x3649dc: 0xf  sync
    ctx->pc = 0x3649dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3649e0: 0x40f  sync.p
    ctx->pc = 0x3649e0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3649e4:
    // 0x3649e4: 0x0  nop
    ctx->pc = 0x3649e4u;
    // NOP
    // 0x3649e8: 0x0  nop
    ctx->pc = 0x3649e8u;
    // NOP
    // 0x3649ec: 0x0  nop
    ctx->pc = 0x3649ecu;
    // NOP
    // 0x3649f0: 0x0  nop
    ctx->pc = 0x3649f0u;
    // NOP
    // 0x3649f4: 0x0  nop
    ctx->pc = 0x3649f4u;
    // NOP
    // 0x3649f8: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3649F8u;
    {
        const bool branch_taken_0x3649f8 = (false);
        if (branch_taken_0x3649f8) {
            ctx->pc = 0x3649E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3649e4;
        }
    }
    ctx->pc = 0x364A00u;
    // 0x364a00: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364a00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364a04: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x364a04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_364a08:
    // 0x364a08: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364a08u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x364a0c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364a10: 0x0  nop
    ctx->pc = 0x364a10u;
    // NOP
    // 0x364a14: 0x0  nop
    ctx->pc = 0x364a14u;
    // NOP
    // 0x364a18: 0x0  nop
    ctx->pc = 0x364a18u;
    // NOP
    // 0x364a1c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364A1Cu;
    {
        const bool branch_taken_0x364a1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364a1c) {
            ctx->pc = 0x364A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364a08;
        }
    }
    ctx->pc = 0x364A24u;
label_364a24:
    // 0x364a24: 0xae4f0000  sw          $t7, 0x0($s2)
    ctx->pc = 0x364a24u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 15));
    // 0x364a28: 0x24021140  addiu       $v0, $zero, 0x1140
    ctx->pc = 0x364a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4416));
    // 0x364a2c: 0x240502e0  addiu       $a1, $zero, 0x2E0
    ctx->pc = 0x364a2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 736));
    // 0x364a30: 0x8fa90054  lw          $t1, 0x54($sp)
    ctx->pc = 0x364a30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
    // 0x364a34: 0xad220000  sw          $v0, 0x0($t1)
    ctx->pc = 0x364a34u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 2));
    // 0x364a38: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x364a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x364a3c: 0xac710000  sw          $s1, 0x0($v1)
    ctx->pc = 0x364a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
    // 0x364a40: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x364a40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x364a44: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x364a44u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x364a48: 0xaf0f0000  sw          $t7, 0x0($t8)
    ctx->pc = 0x364a48u;
    WRITE32(ADD32(GPR_U32(ctx, 24), 0), GPR_U32(ctx, 15));
    // 0x364a4c: 0xf  sync
    ctx->pc = 0x364a4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364a50: 0x40f  sync.p
    ctx->pc = 0x364a50u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364a54: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x364a54u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a58: 0x8fb30064  lw          $s3, 0x64($sp)
    ctx->pc = 0x364a58u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x364a5c: 0x3c0b02d  daddu       $s6, $fp, $zero
    ctx->pc = 0x364a5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364a60: 0x2a6200b8  slti        $v0, $s3, 0xB8
    ctx->pc = 0x364a60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)184) ? 1 : 0);
    // 0x364a64: 0x1040feba  beqz        $v0, . + 4 + (-0x146 << 2)
    ctx->pc = 0x364A64u;
    {
        const bool branch_taken_0x364a64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A64u;
        // 0x364a68: 0x8fb10060  lw          $s1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a64) {
            ctx->pc = 0x364550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364550;
        }
    }
    ctx->pc = 0x364A6Cu;
    // 0x364a6c: 0x2a620004  slti        $v0, $s3, 0x4
    ctx->pc = 0x364a6cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
label_364a70:
    // 0x364a70: 0x14400313  bnez        $v0, . + 4 + (0x313 << 2)
    ctx->pc = 0x364A70u;
    {
        const bool branch_taken_0x364a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A70u;
        // 0x364a74: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a70) {
            ctx->pc = 0x3656C0u;
            goto label_3656c0;
        }
    }
    ctx->pc = 0x364A78u;
    // 0x364a78: 0x26630003  addiu       $v1, $s3, 0x3
    ctx->pc = 0x364a78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 3));
    // 0x364a7c: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x364a7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x364a80: 0x262180b  movn        $v1, $s3, $v0
    ctx->pc = 0x364a80u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 19));
    // 0x364a84: 0x32083  sra         $a0, $v1, 2
    ctx->pc = 0x364a84u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 2));
    // 0x364a88: 0x45880  sll         $t3, $a0, 2
    ctx->pc = 0x364a88u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x364a8c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x364a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364a90: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x364a90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x364a94: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x364a94u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x364a98: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x364a98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x364a9c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x364A9Cu;
    {
        const bool branch_taken_0x364a9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364A9Cu;
        // 0x364aa0: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364a9c) {
            ctx->pc = 0x364AD8u;
            goto label_364ad8;
        }
    }
    ctx->pc = 0x364AA4u;
    // 0x364aa4: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x364aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364aa8: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x364aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x364aac: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x364aacu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x364ab0: 0xf  sync
    ctx->pc = 0x364ab0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364ab4: 0x40f  sync.p
    ctx->pc = 0x364ab4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_364ab8:
    // 0x364ab8: 0x0  nop
    ctx->pc = 0x364ab8u;
    // NOP
    // 0x364abc: 0x0  nop
    ctx->pc = 0x364abcu;
    // NOP
    // 0x364ac0: 0x0  nop
    ctx->pc = 0x364ac0u;
    // NOP
    // 0x364ac4: 0x0  nop
    ctx->pc = 0x364ac4u;
    // NOP
    // 0x364ac8: 0x0  nop
    ctx->pc = 0x364ac8u;
    // NOP
    // 0x364acc: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x364ACCu;
    {
        const bool branch_taken_0x364acc = (false);
        if (branch_taken_0x364acc) {
            ctx->pc = 0x364AB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364ab8;
        }
    }
    ctx->pc = 0x364AD4u;
    // 0x364ad4: 0x0  nop
    ctx->pc = 0x364ad4u;
    // NOP
label_364ad8:
    // 0x364ad8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x364ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364adc: 0x49200  sll         $s2, $a0, 8
    ctx->pc = 0x364adcu;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x364ae0: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x364ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x364ae4: 0x26b3823  subu        $a3, $s3, $t3
    ctx->pc = 0x364ae4u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 11)));
    // 0x364ae8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x364ae8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x364aec: 0xb77c3  sra         $t6, $t3, 31
    ctx->pc = 0x364aecu;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 11), 31));
    // 0x364af0: 0x46100  sll         $t4, $a0, 4
    ctx->pc = 0x364af0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x364af4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x364af4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x364af8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x364AF8u;
    {
        const bool branch_taken_0x364af8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364AF8u;
        // 0x364afc: 0x47980  sll         $t7, $a0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 4), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364af8) {
            ctx->pc = 0x364B5Cu;
            goto label_364b5c;
        }
    }
    ctx->pc = 0x364B00u;
    // 0x364b00: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x364b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364b04: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x364b04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x364b08: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x364b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x364b0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x364b0cu;
    runtime->Store32(rdram, ctx, 0x1000E020u, GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x364b10: 0xf  sync
    ctx->pc = 0x364b10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364b14: 0x40f  sync.p
    ctx->pc = 0x364b14u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_364b18:
    // 0x364b18: 0x0  nop
    ctx->pc = 0x364b18u;
    // NOP
    // 0x364b1c: 0x0  nop
    ctx->pc = 0x364b1cu;
    // NOP
    // 0x364b20: 0x0  nop
    ctx->pc = 0x364b20u;
    // NOP
    // 0x364b24: 0x0  nop
    ctx->pc = 0x364b24u;
    // NOP
    // 0x364b28: 0x0  nop
    ctx->pc = 0x364b28u;
    // NOP
    // 0x364b2c: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x364B2Cu;
    {
        const bool branch_taken_0x364b2c = (false);
        if (branch_taken_0x364b2c) {
            ctx->pc = 0x364B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364b18;
        }
    }
    ctx->pc = 0x364B34u;
    // 0x364b34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364b38: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x364b38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x364b3c: 0x0  nop
    ctx->pc = 0x364b3cu;
    // NOP
label_364b40:
    // 0x364b40: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364b40u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x364b44: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364b48: 0x0  nop
    ctx->pc = 0x364b48u;
    // NOP
    // 0x364b4c: 0x0  nop
    ctx->pc = 0x364b4cu;
    // NOP
    // 0x364b50: 0x0  nop
    ctx->pc = 0x364b50u;
    // NOP
    // 0x364b54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364B54u;
    {
        const bool branch_taken_0x364b54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364b54) {
            ctx->pc = 0x364B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364b40;
        }
    }
    ctx->pc = 0x364B5Cu;
label_364b5c:
    // 0x364b5c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x364b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364b60: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x364b60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x364b64: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x364b64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x364b68: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x364b68u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x364b6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364b70: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x364b70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x364b74: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x364b74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364b78: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x364b78u;
    runtime->Store32(rdram, ctx, 0x1000D480u, GPR_U32(ctx, 0)); // MMIO: 0x1000d480
    // 0x364b7c: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x364b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x364b80: 0xac560000  sw          $s6, 0x0($v0)
    ctx->pc = 0x364b80u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 22)); // MMIO: 0x1000d410
    // 0x364b84: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x364b84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x364b88: 0xb1043  sra         $v0, $t3, 1
    ctx->pc = 0x364b88u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 1));
    // 0x364b8c: 0x3484d420  ori         $a0, $a0, 0xD420
    ctx->pc = 0x364b8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54304);
    // 0x364b90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x364b90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x364b94: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364b94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364b98: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x364b98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
    // 0x364b9c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x364b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364ba0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x364ba0u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x364ba4: 0xf  sync
    ctx->pc = 0x364ba4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364ba8: 0x40f  sync.p
    ctx->pc = 0x364ba8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364bac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x364bb0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364bb4: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x364BB4u;
    {
        const bool branch_taken_0x364bb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364BB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364BB4u;
        // 0x364bb8: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364bb4) {
            ctx->pc = 0x364C0Cu;
            goto label_364c0c;
        }
    }
    ctx->pc = 0x364BBCu;
    // 0x364bbc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x364bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x364bc0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x364bc0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x364bc4: 0xf  sync
    ctx->pc = 0x364bc4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364bc8: 0x40f  sync.p
    ctx->pc = 0x364bc8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_364bcc:
    // 0x364bcc: 0x0  nop
    ctx->pc = 0x364bccu;
    // NOP
    // 0x364bd0: 0x0  nop
    ctx->pc = 0x364bd0u;
    // NOP
    // 0x364bd4: 0x0  nop
    ctx->pc = 0x364bd4u;
    // NOP
    // 0x364bd8: 0x0  nop
    ctx->pc = 0x364bd8u;
    // NOP
    // 0x364bdc: 0x0  nop
    ctx->pc = 0x364bdcu;
    // NOP
    // 0x364be0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x364BE0u;
    {
        const bool branch_taken_0x364be0 = (false);
        if (branch_taken_0x364be0) {
            ctx->pc = 0x364BCCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364bcc;
        }
    }
    ctx->pc = 0x364BE8u;
    // 0x364be8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364be8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364bec: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x364becu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_364bf0:
    // 0x364bf0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x364bf4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364bf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364bf8: 0x0  nop
    ctx->pc = 0x364bf8u;
    // NOP
    // 0x364bfc: 0x0  nop
    ctx->pc = 0x364bfcu;
    // NOP
    // 0x364c00: 0x0  nop
    ctx->pc = 0x364c00u;
    // NOP
    // 0x364c04: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364C04u;
    {
        const bool branch_taken_0x364c04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364c04) {
            ctx->pc = 0x364BF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364bf0;
        }
    }
    ctx->pc = 0x364C0Cu;
label_364c0c:
    // 0x364c0c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x364c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364c10: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x364c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x364c14: 0x24050200  addiu       $a1, $zero, 0x200
    ctx->pc = 0x364c14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x364c18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364c1c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x364c1cu;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 5)); // MMIO: 0x1000e010
    // 0x364c20: 0x3463d480  ori         $v1, $v1, 0xD480
    ctx->pc = 0x364c20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54400);
    // 0x364c24: 0xb20c0  sll         $a0, $t3, 3
    ctx->pc = 0x364c24u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 11), 3));
    // 0x364c28: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x364c28u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x364c2c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x364c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x364c30: 0x3442d410  ori         $v0, $v0, 0xD410
    ctx->pc = 0x364c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54288);
    // 0x364c34: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364c34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364c38: 0xac500000  sw          $s0, 0x0($v0)
    ctx->pc = 0x364c38u;
    runtime->Store32(rdram, ctx, 0x1000D410u, GPR_U32(ctx, 16)); // MMIO: 0x1000d410
    // 0x364c3c: 0x3463d420  ori         $v1, $v1, 0xD420
    ctx->pc = 0x364c3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54304);
    // 0x364c40: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x364c40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x364c44: 0xac6b0000  sw          $t3, 0x0($v1)
    ctx->pc = 0x364c44u;
    runtime->Store32(rdram, ctx, 0x1000D420u, GPR_U32(ctx, 11)); // MMIO: 0x1000d420
    // 0x364c48: 0x3484d400  ori         $a0, $a0, 0xD400
    ctx->pc = 0x364c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)54272);
    // 0x364c4c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x364c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364c50: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x364c50u;
    runtime->Store32(rdram, ctx, 0x1000D400u, GPR_U32(ctx, 2)); // MMIO: 0x1000d400
    // 0x364c54: 0xf  sync
    ctx->pc = 0x364c54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364c58: 0x40f  sync.p
    ctx->pc = 0x364c58u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364c5c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x364c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x364c60: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364c64: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x364C64u;
    {
        const bool branch_taken_0x364c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x364C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364C64u;
        // 0x364c68: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364c64) {
            ctx->pc = 0x364CBCu;
            goto label_364cbc;
        }
    }
    ctx->pc = 0x364C6Cu;
    // 0x364c6c: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x364c6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x364c70: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x364c70u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x1000e020
    // 0x364c74: 0xf  sync
    ctx->pc = 0x364c74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364c78: 0x40f  sync.p
    ctx->pc = 0x364c78u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_364c7c:
    // 0x364c7c: 0x0  nop
    ctx->pc = 0x364c7cu;
    // NOP
    // 0x364c80: 0x0  nop
    ctx->pc = 0x364c80u;
    // NOP
    // 0x364c84: 0x0  nop
    ctx->pc = 0x364c84u;
    // NOP
    // 0x364c88: 0x0  nop
    ctx->pc = 0x364c88u;
    // NOP
    // 0x364c8c: 0x0  nop
    ctx->pc = 0x364c8cu;
    // NOP
    // 0x364c90: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x364C90u;
    {
        const bool branch_taken_0x364c90 = (false);
        if (branch_taken_0x364c90) {
            ctx->pc = 0x364C7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364c7c;
        }
    }
    ctx->pc = 0x364C98u;
    // 0x364c98: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x364c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x364c9c: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x364c9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_364ca0:
    // 0x364ca0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x364ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x364ca4: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x364ca4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x364ca8: 0x0  nop
    ctx->pc = 0x364ca8u;
    // NOP
    // 0x364cac: 0x0  nop
    ctx->pc = 0x364cacu;
    // NOP
    // 0x364cb0: 0x0  nop
    ctx->pc = 0x364cb0u;
    // NOP
    // 0x364cb4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364CB4u;
    {
        const bool branch_taken_0x364cb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364cb4) {
            ctx->pc = 0x364CA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364ca0;
        }
    }
    ctx->pc = 0x364CBCu;
label_364cbc:
    // 0x364cbc: 0xb1043  sra         $v0, $t3, 1
    ctx->pc = 0x364cbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 11), 1));
    // 0x364cc0: 0x3c097000  lui         $t1, 0x7000
    ctx->pc = 0x364cc0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)28672 << 16));
    // 0x364cc4: 0x4b1821  addu        $v1, $v0, $t3
    ctx->pc = 0x364cc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 11)));
    // 0x364cc8: 0x682d  daddu       $t5, $zero, $zero
    ctx->pc = 0x364cc8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x364ccc: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x364cccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x364cd0: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x364cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x364cd4: 0x494025  or          $t0, $v0, $t1
    ctx->pc = 0x364cd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
    // 0x364cd8: 0x19600231  blez        $t3, . + 4 + (0x231 << 2)
    ctx->pc = 0x364CD8u;
    {
        const bool branch_taken_0x364cd8 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x364CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CD8u;
        // 0x364cdc: 0x693025  or          $a2, $v1, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x364cd8) {
            ctx->pc = 0x3655A0u;
            goto label_3655a0;
        }
    }
    ctx->pc = 0x364CE0u;
    // 0x364ce0: 0x3c0a0001  lui         $t2, 0x1
    ctx->pc = 0x364ce0u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)1 << 16));
    // 0x364ce4: 0x196000a6  blez        $t3, . + 4 + (0xA6 << 2)
    ctx->pc = 0x364CE4u;
    {
        const bool branch_taken_0x364ce4 = (GPR_S32(ctx, 11) <= 0);
        ctx->pc = 0x364CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CE4u;
        // 0x364ce8: 0x3163000f  andi        $v1, $t3, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364ce4) {
            ctx->pc = 0x364F80u;
            goto label_364f80;
        }
    }
    ctx->pc = 0x364CECu;
    // 0x364cec: 0x106000f4  beqz        $v1, . + 4 + (0xF4 << 2)
    ctx->pc = 0x364CECu;
    {
        const bool branch_taken_0x364cec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x364CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CECu;
        // 0x364cf0: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364cec) {
            ctx->pc = 0x3650C0u;
            goto label_3650c0;
        }
    }
    ctx->pc = 0x364CF4u;
    // 0x364cf4: 0x144000a2  bnez        $v0, . + 4 + (0xA2 << 2)
    ctx->pc = 0x364CF4u;
    {
        const bool branch_taken_0x364cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CF4u;
        // 0x364cf8: 0x28620009  slti        $v0, $v1, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364cf4) {
            ctx->pc = 0x364F80u;
            goto label_364f80;
        }
    }
    ctx->pc = 0x364CFCu;
    // 0x364cfc: 0x14400052  bnez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x364CFCu;
    {
        const bool branch_taken_0x364cfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x364D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x364CFCu;
        // 0x364d00: 0x2862000d  slti        $v0, $v1, 0xD (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)13) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x364cfc) {
            ctx->pc = 0x364E48u;
            goto label_364e48;
        }
    }
    ctx->pc = 0x364D04u;
    // 0x364d04: 0x104000ee  beqz        $v0, . + 4 + (0xEE << 2)
    ctx->pc = 0x364D04u;
    {
        const bool branch_taken_0x364d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364d04) {
            ctx->pc = 0x3650C0u;
            goto label_3650c0;
        }
    }
    ctx->pc = 0x364D0Cu;
label_364d0c:
    // 0x364d0c: 0x42000039  di
    ctx->pc = 0x364d0cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x364d10: 0x40f  sync.p
    ctx->pc = 0x364d10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364d14: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x364d14u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x364d18: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x364d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x364d1c: 0x0  nop
    ctx->pc = 0x364d1cu;
    // NOP
    // 0x364d20: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364D20u;
    {
        const bool branch_taken_0x364d20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364d20) {
            ctx->pc = 0x364D0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364d0c;
        }
    }
    ctx->pc = 0x364D28u;
    // 0x364d28: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x364d28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364d2c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x364d2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x364d30: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x364d30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x364d34: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x364d34u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x364d38: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x364d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x364d3c: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x364d3cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x364d40: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x364d40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x364d44: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x364d44u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x364d48: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x364d48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x364d4c: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x364d4cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x364d50: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x364d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x364d54: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x364d54u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x364d58: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x364d58u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x364d5c: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x364d5cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x364d60: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x364d60u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x364d64: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x364d64u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x364d68: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x364d68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x364d6c: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x364d6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x364d70: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x364d70u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364d74: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x364d74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364d78: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x364d78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364d7c: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x364d7cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364d80: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x364d80u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364d84: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x364d84u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364d88: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x364d88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364d8c: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x364d8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364d90: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x364d90u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364d94: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x364d94u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364d98: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x364d98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364d9c: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x364d9cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364da0: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x364da0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364da4: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x364da4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364da8: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x364da8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364dac: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x364dacu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364db0: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x364db0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x364db4: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x364db4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x364db8: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x364db8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x364dbc: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x364dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x364dc0: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x364dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x364dc4: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x364dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x364dc8: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x364dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x364dcc: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x364dccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x364dd0: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x364dd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364dd4: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x364dd4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364dd8: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x364dd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364ddc: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x364ddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364de0: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x364de0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364de4: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x364de4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364de8: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x364de8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364dec: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x364decu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364df0: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x364df0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364df4: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x364df4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364df8: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x364df8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364dfc: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x364dfcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364e00: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x364e00u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364e04: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x364e04u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364e08: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x364e08u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364e0c: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x364e0cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364e10: 0xf8c70080  sqc2        $vf7, 0x80($a2)
    ctx->pc = 0x364e10u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x364e14: 0xf8c80090  sqc2        $vf8, 0x90($a2)
    ctx->pc = 0x364e14u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x364e18: 0xf8c900a0  sqc2        $vf9, 0xA0($a2)
    ctx->pc = 0x364e18u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x364e1c: 0xf8ca00b0  sqc2        $vf10, 0xB0($a2)
    ctx->pc = 0x364e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x364e20: 0xf8ce00c0  sqc2        $vf14, 0xC0($a2)
    ctx->pc = 0x364e20u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x364e24: 0xf8cf00d0  sqc2        $vf15, 0xD0($a2)
    ctx->pc = 0x364e24u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x364e28: 0xf8d000e0  sqc2        $vf16, 0xE0($a2)
    ctx->pc = 0x364e28u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x364e2c: 0xf8d100f0  sqc2        $vf17, 0xF0($a2)
    ctx->pc = 0x364e2cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x364e30: 0x42000038  ei
    ctx->pc = 0x364e30u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x364e34: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x364e34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x364e38: 0x35290020  ori         $t1, $t1, 0x20
    ctx->pc = 0x364e38u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32);
    // 0x364e3c: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x364e3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x364e40: 0x240d0004  addiu       $t5, $zero, 0x4
    ctx->pc = 0x364e40u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x364e44: 0x0  nop
    ctx->pc = 0x364e44u;
    // NOP
label_364e48:
    // 0x364e48: 0x42000039  di
    ctx->pc = 0x364e48u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x364e4c: 0x40f  sync.p
    ctx->pc = 0x364e4cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364e50: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x364e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x364e54: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x364e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x364e58: 0x0  nop
    ctx->pc = 0x364e58u;
    // NOP
    // 0x364e5c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364E5Cu;
    {
        const bool branch_taken_0x364e5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364e5c) {
            ctx->pc = 0x364E48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364e48;
        }
    }
    ctx->pc = 0x364E64u;
    // 0x364e64: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x364e64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364e68: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x364e68u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x364e6c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x364e6cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x364e70: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x364e70u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x364e74: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x364e74u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x364e78: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x364e78u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x364e7c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x364e7cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x364e80: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x364e80u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x364e84: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x364e84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x364e88: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x364e88u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x364e8c: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x364e8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x364e90: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x364e90u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x364e94: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x364e94u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x364e98: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x364e98u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x364e9c: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x364e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x364ea0: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x364ea0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x364ea4: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x364ea4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x364ea8: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x364ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x364eac: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x364eacu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364eb0: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x364eb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364eb4: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x364eb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364eb8: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x364eb8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364ebc: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x364ebcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364ec0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x364ec0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364ec4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x364ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364ec8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x364ec8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364ecc: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x364eccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364ed0: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x364ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364ed4: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x364ed4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364ed8: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x364ed8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364edc: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x364edcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364ee0: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x364ee0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364ee4: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x364ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364ee8: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x364ee8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364eec: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x364eecu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x364ef0: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x364ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x364ef4: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x364ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x364ef8: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x364ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x364efc: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x364efcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x364f00: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x364f00u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x364f04: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x364f04u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x364f08: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x364f08u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x364f0c: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x364f0cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364f10: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x364f10u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364f14: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x364f14u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364f18: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x364f18u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364f1c: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x364f1cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364f20: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x364f20u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364f24: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x364f24u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364f28: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x364f28u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364f2c: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x364f2cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364f30: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x364f30u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364f34: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x364f34u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364f38: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x364f38u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364f3c: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x364f3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x364f40: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x364f40u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x364f44: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x364f44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x364f48: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x364f48u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x364f4c: 0xf8c70080  sqc2        $vf7, 0x80($a2)
    ctx->pc = 0x364f4cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x364f50: 0xf8c80090  sqc2        $vf8, 0x90($a2)
    ctx->pc = 0x364f50u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x364f54: 0xf8c900a0  sqc2        $vf9, 0xA0($a2)
    ctx->pc = 0x364f54u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x364f58: 0xf8ca00b0  sqc2        $vf10, 0xB0($a2)
    ctx->pc = 0x364f58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x364f5c: 0xf8ce00c0  sqc2        $vf14, 0xC0($a2)
    ctx->pc = 0x364f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x364f60: 0xf8cf00d0  sqc2        $vf15, 0xD0($a2)
    ctx->pc = 0x364f60u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x364f64: 0xf8d000e0  sqc2        $vf16, 0xE0($a2)
    ctx->pc = 0x364f64u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x364f68: 0xf8d100f0  sqc2        $vf17, 0xF0($a2)
    ctx->pc = 0x364f68u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x364f6c: 0x42000038  ei
    ctx->pc = 0x364f6cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x364f70: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x364f70u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x364f74: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x364f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x364f78: 0x25080040  addiu       $t0, $t0, 0x40
    ctx->pc = 0x364f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
    // 0x364f7c: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x364f7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
label_364f80:
    // 0x364f80: 0x42000039  di
    ctx->pc = 0x364f80u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x364f84: 0x40f  sync.p
    ctx->pc = 0x364f84u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x364f88: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x364f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x364f8c: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x364f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x364f90: 0x0  nop
    ctx->pc = 0x364f90u;
    // NOP
    // 0x364f94: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x364F94u;
    {
        const bool branch_taken_0x364f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x364f94) {
            ctx->pc = 0x364F80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_364f80;
        }
    }
    ctx->pc = 0x364F9Cu;
    // 0x364f9c: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x364f9cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x364fa0: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x364fa0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x364fa4: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x364fa4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x364fa8: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x364fa8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x364fac: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x364facu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x364fb0: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x364fb0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x364fb4: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x364fb4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x364fb8: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x364fb8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x364fbc: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x364fbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x364fc0: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x364fc0u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x364fc4: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x364fc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x364fc8: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x364fc8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x364fcc: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x364fccu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x364fd0: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x364fd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x364fd4: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x364fd4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x364fd8: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x364fd8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x364fdc: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x364fdcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x364fe0: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x364fe0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x364fe4: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x364fe4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364fe8: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x364fe8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364fec: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x364fecu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x364ff0: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x364ff0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x364ff4: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x364ff4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x364ff8: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x364ff8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x364ffc: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x364ffcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365000: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365000u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365004: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x365004u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365008: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x365008u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x36500c: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x36500cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365010: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x365010u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365014: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x365014u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365018: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x365018u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x36501c: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x36501cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365020: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x365020u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365024: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x365024u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365028: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x365028u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x36502c: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x36502cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365030: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x365030u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365034: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x365034u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x365038: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x365038u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x36503c: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x36503cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x365040: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x365040u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x365044: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x365044u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365048: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x365048u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36504c: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x36504cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365050: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x365050u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365054: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x365054u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365058: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x365058u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36505c: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x36505cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365060: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x365060u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365064: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x365064u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365068: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x365068u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x36506c: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x36506cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365070: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x365070u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365074: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x365074u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365078: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x365078u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x36507c: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x36507cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365080: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x365080u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365084: 0xf8c70080  sqc2        $vf7, 0x80($a2)
    ctx->pc = 0x365084u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365088: 0xf8c80090  sqc2        $vf8, 0x90($a2)
    ctx->pc = 0x365088u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x36508c: 0xf8c900a0  sqc2        $vf9, 0xA0($a2)
    ctx->pc = 0x36508cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365090: 0xf8ca00b0  sqc2        $vf10, 0xB0($a2)
    ctx->pc = 0x365090u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365094: 0xf8ce00c0  sqc2        $vf14, 0xC0($a2)
    ctx->pc = 0x365094u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x365098: 0xf8cf00d0  sqc2        $vf15, 0xD0($a2)
    ctx->pc = 0x365098u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x36509c: 0xf8d000e0  sqc2        $vf16, 0xE0($a2)
    ctx->pc = 0x36509cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3650a0: 0xf8d100f0  sqc2        $vf17, 0xF0($a2)
    ctx->pc = 0x3650a0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3650a4: 0x42000038  ei
    ctx->pc = 0x3650a4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3650a8: 0x25290020  addiu       $t1, $t1, 0x20
    ctx->pc = 0x3650a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x3650ac: 0x24c60100  addiu       $a2, $a2, 0x100
    ctx->pc = 0x3650acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x3650b0: 0x25ad0004  addiu       $t5, $t5, 0x4
    ctx->pc = 0x3650b0u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4));
    // 0x3650b4: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x3650b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x3650b8: 0x10400139  beqz        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x3650B8u;
    {
        const bool branch_taken_0x3650b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3650BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3650B8u;
        // 0x3650bc: 0x25080040  addiu       $t0, $t0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3650b8) {
            ctx->pc = 0x3655A0u;
            goto label_3655a0;
        }
    }
    ctx->pc = 0x3650C0u;
label_3650c0:
    // 0x3650c0: 0x42000039  di
    ctx->pc = 0x3650c0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3650c4: 0x40f  sync.p
    ctx->pc = 0x3650c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3650c8: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3650c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3650cc: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x3650ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x3650d0: 0x0  nop
    ctx->pc = 0x3650d0u;
    // NOP
    // 0x3650d4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3650D4u;
    {
        const bool branch_taken_0x3650d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3650d4) {
            ctx->pc = 0x3650C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3650c0;
        }
    }
    ctx->pc = 0x3650DCu;
    // 0x3650dc: 0xd9230000  lqc2        $vf3, 0x0($t1)
    ctx->pc = 0x3650dcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x3650e0: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x3650e0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3650e4: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x3650e4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3650e8: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x3650e8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3650ec: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x3650ecu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3650f0: 0xd9060000  lqc2        $vf6, 0x0($t0)
    ctx->pc = 0x3650f0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3650f4: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x3650f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3650f8: 0xd90d0010  lqc2        $vf13, 0x10($t0)
    ctx->pc = 0x3650f8u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3650fc: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x3650fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x365100: 0xd9140020  lqc2        $vf20, 0x20($t0)
    ctx->pc = 0x365100u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 32)));
    // 0x365104: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x365104u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x365108: 0xd9230010  lqc2        $vf3, 0x10($t1)
    ctx->pc = 0x365108u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 9), 16)));
    // 0x36510c: 0xd91b0030  lqc2        $vf27, 0x30($t0)
    ctx->pc = 0x36510cu;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 8), 48)));
    // 0x365110: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x365110u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x365114: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x365114u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x365118: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x365118u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x36511c: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x36511cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x365120: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x365120u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x365124: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365124u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365128: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365128u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36512c: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x36512cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365130: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365130u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365134: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365134u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365138: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365138u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36513c: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x36513cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365140: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365140u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365144: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x365144u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365148: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x365148u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x36514c: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x36514cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365150: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x365150u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365154: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x365154u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365158: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x365158u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x36515c: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x36515cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365160: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x365160u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365164: 0xf8c70000  sqc2        $vf7, 0x0($a2)
    ctx->pc = 0x365164u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365168: 0xf8c80010  sqc2        $vf8, 0x10($a2)
    ctx->pc = 0x365168u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x36516c: 0xf8c90020  sqc2        $vf9, 0x20($a2)
    ctx->pc = 0x36516cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365170: 0xf8ca0030  sqc2        $vf10, 0x30($a2)
    ctx->pc = 0x365170u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365174: 0xf8ce0040  sqc2        $vf14, 0x40($a2)
    ctx->pc = 0x365174u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x365178: 0xf8cf0050  sqc2        $vf15, 0x50($a2)
    ctx->pc = 0x365178u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x36517c: 0xf8d00060  sqc2        $vf16, 0x60($a2)
    ctx->pc = 0x36517cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x365180: 0xf8d10070  sqc2        $vf17, 0x70($a2)
    ctx->pc = 0x365180u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x365184: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x365184u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365188: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x365188u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36518c: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x36518cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365190: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x365190u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365194: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x365194u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365198: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x365198u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x36519c: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x36519cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3651a0: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x3651a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3651a4: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x3651a4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3651a8: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x3651a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3651ac: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x3651acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3651b0: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x3651b0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3651b4: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x3651b4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3651b8: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x3651b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3651bc: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x3651bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3651c0: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x3651c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3651c4: 0xf8c70080  sqc2        $vf7, 0x80($a2)
    ctx->pc = 0x3651c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3651c8: 0xf8c80090  sqc2        $vf8, 0x90($a2)
    ctx->pc = 0x3651c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3651cc: 0xf8c900a0  sqc2        $vf9, 0xA0($a2)
    ctx->pc = 0x3651ccu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3651d0: 0xf8ca00b0  sqc2        $vf10, 0xB0($a2)
    ctx->pc = 0x3651d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3651d4: 0xf8ce00c0  sqc2        $vf14, 0xC0($a2)
    ctx->pc = 0x3651d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x3651d8: 0xf8cf00d0  sqc2        $vf15, 0xD0($a2)
    ctx->pc = 0x3651d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x3651dc: 0xf8d000e0  sqc2        $vf16, 0xE0($a2)
    ctx->pc = 0x3651dcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3651e0: 0xf8d100f0  sqc2        $vf17, 0xF0($a2)
    ctx->pc = 0x3651e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3651e4: 0x42000038  ei
    ctx->pc = 0x3651e4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3651e8: 0x25250020  addiu       $a1, $t1, 0x20
    ctx->pc = 0x3651e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 32));
    // 0x3651ec: 0x24c40100  addiu       $a0, $a2, 0x100
    ctx->pc = 0x3651ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 256));
    // 0x3651f0: 0x25020040  addiu       $v0, $t0, 0x40
    ctx->pc = 0x3651f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 64));
label_3651f4:
    // 0x3651f4: 0x42000039  di
    ctx->pc = 0x3651f4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3651f8: 0x40f  sync.p
    ctx->pc = 0x3651f8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3651fc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3651fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x365200: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x365200u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x365204: 0x0  nop
    ctx->pc = 0x365204u;
    // NOP
    // 0x365208: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365208u;
    {
        const bool branch_taken_0x365208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x365208) {
            ctx->pc = 0x3651F4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3651f4;
        }
    }
    ctx->pc = 0x365210u;
    // 0x365210: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x365210u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x365214: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365214u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365218: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365218u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x36521c: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x36521cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x365220: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x365220u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x365224: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x365224u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x365228: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365228u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x36522c: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x36522cu;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x365230: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x365230u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x365234: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x365234u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x365238: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x365238u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x36523c: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x36523cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x365240: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x365240u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x365244: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x365244u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x365248: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x365248u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x36524c: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x36524cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x365250: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x365250u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x365254: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x365254u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x365258: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365258u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36525c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x36525cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365260: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365260u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365264: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365264u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365268: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365268u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36526c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x36526cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365270: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365270u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365274: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365274u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365278: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x365278u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x36527c: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x36527cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x365280: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x365280u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365284: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x365284u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365288: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x365288u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x36528c: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x36528cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x365290: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x365290u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365294: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x365294u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365298: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x365298u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x36529c: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x36529cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3652a0: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x3652a0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3652a4: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x3652a4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3652a8: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x3652a8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x3652ac: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x3652acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x3652b0: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x3652b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3652b4: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x3652b4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3652b8: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x3652b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3652bc: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x3652bcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3652c0: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x3652c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3652c4: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x3652c4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3652c8: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x3652c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3652cc: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x3652ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3652d0: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x3652d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3652d4: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x3652d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3652d8: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x3652d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3652dc: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x3652dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3652e0: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x3652e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3652e4: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x3652e4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3652e8: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x3652e8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3652ec: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x3652ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3652f0: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x3652f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3652f4: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x3652f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3652f8: 0xf8870080  sqc2        $vf7, 0x80($a0)
    ctx->pc = 0x3652f8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3652fc: 0xf8880090  sqc2        $vf8, 0x90($a0)
    ctx->pc = 0x3652fcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365300: 0xf88900a0  sqc2        $vf9, 0xA0($a0)
    ctx->pc = 0x365300u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365304: 0xf88a00b0  sqc2        $vf10, 0xB0($a0)
    ctx->pc = 0x365304u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365308: 0xf88e00c0  sqc2        $vf14, 0xC0($a0)
    ctx->pc = 0x365308u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x36530c: 0xf88f00d0  sqc2        $vf15, 0xD0($a0)
    ctx->pc = 0x36530cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x365310: 0xf89000e0  sqc2        $vf16, 0xE0($a0)
    ctx->pc = 0x365310u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x365314: 0xf89100f0  sqc2        $vf17, 0xF0($a0)
    ctx->pc = 0x365314u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x365318: 0x42000038  ei
    ctx->pc = 0x365318u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36531c: 0x25250040  addiu       $a1, $t1, 0x40
    ctx->pc = 0x36531cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 64));
    // 0x365320: 0x24c40200  addiu       $a0, $a2, 0x200
    ctx->pc = 0x365320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 512));
    // 0x365324: 0x25020080  addiu       $v0, $t0, 0x80
    ctx->pc = 0x365324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 128));
label_365328:
    // 0x365328: 0x42000039  di
    ctx->pc = 0x365328u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36532c: 0x40f  sync.p
    ctx->pc = 0x36532cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365330: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x365330u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x365334: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x365334u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x365338: 0x0  nop
    ctx->pc = 0x365338u;
    // NOP
    // 0x36533c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36533Cu;
    {
        const bool branch_taken_0x36533c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x36533c) {
            ctx->pc = 0x365328u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365328;
        }
    }
    ctx->pc = 0x365344u;
    // 0x365344: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x365344u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x365348: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365348u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36534c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x36534cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365350: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x365350u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x365354: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x365354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x365358: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x365358u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x36535c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x36535cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365360: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x365360u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x365364: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x365364u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x365368: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x365368u;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x36536c: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x36536cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x365370: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x365370u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x365374: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x365374u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x365378: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x365378u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x36537c: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x36537cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x365380: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x365380u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x365384: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x365384u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x365388: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x365388u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x36538c: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x36538cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365390: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365390u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365394: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365394u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365398: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365398u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36539c: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x36539cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3653a0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x3653a0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3653a4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x3653a4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3653a8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x3653a8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3653ac: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x3653acu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3653b0: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x3653b0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3653b4: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x3653b4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3653b8: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x3653b8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3653bc: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x3653bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3653c0: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x3653c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3653c4: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x3653c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3653c8: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x3653c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3653cc: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x3653ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3653d0: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x3653d0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3653d4: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x3653d4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3653d8: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x3653d8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3653dc: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x3653dcu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x3653e0: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x3653e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x3653e4: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x3653e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x3653e8: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x3653e8u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x3653ec: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x3653ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3653f0: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x3653f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3653f4: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x3653f4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3653f8: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x3653f8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3653fc: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x3653fcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365400: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x365400u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365404: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x365404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365408: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x365408u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x36540c: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x36540cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365410: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x365410u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x365414: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x365414u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365418: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x365418u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x36541c: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x36541cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365420: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x365420u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x365424: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x365424u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x365428: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x365428u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x36542c: 0xf8870080  sqc2        $vf7, 0x80($a0)
    ctx->pc = 0x36542cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365430: 0xf8880090  sqc2        $vf8, 0x90($a0)
    ctx->pc = 0x365430u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365434: 0xf88900a0  sqc2        $vf9, 0xA0($a0)
    ctx->pc = 0x365434u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365438: 0xf88a00b0  sqc2        $vf10, 0xB0($a0)
    ctx->pc = 0x365438u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x36543c: 0xf88e00c0  sqc2        $vf14, 0xC0($a0)
    ctx->pc = 0x36543cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x365440: 0xf88f00d0  sqc2        $vf15, 0xD0($a0)
    ctx->pc = 0x365440u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x365444: 0xf89000e0  sqc2        $vf16, 0xE0($a0)
    ctx->pc = 0x365444u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x365448: 0xf89100f0  sqc2        $vf17, 0xF0($a0)
    ctx->pc = 0x365448u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x36544c: 0x42000038  ei
    ctx->pc = 0x36544cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365450: 0x25250060  addiu       $a1, $t1, 0x60
    ctx->pc = 0x365450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 9), 96));
    // 0x365454: 0x24c40300  addiu       $a0, $a2, 0x300
    ctx->pc = 0x365454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 768));
    // 0x365458: 0x250200c0  addiu       $v0, $t0, 0xC0
    ctx->pc = 0x365458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 192));
label_36545c:
    // 0x36545c: 0x42000039  di
    ctx->pc = 0x36545cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365460: 0x40f  sync.p
    ctx->pc = 0x365460u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365464: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x365464u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x365468: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x365468u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
    // 0x36546c: 0x0  nop
    ctx->pc = 0x36546cu;
    // NOP
    // 0x365470: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365470u;
    {
        const bool branch_taken_0x365470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x365470) {
            ctx->pc = 0x36545Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36545c;
        }
    }
    ctx->pc = 0x365478u;
    // 0x365478: 0xd8a30000  lqc2        $vf3, 0x0($a1)
    ctx->pc = 0x365478u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x36547c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x36547cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365480: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365480u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365484: 0x4bc30ada  vmulz.xyz   $vf11, $vf1, $vf3z
    ctx->pc = 0x365484u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x365488: 0x4bc3131b  vmulw.xyz   $vf12, $vf2, $vf3w
    ctx->pc = 0x365488u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x36548c: 0xd8460000  lqc2        $vf6, 0x0($v0)
    ctx->pc = 0x36548cu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x365490: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365490u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365494: 0xd84d0010  lqc2        $vf13, 0x10($v0)
    ctx->pc = 0x365494u;
    ctx->vu0_vf[13] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x365498: 0x4bf56b68  vadd.xyzw   $vf13, $vf13, $vf21
    ctx->pc = 0x365498u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[13] = PS2_VBLEND(ctx->vu0_vf[13], res, _mm_castsi128_ps(mask)); }
    // 0x36549c: 0xd8540020  lqc2        $vf20, 0x20($v0)
    ctx->pc = 0x36549cu;
    ctx->vu0_vf[20] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x3654a0: 0x4bf5a528  vadd.xyzw   $vf20, $vf20, $vf21
    ctx->pc = 0x3654a0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[20] = PS2_VBLEND(ctx->vu0_vf[20], res, _mm_castsi128_ps(mask)); }
    // 0x3654a4: 0xd8a30010  lqc2        $vf3, 0x10($a1)
    ctx->pc = 0x3654a4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3654a8: 0xd85b0030  lqc2        $vf27, 0x30($v0)
    ctx->pc = 0x3654a8u;
    ctx->vu0_vf[27] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3654ac: 0x4bf5dee8  vadd.xyzw   $vf27, $vf27, $vf21
    ctx->pc = 0x3654acu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[27] = PS2_VBLEND(ctx->vu0_vf[27], res, _mm_castsi128_ps(mask)); }
    // 0x3654b0: 0x4bc30c98  vmulx.xyz   $vf18, $vf1, $vf3x
    ctx->pc = 0x3654b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[18] = _mm_blendv_ps(ctx->vu0_vf[18], res, _mm_castsi128_ps(mask)); }
    // 0x3654b4: 0x4bc314d9  vmuly.xyz   $vf19, $vf2, $vf3y
    ctx->pc = 0x3654b4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[19] = _mm_blendv_ps(ctx->vu0_vf[19], res, _mm_castsi128_ps(mask)); }
    // 0x3654b8: 0x4bc30e5a  vmulz.xyz   $vf25, $vf1, $vf3z
    ctx->pc = 0x3654b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[25] = _mm_blendv_ps(ctx->vu0_vf[25], res, _mm_castsi128_ps(mask)); }
    // 0x3654bc: 0x4bc3169b  vmulw.xyz   $vf26, $vf2, $vf3w
    ctx->pc = 0x3654bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[26] = _mm_blendv_ps(ctx->vu0_vf[26], res, _mm_castsi128_ps(mask)); }
    // 0x3654c0: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x3654c0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3654c4: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x3654c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3654c8: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x3654c8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3654cc: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x3654ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3654d0: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x3654d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3654d4: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x3654d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3654d8: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x3654d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3654dc: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x3654dcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3654e0: 0x4bcb6bac  vsub.xyz    $vf14, $vf13, $vf11
    ctx->pc = 0x3654e0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3654e4: 0x4bcb6be8  vadd.xyz    $vf15, $vf13, $vf11
    ctx->pc = 0x3654e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3654e8: 0x4bcb6c28  vadd.xyz    $vf16, $vf13, $vf11
    ctx->pc = 0x3654e8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3654ec: 0x4bcb6c6c  vsub.xyz    $vf17, $vf13, $vf11
    ctx->pc = 0x3654ecu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[13], ctx->vu0_vf[11]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x3654f0: 0x4bcc73ac  vsub.xyz    $vf14, $vf14, $vf12
    ctx->pc = 0x3654f0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x3654f4: 0x4bcc7bec  vsub.xyz    $vf15, $vf15, $vf12
    ctx->pc = 0x3654f4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x3654f8: 0x4bcc8428  vadd.xyz    $vf16, $vf16, $vf12
    ctx->pc = 0x3654f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x3654fc: 0x4bcc8c68  vadd.xyz    $vf17, $vf17, $vf12
    ctx->pc = 0x3654fcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[12]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365500: 0xf8870000  sqc2        $vf7, 0x0($a0)
    ctx->pc = 0x365500u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365504: 0xf8880010  sqc2        $vf8, 0x10($a0)
    ctx->pc = 0x365504u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365508: 0xf8890020  sqc2        $vf9, 0x20($a0)
    ctx->pc = 0x365508u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x36550c: 0xf88a0030  sqc2        $vf10, 0x30($a0)
    ctx->pc = 0x36550cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365510: 0xf88e0040  sqc2        $vf14, 0x40($a0)
    ctx->pc = 0x365510u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 64), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x365514: 0xf88f0050  sqc2        $vf15, 0x50($a0)
    ctx->pc = 0x365514u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 80), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x365518: 0xf8900060  sqc2        $vf16, 0x60($a0)
    ctx->pc = 0x365518u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 96), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36551c: 0xf8910070  sqc2        $vf17, 0x70($a0)
    ctx->pc = 0x36551cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 112), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x365520: 0x4bd2a1ec  vsub.xyz    $vf7, $vf20, $vf18
    ctx->pc = 0x365520u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365524: 0x4bd2a228  vadd.xyz    $vf8, $vf20, $vf18
    ctx->pc = 0x365524u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365528: 0x4bd2a268  vadd.xyz    $vf9, $vf20, $vf18
    ctx->pc = 0x365528u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x36552c: 0x4bd2a2ac  vsub.xyz    $vf10, $vf20, $vf18
    ctx->pc = 0x36552cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[20], ctx->vu0_vf[18]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365530: 0x4bd339ec  vsub.xyz    $vf7, $vf7, $vf19
    ctx->pc = 0x365530u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365534: 0x4bd3422c  vsub.xyz    $vf8, $vf8, $vf19
    ctx->pc = 0x365534u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365538: 0x4bd34a68  vadd.xyz    $vf9, $vf9, $vf19
    ctx->pc = 0x365538u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x36553c: 0x4bd352a8  vadd.xyz    $vf10, $vf10, $vf19
    ctx->pc = 0x36553cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[19]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365540: 0x4bd9dbac  vsub.xyz    $vf14, $vf27, $vf25
    ctx->pc = 0x365540u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365544: 0x4bd9dbe8  vadd.xyz    $vf15, $vf27, $vf25
    ctx->pc = 0x365544u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x365548: 0x4bd9dc28  vadd.xyz    $vf16, $vf27, $vf25
    ctx->pc = 0x365548u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36554c: 0x4bd9dc6c  vsub.xyz    $vf17, $vf27, $vf25
    ctx->pc = 0x36554cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[27], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365550: 0x4bda73ac  vsub.xyz    $vf14, $vf14, $vf26
    ctx->pc = 0x365550u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[14], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[14] = PS2_VBLEND(ctx->vu0_vf[14], res, _mm_castsi128_ps(mask)); }
    // 0x365554: 0x4bda7bec  vsub.xyz    $vf15, $vf15, $vf26
    ctx->pc = 0x365554u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[15], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[15] = PS2_VBLEND(ctx->vu0_vf[15], res, _mm_castsi128_ps(mask)); }
    // 0x365558: 0x4bda8428  vadd.xyz    $vf16, $vf16, $vf26
    ctx->pc = 0x365558u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[16], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[16] = PS2_VBLEND(ctx->vu0_vf[16], res, _mm_castsi128_ps(mask)); }
    // 0x36555c: 0x4bda8c68  vadd.xyz    $vf17, $vf17, $vf26
    ctx->pc = 0x36555cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[17], ctx->vu0_vf[26]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[17] = PS2_VBLEND(ctx->vu0_vf[17], res, _mm_castsi128_ps(mask)); }
    // 0x365560: 0xf8870080  sqc2        $vf7, 0x80($a0)
    ctx->pc = 0x365560u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 128), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365564: 0xf8880090  sqc2        $vf8, 0x90($a0)
    ctx->pc = 0x365564u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 144), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365568: 0xf88900a0  sqc2        $vf9, 0xA0($a0)
    ctx->pc = 0x365568u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 160), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x36556c: 0xf88a00b0  sqc2        $vf10, 0xB0($a0)
    ctx->pc = 0x36556cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 176), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365570: 0xf88e00c0  sqc2        $vf14, 0xC0($a0)
    ctx->pc = 0x365570u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 192), _mm_castps_si128(ctx->vu0_vf[14]));
    // 0x365574: 0xf88f00d0  sqc2        $vf15, 0xD0($a0)
    ctx->pc = 0x365574u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 208), _mm_castps_si128(ctx->vu0_vf[15]));
    // 0x365578: 0xf89000e0  sqc2        $vf16, 0xE0($a0)
    ctx->pc = 0x365578u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 224), _mm_castps_si128(ctx->vu0_vf[16]));
    // 0x36557c: 0xf89100f0  sqc2        $vf17, 0xF0($a0)
    ctx->pc = 0x36557cu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 240), _mm_castps_si128(ctx->vu0_vf[17]));
    // 0x365580: 0x42000038  ei
    ctx->pc = 0x365580u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365584: 0x25290080  addiu       $t1, $t1, 0x80
    ctx->pc = 0x365584u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 128));
    // 0x365588: 0x24c60400  addiu       $a2, $a2, 0x400
    ctx->pc = 0x365588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1024));
    // 0x36558c: 0x25ad0010  addiu       $t5, $t5, 0x10
    ctx->pc = 0x36558cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 16));
    // 0x365590: 0x1ab102a  slt         $v0, $t5, $t3
    ctx->pc = 0x365590u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 11)) ? 1 : 0);
    // 0x365594: 0x1440feca  bnez        $v0, . + 4 + (-0x136 << 2)
    ctx->pc = 0x365594u;
    {
        const bool branch_taken_0x365594 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x365598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365594u;
        // 0x365598: 0x25080100  addiu       $t0, $t0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365594) {
            ctx->pc = 0x3650C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3650c0;
        }
    }
    ctx->pc = 0x36559Cu;
    // 0x36559c: 0x0  nop
    ctx->pc = 0x36559cu;
    // NOP
label_3655a0:
    // 0x3655a0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3655a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3655a4: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x3655a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x3655a8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3655a8u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D000u)); // MMIO: 0x1000d000
    // 0x3655ac: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3655acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3655b0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x3655B0u;
    {
        const bool branch_taken_0x3655b0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3655B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655B0u;
        // 0x3655b4: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3655b0) {
            ctx->pc = 0x3655E8u;
            goto label_3655e8;
        }
    }
    ctx->pc = 0x3655B8u;
    // 0x3655b8: 0x24030100  addiu       $v1, $zero, 0x100
    ctx->pc = 0x3655b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3655bc: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x3655bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x3655c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3655c0u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x3655c4: 0xf  sync
    ctx->pc = 0x3655c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3655c8: 0x40f  sync.p
    ctx->pc = 0x3655c8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3655cc:
    // 0x3655cc: 0x0  nop
    ctx->pc = 0x3655ccu;
    // NOP
    // 0x3655d0: 0x0  nop
    ctx->pc = 0x3655d0u;
    // NOP
    // 0x3655d4: 0x0  nop
    ctx->pc = 0x3655d4u;
    // NOP
    // 0x3655d8: 0x0  nop
    ctx->pc = 0x3655d8u;
    // NOP
    // 0x3655dc: 0x0  nop
    ctx->pc = 0x3655dcu;
    // NOP
    // 0x3655e0: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x3655E0u;
    {
        const bool branch_taken_0x3655e0 = (false);
        if (branch_taken_0x3655e0) {
            ctx->pc = 0x3655CCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3655cc;
        }
    }
    ctx->pc = 0x3655E8u;
label_3655e8:
    // 0x3655e8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3655e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3655ec: 0x3442d400  ori         $v0, $v0, 0xD400
    ctx->pc = 0x3655ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)54272);
    // 0x3655f0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3655f0u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, 0x1000D400u)); // MMIO: 0x1000d400
    // 0x3655f4: 0x30630100  andi        $v1, $v1, 0x100
    ctx->pc = 0x3655f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
    // 0x3655f8: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x3655F8u;
    {
        const bool branch_taken_0x3655f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3655FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3655F8u;
        // 0x3655fc: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3655f8) {
            ctx->pc = 0x365654u;
            goto label_365654;
        }
    }
    ctx->pc = 0x365600u;
    // 0x365600: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x365600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x365604: 0x3442e020  ori         $v0, $v0, 0xE020
    ctx->pc = 0x365604u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57376);
    // 0x365608: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x365608u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x1000e020
    // 0x36560c: 0xf  sync
    ctx->pc = 0x36560cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365610: 0x40f  sync.p
    ctx->pc = 0x365610u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_365614:
    // 0x365614: 0x0  nop
    ctx->pc = 0x365614u;
    // NOP
    // 0x365618: 0x0  nop
    ctx->pc = 0x365618u;
    // NOP
    // 0x36561c: 0x0  nop
    ctx->pc = 0x36561cu;
    // NOP
    // 0x365620: 0x0  nop
    ctx->pc = 0x365620u;
    // NOP
    // 0x365624: 0x0  nop
    ctx->pc = 0x365624u;
    // NOP
    // 0x365628: 0x4100fffa  bc0f        . + 4 + (-0x6 << 2)
    ctx->pc = 0x365628u;
    {
        const bool branch_taken_0x365628 = (false);
        if (branch_taken_0x365628) {
            ctx->pc = 0x365614u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365614;
        }
    }
    ctx->pc = 0x365630u;
    // 0x365630: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x365630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x365634: 0x3463d400  ori         $v1, $v1, 0xD400
    ctx->pc = 0x365634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)54272);
label_365638:
    // 0x365638: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x365638u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x1000d400
    // 0x36563c: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x36563cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x365640: 0x0  nop
    ctx->pc = 0x365640u;
    // NOP
    // 0x365644: 0x0  nop
    ctx->pc = 0x365644u;
    // NOP
    // 0x365648: 0x0  nop
    ctx->pc = 0x365648u;
    // NOP
    // 0x36564c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36564Cu;
    {
        const bool branch_taken_0x36564c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36564c) {
            ctx->pc = 0x365638u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365638;
        }
    }
    ctx->pc = 0x365654u;
label_365654:
    // 0x365654: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x365654u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x365658: 0x24050100  addiu       $a1, $zero, 0x100
    ctx->pc = 0x365658u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x36565c: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x36565cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x365660: 0xb3043  sra         $a2, $t3, 1
    ctx->pc = 0x365660u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 11), 1));
    // 0x365664: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x365664u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
    // 0x365668: 0xcb2021  addu        $a0, $a2, $t3
    ctx->pc = 0x365668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x36566c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x36566cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x365670: 0x3463d080  ori         $v1, $v1, 0xD080
    ctx->pc = 0x365670u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53376);
    // 0x365674: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x365674u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x365678: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x365678u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x36567c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x36567cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x365680: 0x3442d010  ori         $v0, $v0, 0xD010
    ctx->pc = 0x365680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53264);
    // 0x365684: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x365684u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x365688: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x365688u;
    runtime->Store32(rdram, ctx, 0x1000D010u, GPR_U32(ctx, 17)); // MMIO: 0x1000d010
    // 0x36568c: 0x3463d020  ori         $v1, $v1, 0xD020
    ctx->pc = 0x36568cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)53280);
    // 0x365690: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x365690u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x365694: 0xac6c0000  sw          $t4, 0x0($v1)
    ctx->pc = 0x365694u;
    runtime->Store32(rdram, ctx, 0x1000D020u, GPR_U32(ctx, 12)); // MMIO: 0x1000d020
    // 0x365698: 0x3442d000  ori         $v0, $v0, 0xD000
    ctx->pc = 0x365698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53248);
    // 0x36569c: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x36569cu;
    runtime->Store32(rdram, ctx, 0x1000D000u, GPR_U32(ctx, 5)); // MMIO: 0x1000d000
    // 0x3656a0: 0xf  sync
    ctx->pc = 0x3656a0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3656a4: 0x40f  sync.p
    ctx->pc = 0x3656a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3656a8: 0x20f8021  addu        $s0, $s0, $t7
    ctx->pc = 0x3656a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 15)));
    // 0x3656ac: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x3656acu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x3656b0: 0x2328821  addu        $s1, $s1, $s2
    ctx->pc = 0x3656b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 18)));
    // 0x3656b4: 0x2c6b021  addu        $s6, $s6, $a2
    ctx->pc = 0x3656b4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 6)));
    // 0x3656b8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x3656b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656bc: 0x0  nop
    ctx->pc = 0x3656bcu;
    // NOP
label_3656c0:
    // 0x3656c0: 0x1a600213  blez        $s3, . + 4 + (0x213 << 2)
    ctx->pc = 0x3656C0u;
    {
        const bool branch_taken_0x3656c0 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x3656C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656C0u;
        // 0x3656c4: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656c0) {
            ctx->pc = 0x365F10u;
            goto label_365f10;
        }
    }
    ctx->pc = 0x3656C8u;
    // 0x3656c8: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x3656c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3656cc: 0x30440003  andi        $a0, $v0, 0x3
    ctx->pc = 0x3656ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3656d0: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x3656d0u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656d4: 0x62880  sll         $a1, $a2, 2
    ctx->pc = 0x3656d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3656d8: 0x2c0182d  daddu       $v1, $s6, $zero
    ctx->pc = 0x3656d8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3656dc: 0x1080006a  beqz        $a0, . + 4 + (0x6A << 2)
    ctx->pc = 0x3656DCu;
    {
        const bool branch_taken_0x3656dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3656E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656DCu;
        // 0x3656e0: 0x3c060001  lui         $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656dc) {
            ctx->pc = 0x365888u;
            goto label_365888;
        }
    }
    ctx->pc = 0x3656E4u;
    // 0x3656e4: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x3656e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3656e8: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x3656E8u;
    {
        const bool branch_taken_0x3656e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3656ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3656E8u;
        // 0x3656ec: 0x28820002  slti        $v0, $a0, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3656e8) {
            ctx->pc = 0x365800u;
            goto label_365800;
        }
    }
    ctx->pc = 0x3656F0u;
    // 0x3656f0: 0x50400023  beql        $v0, $zero, . + 4 + (0x23 << 2)
    ctx->pc = 0x3656F0u;
    {
        const bool branch_taken_0x3656f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3656f0) {
            ctx->pc = 0x3656F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3656F0u;
            // 0x3656f4: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x365780u;
            goto label_365780;
        }
    }
    ctx->pc = 0x3656F8u;
    // 0x3656f8: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x3656f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3656fc: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x3656fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x365700: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x365700u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365704: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x365704u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_365708:
    // 0x365708: 0x42000039  di
    ctx->pc = 0x365708u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36570c: 0x40f  sync.p
    ctx->pc = 0x36570cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365710: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365710u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365714: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x365714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x365718: 0x0  nop
    ctx->pc = 0x365718u;
    // NOP
    // 0x36571c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36571Cu;
    {
        const bool branch_taken_0x36571c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36571c) {
            ctx->pc = 0x365708u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365708;
        }
    }
    ctx->pc = 0x365724u;
    // 0x365724: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x365724u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365728: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365728u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36572c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x36572cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365730: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365730u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365734: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365734u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365738: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365738u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36573c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x36573cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365740: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365740u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365744: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365744u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365748: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365748u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36574c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x36574cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365750: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365750u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365754: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365754u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365758: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365758u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x36575c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x36575cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365760: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365760u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365764: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365764u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365768: 0x42000038  ei
    ctx->pc = 0x365768u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36576c: 0x2d51821  addu        $v1, $s6, $s5
    ctx->pc = 0x36576cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x365770: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x365770u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x365774: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365778: 0x266dffff  addiu       $t5, $s3, -0x1
    ctx->pc = 0x365778u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x36577c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x36577cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_365780:
    // 0x365780: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x365780u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x365784: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365788: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x365788u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_36578c:
    // 0x36578c: 0x42000039  di
    ctx->pc = 0x36578cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365790: 0x40f  sync.p
    ctx->pc = 0x365790u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365794: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365794u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365798: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x365798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x36579c: 0x0  nop
    ctx->pc = 0x36579cu;
    // NOP
    // 0x3657a0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3657A0u;
    {
        const bool branch_taken_0x3657a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3657a0) {
            ctx->pc = 0x36578Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36578c;
        }
    }
    ctx->pc = 0x3657A8u;
    // 0x3657a8: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x3657a8u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3657ac: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x3657acu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3657b0: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x3657b0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3657b4: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x3657b4u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3657b8: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x3657b8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3657bc: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x3657bcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3657c0: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x3657c0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3657c4: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x3657c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3657c8: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x3657c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3657cc: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x3657ccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3657d0: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x3657d0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3657d4: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x3657d4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3657d8: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x3657d8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3657dc: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x3657dcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3657e0: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x3657e0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3657e4: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x3657e4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3657e8: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x3657e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3657ec: 0x42000038  ei
    ctx->pc = 0x3657ecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3657f0: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x3657f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3657f4: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x3657f4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x3657f8: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x3657f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x3657fc: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x3657fcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_365800:
    // 0x365800: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365804: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x365804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x365808: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x36580c: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36580cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_365810:
    // 0x365810: 0x42000039  di
    ctx->pc = 0x365810u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365814: 0x40f  sync.p
    ctx->pc = 0x365814u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365818: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365818u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x36581c: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x36581cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x365820: 0x0  nop
    ctx->pc = 0x365820u;
    // NOP
    // 0x365824: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365824u;
    {
        const bool branch_taken_0x365824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365824) {
            ctx->pc = 0x365810u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365810;
        }
    }
    ctx->pc = 0x36582Cu;
    // 0x36582c: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x36582cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365830: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365830u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365834: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365834u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365838: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365838u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x36583c: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x36583cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365840: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365840u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365844: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365844u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365848: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365848u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x36584c: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x36584cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365850: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365850u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365854: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365854u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365858: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365858u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x36585c: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x36585cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365860: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365860u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365864: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365864u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365868: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365868u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x36586c: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x36586cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365870: 0x42000038  ei
    ctx->pc = 0x365870u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365874: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365878: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x365878u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x36587c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x36587cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x365880: 0x11a001a3  beqz        $t5, . + 4 + (0x1A3 << 2)
    ctx->pc = 0x365880u;
    {
        const bool branch_taken_0x365880 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x365884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365880u;
        // 0x365884: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365880) {
            ctx->pc = 0x365F10u;
            goto label_365f10;
        }
    }
    ctx->pc = 0x365888u;
label_365888:
    // 0x365888: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365888u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36588c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36588cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x365890: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365894: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x365894u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_365898:
    // 0x365898: 0x42000039  di
    ctx->pc = 0x365898u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36589c: 0x40f  sync.p
    ctx->pc = 0x36589cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3658a0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3658a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3658a4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3658a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3658a8: 0x0  nop
    ctx->pc = 0x3658a8u;
    // NOP
    // 0x3658ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3658ACu;
    {
        const bool branch_taken_0x3658ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3658ac) {
            ctx->pc = 0x365898u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365898;
        }
    }
    ctx->pc = 0x3658B4u;
    // 0x3658b4: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x3658b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3658b8: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x3658b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3658bc: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x3658bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3658c0: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x3658c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3658c4: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x3658c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3658c8: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x3658c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3658cc: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x3658ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3658d0: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x3658d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3658d4: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x3658d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3658d8: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x3658d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3658dc: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x3658dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3658e0: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x3658e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3658e4: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x3658e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3658e8: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x3658e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3658ec: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x3658ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3658f0: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x3658f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3658f4: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x3658f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3658f8: 0x42000038  ei
    ctx->pc = 0x3658f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3658fc: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x3658fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x365900: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365904: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365904u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365908: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365908u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36590c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36590cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x365910: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365910u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365914: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x365914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_365918:
    // 0x365918: 0x42000039  di
    ctx->pc = 0x365918u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36591c: 0x40f  sync.p
    ctx->pc = 0x36591cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365920: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365920u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365924: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x365924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x365928: 0x0  nop
    ctx->pc = 0x365928u;
    // NOP
    // 0x36592c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x36592Cu;
    {
        const bool branch_taken_0x36592c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x36592c) {
            ctx->pc = 0x365918u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365918;
        }
    }
    ctx->pc = 0x365934u;
    // 0x365934: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x365934u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365938: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365938u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x36593c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x36593cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365940: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365940u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365944: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365944u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365948: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365948u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36594c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x36594cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365950: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365950u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365954: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365954u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365958: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365958u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x36595c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x36595cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365960: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365960u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365964: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365964u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365968: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365968u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x36596c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x36596cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365970: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365970u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365974: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365974u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365978: 0x42000038  ei
    ctx->pc = 0x365978u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x36597c: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x36597cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x365980: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365984: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365988: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365988u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36598c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36598cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x365990: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365994: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x365994u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_365998:
    // 0x365998: 0x42000039  di
    ctx->pc = 0x365998u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x36599c: 0x40f  sync.p
    ctx->pc = 0x36599cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3659a0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3659a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3659a4: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x3659a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x3659a8: 0x0  nop
    ctx->pc = 0x3659a8u;
    // NOP
    // 0x3659ac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3659ACu;
    {
        const bool branch_taken_0x3659ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3659ac) {
            ctx->pc = 0x365998u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365998;
        }
    }
    ctx->pc = 0x3659B4u;
    // 0x3659b4: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x3659b4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3659b8: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x3659b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x3659bc: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x3659bcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3659c0: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x3659c0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3659c4: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x3659c4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3659c8: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x3659c8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3659cc: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x3659ccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3659d0: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x3659d0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3659d4: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x3659d4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3659d8: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x3659d8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x3659dc: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x3659dcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x3659e0: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x3659e0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3659e4: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x3659e4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3659e8: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x3659e8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x3659ec: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x3659ecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x3659f0: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x3659f0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3659f4: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x3659f4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3659f8: 0x42000038  ei
    ctx->pc = 0x3659f8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3659fc: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x3659fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x365a00: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365a00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365a04: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365a08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365a08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365a0c: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x365a0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x365a10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365a10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365a14: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x365a14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
label_365a18:
    // 0x365a18: 0x42000039  di
    ctx->pc = 0x365a18u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365a1c: 0x40f  sync.p
    ctx->pc = 0x365a1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365a20: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365a20u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365a24: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x365a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
    // 0x365a28: 0x0  nop
    ctx->pc = 0x365a28u;
    // NOP
    // 0x365a2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365A2Cu;
    {
        const bool branch_taken_0x365a2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365a2c) {
            ctx->pc = 0x365A18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365a18;
        }
    }
    ctx->pc = 0x365A34u;
    // 0x365a34: 0xdba30000  lqc2        $vf3, 0x0($sp)
    ctx->pc = 0x365a34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x365a38: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365a38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365a3c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365a3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365a40: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365a40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365a44: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365a44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365a48: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365a48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365a4c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365a4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365a50: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365a50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365a54: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365a54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365a58: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365a58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365a5c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365a5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365a60: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365a60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365a64: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365a64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365a68: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365a68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365a6c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365a70: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365a70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365a74: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365a74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365a78: 0x42000038  ei
    ctx->pc = 0x365a78u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365a7c: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365a80: 0x2258821  addu        $s1, $s1, $a1
    ctx->pc = 0x365a80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x365a84: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x365a84u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x365a88: 0x15a0ff7f  bnez        $t5, . + 4 + (-0x81 << 2)
    ctx->pc = 0x365A88u;
    {
        const bool branch_taken_0x365a88 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x365A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A88u;
        // 0x365a8c: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365a88) {
            ctx->pc = 0x365888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365888;
        }
    }
    ctx->pc = 0x365A90u;
    // 0x365a90: 0x10000120  b           . + 4 + (0x120 << 2)
    ctx->pc = 0x365A90u;
    {
        const bool branch_taken_0x365a90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x365A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365A90u;
        // 0x365a94: 0x7bb00100  lq          $s0, 0x100($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365a90) {
            ctx->pc = 0x365F14u;
            goto label_365f14;
        }
    }
    ctx->pc = 0x365A98u;
label_365a98:
    // 0x365a98: 0x6ae70007  ldl         $a3, 0x7($s7)
    ctx->pc = 0x365a98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x365a9c: 0x6ee70000  ldr         $a3, 0x0($s7)
    ctx->pc = 0x365a9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x365aa0: 0x8ee80008  lw          $t0, 0x8($s7)
    ctx->pc = 0x365aa0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
    // 0x365aa4: 0xb3a70027  sdl         $a3, 0x27($sp)
    ctx->pc = 0x365aa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x365aa8: 0xb7a70020  sdr         $a3, 0x20($sp)
    ctx->pc = 0x365aa8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x365aac: 0xafa80028  sw          $t0, 0x28($sp)
    ctx->pc = 0x365aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 8));
    // 0x365ab0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x365ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365ab4: 0x6bc30007  ldl         $v1, 0x7($fp)
    ctx->pc = 0x365ab4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x365ab8: 0x6fc30000  ldr         $v1, 0x0($fp)
    ctx->pc = 0x365ab8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x365abc: 0x8fc60008  lw          $a2, 0x8($fp)
    ctx->pc = 0x365abcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 8)));
    // 0x365ac0: 0xb3a30037  sdl         $v1, 0x37($sp)
    ctx->pc = 0x365ac0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x365ac4: 0xb7a30030  sdr         $v1, 0x30($sp)
    ctx->pc = 0x365ac4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x365ac8: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x365ac8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x365acc: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x365accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x365ad0: 0xc6410068  lwc1        $f1, 0x68($s2)
    ctx->pc = 0x365ad0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365ad4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x365ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x365ad8: 0xc640006c  lwc1        $f0, 0x6C($s2)
    ctx->pc = 0x365ad8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365adc: 0xe7a10010  swc1        $f1, 0x10($sp)
    ctx->pc = 0x365adcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x365ae0: 0xe7a00014  swc1        $f0, 0x14($sp)
    ctx->pc = 0x365ae0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
label_365ae4:
    // 0x365ae4: 0x42000039  di
    ctx->pc = 0x365ae4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365ae8: 0x40f  sync.p
    ctx->pc = 0x365ae8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365aec: 0x40096000  mfc0        $t1, Status
    ctx->pc = 0x365aecu;
    SET_GPR_S32(ctx, 9, (int32_t)ctx->cop0_status);
    // 0x365af0: 0x1234824  and         $t1, $t1, $v1
    ctx->pc = 0x365af0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
    // 0x365af4: 0x0  nop
    ctx->pc = 0x365af4u;
    // NOP
    // 0x365af8: 0x1520fffa  bnez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365AF8u;
    {
        const bool branch_taken_0x365af8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x365af8) {
            ctx->pc = 0x365AE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365ae4;
        }
    }
    ctx->pc = 0x365B00u;
    // 0x365b00: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x365b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x365b04: 0x3c033f00  lui         $v1, 0x3F00
    ctx->pc = 0x365b04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16128 << 16));
    // 0x365b08: 0x48c3a800  ctc2.ni     $v1, $vi21
    ctx->pc = 0x365b08u;
    { uint32_t tmp = GPR_U32(ctx, 3); std::memcpy(&ctx->vu0_i, &tmp, sizeof(tmp)); }
    // 0x365b0c: 0x4a0002ff  vnop
    ctx->pc = 0x365b0cu;
    // NOP operation, no action needed for VU0
    // 0x365b10: 0x4a0002ff  vnop
    ctx->pc = 0x365b10u;
    // NOP operation, no action needed for VU0
    // 0x365b14: 0xd8810000  lqc2        $vf1, 0x0($a0)
    ctx->pc = 0x365b14u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365b18: 0xd8a20000  lqc2        $vf2, 0x0($a1)
    ctx->pc = 0x365b18u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x365b1c: 0xd8430000  lqc2        $vf3, 0x0($v0)
    ctx->pc = 0x365b1cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x365b20: 0x4be309bc  vmulax.xyzw $ACC, $vf1, $vf3x
    ctx->pc = 0x365b20u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x365b24: 0x4be310bd  vmadday.xyzw $ACC, $vf2, $vf3y
    ctx->pc = 0x365b24u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x365b28: 0x4be00569  vmadd.xyzw  $vf21, $vf0, $vf0
    ctx->pc = 0x365b28u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[0], ctx->vu0_vf[0]); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[21] = _mm_blendv_ps(ctx->vu0_vf[21], res, _mm_castsi128_ps(mask)); }
    // 0x365b2c: 0x4be0085e  vmuli.xyzw  $vf1, $vf1, $I
    ctx->pc = 0x365b2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x365b30: 0x4be0109e  vmuli.xyzw  $vf2, $vf2, $I
    ctx->pc = 0x365b30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x365b34: 0x42000038  ei
    ctx->pc = 0x365b34u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365b38: 0x1a6000f5  blez        $s3, . + 4 + (0xF5 << 2)
    ctx->pc = 0x365B38u;
    {
        const bool branch_taken_0x365b38 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x365B3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B38u;
        // 0x365b3c: 0x131023  negu        $v0, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b38) {
            ctx->pc = 0x365F10u;
            goto label_365f10;
        }
    }
    ctx->pc = 0x365B40u;
    // 0x365b40: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x365b40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x365b44: 0x30450003  andi        $a1, $v0, 0x3
    ctx->pc = 0x365b44u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x365b48: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x365b48u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
    // 0x365b4c: 0x43080  sll         $a2, $a0, 2
    ctx->pc = 0x365b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x365b50: 0x260682d  daddu       $t5, $s3, $zero
    ctx->pc = 0x365b50u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x365b54: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x365b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x365b58: 0x10a0006b  beqz        $a1, . + 4 + (0x6B << 2)
    ctx->pc = 0x365B58u;
    {
        const bool branch_taken_0x365b58 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x365B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B58u;
        // 0x365b5c: 0x2c0182d  daddu       $v1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b58) {
            ctx->pc = 0x365D08u;
            goto label_365d08;
        }
    }
    ctx->pc = 0x365B60u;
    // 0x365b60: 0x28a20003  slti        $v0, $a1, 0x3
    ctx->pc = 0x365b60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x365b64: 0x10400046  beqz        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x365B64u;
    {
        const bool branch_taken_0x365b64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x365B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365B64u;
        // 0x365b68: 0x28a20002  slti        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x365b64) {
            ctx->pc = 0x365C80u;
            goto label_365c80;
        }
    }
    ctx->pc = 0x365B6Cu;
    // 0x365b6c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x365B6Cu;
    {
        const bool branch_taken_0x365b6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365b6c) {
            ctx->pc = 0x365B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x365B6Cu;
            // 0x365b70: 0xc4600000  lwc1        $f0, 0x0($v1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x365C00u;
            goto label_365c00;
        }
    }
    ctx->pc = 0x365B74u;
    // 0x365b74: 0xc6c00000  lwc1        $f0, 0x0($s6)
    ctx->pc = 0x365b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365b78: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x365b7c: 0xc6c10004  lwc1        $f1, 0x4($s6)
    ctx->pc = 0x365b7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365b80: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365b80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365b84:
    // 0x365b84: 0x42000039  di
    ctx->pc = 0x365b84u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365b88: 0x40f  sync.p
    ctx->pc = 0x365b88u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365b8c: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365b90: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x365b90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x365b94: 0x0  nop
    ctx->pc = 0x365b94u;
    // NOP
    // 0x365b98: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365B98u;
    {
        const bool branch_taken_0x365b98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365b98) {
            ctx->pc = 0x365B84u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365b84;
        }
    }
    ctx->pc = 0x365BA0u;
    // 0x365ba0: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x365ba0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365ba4: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365ba4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365ba8: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365ba8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365bac: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365bacu;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365bb0: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365bb0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365bb4: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365bb4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365bb8: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365bb8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365bbc: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365bc0: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365bc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365bc4: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365bc4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365bc8: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365bc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365bcc: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365bd0: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365bd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365bd4: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365bd8: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365bdc: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365be0: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365be0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365be4: 0x42000038  ei
    ctx->pc = 0x365be4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365be8: 0x2d51821  addu        $v1, $s6, $s5
    ctx->pc = 0x365be8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 21)));
    // 0x365bec: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x365becu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365bf0: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365bf0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365bf4: 0x266dffff  addiu       $t5, $s3, -0x1
    ctx->pc = 0x365bf4u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x365bf8: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365bf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365bfc: 0x0  nop
    ctx->pc = 0x365bfcu;
    // NOP
label_365c00:
    // 0x365c00: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365c00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x365c04: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365c04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365c08: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365c08u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365c0c:
    // 0x365c0c: 0x42000039  di
    ctx->pc = 0x365c0cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365c10: 0x40f  sync.p
    ctx->pc = 0x365c10u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365c14: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365c14u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365c18: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x365c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x365c1c: 0x0  nop
    ctx->pc = 0x365c1cu;
    // NOP
    // 0x365c20: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365C20u;
    {
        const bool branch_taken_0x365c20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365c20) {
            ctx->pc = 0x365C0Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365c0c;
        }
    }
    ctx->pc = 0x365C28u;
    // 0x365c28: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x365c28u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365c2c: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365c2cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365c30: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365c30u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365c34: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365c34u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365c38: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365c38u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365c3c: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365c3cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365c40: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365c40u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365c44: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365c44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365c48: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365c48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365c4c: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365c4cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365c50: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365c50u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365c54: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365c54u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365c58: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365c58u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365c5c: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365c60: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365c60u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365c64: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365c64u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365c68: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365c68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365c6c: 0x42000038  ei
    ctx->pc = 0x365c6cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365c70: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365c70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365c74: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x365c74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365c78: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365c7c: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x365c7cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
label_365c80:
    // 0x365c80: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365c80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365c84: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365c84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x365c88: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365c88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365c8c: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365c8cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365c90:
    // 0x365c90: 0x42000039  di
    ctx->pc = 0x365c90u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365c94: 0x40f  sync.p
    ctx->pc = 0x365c94u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365c98: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365c9c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x365c9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x365ca0: 0x0  nop
    ctx->pc = 0x365ca0u;
    // NOP
    // 0x365ca4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365CA4u;
    {
        const bool branch_taken_0x365ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365ca4) {
            ctx->pc = 0x365C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365c90;
        }
    }
    ctx->pc = 0x365CACu;
    // 0x365cac: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x365cacu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365cb0: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365cb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365cb4: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365cb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365cb8: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365cb8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365cbc: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365cbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365cc0: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365cc0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365cc4: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365cc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365cc8: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365cc8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365ccc: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365cccu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365cd0: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365cd0u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365cd4: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365cd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365cd8: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365cd8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365cdc: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365cdcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365ce0: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365ce4: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365ce4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365ce8: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365ce8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365cec: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365cecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365cf0: 0x42000038  ei
    ctx->pc = 0x365cf0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365cf4: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365cf8: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x365cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365cfc: 0x25adffff  addiu       $t5, $t5, -0x1
    ctx->pc = 0x365cfcu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967295));
    // 0x365d00: 0x11a00083  beqz        $t5, . + 4 + (0x83 << 2)
    ctx->pc = 0x365D00u;
    {
        const bool branch_taken_0x365d00 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 0));
        ctx->pc = 0x365D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365D00u;
        // 0x365d04: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365d00) {
            ctx->pc = 0x365F10u;
            goto label_365f10;
        }
    }
    ctx->pc = 0x365D08u;
label_365d08:
    // 0x365d08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365d08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365d0c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x365d10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365d14: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365d14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365d18:
    // 0x365d18: 0x42000039  di
    ctx->pc = 0x365d18u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365d1c: 0x40f  sync.p
    ctx->pc = 0x365d1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365d20: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365d24: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x365d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x365d28: 0x0  nop
    ctx->pc = 0x365d28u;
    // NOP
    // 0x365d2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365D2Cu;
    {
        const bool branch_taken_0x365d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365d2c) {
            ctx->pc = 0x365D18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365d18;
        }
    }
    ctx->pc = 0x365D34u;
    // 0x365d34: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x365d34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365d38: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365d38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365d3c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365d3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365d40: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365d40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365d44: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365d44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365d48: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365d48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365d4c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365d4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365d50: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365d50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365d54: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365d54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365d58: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365d58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365d5c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365d5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365d60: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365d60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365d64: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365d64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365d68: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365d68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365d6c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365d70: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365d70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365d74: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365d74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365d78: 0x42000038  ei
    ctx->pc = 0x365d78u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365d7c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x365d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365d80: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365d80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365d84: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365d88: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365d8c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365d8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x365d90: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365d90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365d94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365d94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365d98:
    // 0x365d98: 0x42000039  di
    ctx->pc = 0x365d98u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365d9c: 0x40f  sync.p
    ctx->pc = 0x365d9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365da0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365da4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x365da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x365da8: 0x0  nop
    ctx->pc = 0x365da8u;
    // NOP
    // 0x365dac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365DACu;
    {
        const bool branch_taken_0x365dac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365dac) {
            ctx->pc = 0x365D98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365d98;
        }
    }
    ctx->pc = 0x365DB4u;
    // 0x365db4: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x365db4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365db8: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365db8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365dbc: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365dbcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365dc0: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365dc0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365dc4: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365dc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365dc8: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365dc8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365dcc: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365dccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365dd0: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365dd0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365dd4: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365dd4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365dd8: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365dd8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365ddc: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365ddcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365de0: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365de0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365de4: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365de4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365de8: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365de8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365dec: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365decu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365df0: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365df0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365df4: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365df4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365df8: 0x42000038  ei
    ctx->pc = 0x365df8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365dfc: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x365dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365e00: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365e04: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365e08: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365e0c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365e0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x365e10: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365e10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365e14: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365e14u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365e18:
    // 0x365e18: 0x42000039  di
    ctx->pc = 0x365e18u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365e1c: 0x40f  sync.p
    ctx->pc = 0x365e1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365e20: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365e20u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365e24: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x365e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x365e28: 0x0  nop
    ctx->pc = 0x365e28u;
    // NOP
    // 0x365e2c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365E2Cu;
    {
        const bool branch_taken_0x365e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365e2c) {
            ctx->pc = 0x365E18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365e18;
        }
    }
    ctx->pc = 0x365E34u;
    // 0x365e34: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x365e34u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365e38: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365e38u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365e3c: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365e3cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365e40: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365e40u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365e44: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365e44u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365e48: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365e48u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365e4c: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365e4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365e50: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365e50u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365e54: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365e54u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365e58: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365e58u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365e5c: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365e5cu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365e60: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365e60u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365e64: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365e64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365e68: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365e68u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365e6c: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365e70: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365e70u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365e74: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365e74u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365e78: 0x42000038  ei
    ctx->pc = 0x365e78u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365e7c: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x365e7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365e80: 0x2148021  addu        $s0, $s0, $s4
    ctx->pc = 0x365e80u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x365e84: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365e88: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x365e88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x365e8c: 0xe7a00040  swc1        $f0, 0x40($sp)
    ctx->pc = 0x365e8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x365e90: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x365e90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x365e94: 0xe7a10044  swc1        $f1, 0x44($sp)
    ctx->pc = 0x365e94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
label_365e98:
    // 0x365e98: 0x42000039  di
    ctx->pc = 0x365e98u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x365e9c: 0x40f  sync.p
    ctx->pc = 0x365e9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x365ea0: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x365ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x365ea4: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x365ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x365ea8: 0x0  nop
    ctx->pc = 0x365ea8u;
    // NOP
    // 0x365eac: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x365EACu;
    {
        const bool branch_taken_0x365eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x365eac) {
            ctx->pc = 0x365E98u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365e98;
        }
    }
    ctx->pc = 0x365EB4u;
    // 0x365eb4: 0xd8830000  lqc2        $vf3, 0x0($a0)
    ctx->pc = 0x365eb4u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x365eb8: 0x4bc30918  vmulx.xyz   $vf4, $vf1, $vf3x
    ctx->pc = 0x365eb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x365ebc: 0x4bc31159  vmuly.xyz   $vf5, $vf2, $vf3y
    ctx->pc = 0x365ebcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x365ec0: 0xda060000  lqc2        $vf6, 0x0($s0)
    ctx->pc = 0x365ec0u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x365ec4: 0x4bf531a8  vadd.xyzw   $vf6, $vf6, $vf21
    ctx->pc = 0x365ec4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[21]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[6] = PS2_VBLEND(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x365ec8: 0x4bc431ec  vsub.xyz    $vf7, $vf6, $vf4
    ctx->pc = 0x365ec8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365ecc: 0x4bc43228  vadd.xyz    $vf8, $vf6, $vf4
    ctx->pc = 0x365eccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365ed0: 0x4bc43268  vadd.xyz    $vf9, $vf6, $vf4
    ctx->pc = 0x365ed0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365ed4: 0x4bc432ac  vsub.xyz    $vf10, $vf6, $vf4
    ctx->pc = 0x365ed4u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[6], ctx->vu0_vf[4]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365ed8: 0x4bc539ec  vsub.xyz    $vf7, $vf7, $vf5
    ctx->pc = 0x365ed8u;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[7], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = PS2_VBLEND(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x365edc: 0x4bc5422c  vsub.xyz    $vf8, $vf8, $vf5
    ctx->pc = 0x365edcu;
    { __m128 res = PS2_VSUB(ctx->vu0_vf[8], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x365ee0: 0x4bc54a68  vadd.xyz    $vf9, $vf9, $vf5
    ctx->pc = 0x365ee0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = PS2_VBLEND(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x365ee4: 0x4bc552a8  vadd.xyz    $vf10, $vf10, $vf5
    ctx->pc = 0x365ee4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], ctx->vu0_vf[5]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = PS2_VBLEND(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x365ee8: 0xfa270000  sqc2        $vf7, 0x0($s1)
    ctx->pc = 0x365ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 0), _mm_castps_si128(ctx->vu0_vf[7]));
    // 0x365eec: 0xfa280010  sqc2        $vf8, 0x10($s1)
    ctx->pc = 0x365eecu;
    WRITE128(ADD32(GPR_U32(ctx, 17), 16), _mm_castps_si128(ctx->vu0_vf[8]));
    // 0x365ef0: 0xfa290020  sqc2        $vf9, 0x20($s1)
    ctx->pc = 0x365ef0u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 32), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x365ef4: 0xfa2a0030  sqc2        $vf10, 0x30($s1)
    ctx->pc = 0x365ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 17), 48), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x365ef8: 0x42000038  ei
    ctx->pc = 0x365ef8u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x365efc: 0x751821  addu        $v1, $v1, $s5
    ctx->pc = 0x365efcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x365f00: 0x2268821  addu        $s1, $s1, $a2
    ctx->pc = 0x365f00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
    // 0x365f04: 0x25adfffc  addiu       $t5, $t5, -0x4
    ctx->pc = 0x365f04u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 4294967292));
    // 0x365f08: 0x15a0ff7f  bnez        $t5, . + 4 + (-0x81 << 2)
    ctx->pc = 0x365F08u;
    {
        const bool branch_taken_0x365f08 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x365F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F08u;
        // 0x365f0c: 0x2148021  addu        $s0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x365f08) {
            ctx->pc = 0x365D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_365d08;
        }
    }
    ctx->pc = 0x365F10u;
label_365f10:
    // 0x365f10: 0x7bb00100  lq          $s0, 0x100($sp)
    ctx->pc = 0x365f10u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 256)));
label_365f14:
    // 0x365f14: 0x7bb100f0  lq          $s1, 0xF0($sp)
    ctx->pc = 0x365f14u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x365f18: 0x7bb200e0  lq          $s2, 0xE0($sp)
    ctx->pc = 0x365f18u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x365f1c: 0x7bb300d0  lq          $s3, 0xD0($sp)
    ctx->pc = 0x365f1cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x365f20: 0x7bb400c0  lq          $s4, 0xC0($sp)
    ctx->pc = 0x365f20u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x365f24: 0x7bb500b0  lq          $s5, 0xB0($sp)
    ctx->pc = 0x365f24u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x365f28: 0x7bb600a0  lq          $s6, 0xA0($sp)
    ctx->pc = 0x365f28u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x365f2c: 0x7bb70090  lq          $s7, 0x90($sp)
    ctx->pc = 0x365f2cu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x365f30: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x365f30u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x365f34: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x365f34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x365f38: 0x3e00008  jr          $ra
    ctx->pc = 0x365F38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x365F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x365F38u;
        // 0x365f3c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x365F38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x365F40u;
}
