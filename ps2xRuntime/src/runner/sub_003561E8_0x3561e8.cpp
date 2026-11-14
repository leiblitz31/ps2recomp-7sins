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

// Function: sub_003561E8
// Address: 0x3561e8 - 0x356308
void sub_003561E8_0x3561e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003561E8_0x3561e8");
#endif

    switch (ctx->pc) {
        case 0x356220u: goto label_356220;
        case 0x3562a0u: goto label_3562a0;
        default: break;
    }

    ctx->pc = 0x3561e8u;

    // 0x3561e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3561e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3561ec: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x3561ecu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3561f0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3561f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3561f4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3561f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3561f8: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x3561f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3561fc: 0x14e2000a  bne         $a3, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x3561FCu;
    {
        const bool branch_taken_0x3561fc = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x356200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3561FCu;
        // 0x356200: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3561fc) {
            ctx->pc = 0x356228u;
            goto label_356228;
        }
    }
    ctx->pc = 0x356204u;
    // 0x356204: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x356204u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x356208: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x356208u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35620c: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x35620cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356210: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x356210u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356214: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x356214u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356218: 0xc0d4b16  jal         func_352C58
    ctx->pc = 0x356218u;
    SET_GPR_U32(ctx, 31, 0x356220u);
    ctx->pc = 0x35621Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x356218u;
    // 0x35621c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x352C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x352C58u, 0x356218u, 0x356220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x356220u;
label_356220:
    // 0x356220: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x356220u;
    {
        const bool branch_taken_0x356220 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x356224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356220u;
        // 0x356224: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356220) {
            ctx->pc = 0x3562FCu;
            goto label_3562fc;
        }
    }
    ctx->pc = 0x356228u;
label_356228:
    // 0x356228: 0x18a00033  blez        $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x356228u;
    {
        const bool branch_taken_0x356228 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x35622Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356228u;
        // 0x35622c: 0x51023  negu        $v0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356228) {
            ctx->pc = 0x3562F8u;
            goto label_3562f8;
        }
    }
    ctx->pc = 0x356230u;
    // 0x356230: 0x30460003  andi        $a2, $v0, 0x3
    ctx->pc = 0x356230u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x356234: 0x10c0001a  beqz        $a2, . + 4 + (0x1A << 2)
    ctx->pc = 0x356234u;
    {
        const bool branch_taken_0x356234 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x356238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356234u;
        // 0x356238: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356234) {
            ctx->pc = 0x3562A0u;
            goto label_3562a0;
        }
    }
    ctx->pc = 0x35623Cu;
    // 0x35623c: 0x28c20003  slti        $v0, $a2, 0x3
    ctx->pc = 0x35623cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x356240: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x356240u;
    {
        const bool branch_taken_0x356240 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x356244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356240u;
        // 0x356244: 0x28c20002  slti        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x356240) {
            ctx->pc = 0x356280u;
            goto label_356280;
        }
    }
    ctx->pc = 0x356248u;
    // 0x356248: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x356248u;
    {
        const bool branch_taken_0x356248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x356248) {
            ctx->pc = 0x356268u;
            goto label_356268;
        }
    }
    ctx->pc = 0x356250u;
    // 0x356250: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x356250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x356254: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x356254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356258: 0xb0820007  sdl         $v0, 0x7($a0)
    ctx->pc = 0x356258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35625c: 0xb4820000  sdr         $v0, 0x0($a0)
    ctx->pc = 0x35625cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356260: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x356260u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x356264: 0x871821  addu        $v1, $a0, $a3
    ctx->pc = 0x356264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_356268:
    // 0x356268: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x356268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x35626c: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x35626cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356270: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x356270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356274: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x356274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356278: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x356278u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x35627c: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x35627cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_356280:
    // 0x356280: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x356280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x356284: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x356284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x356288: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x356288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x35628c: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x35628cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x356290: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x356290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x356294: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
    ctx->pc = 0x356294u;
    {
        const bool branch_taken_0x356294 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x356298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x356294u;
        // 0x356298: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x356294) {
            ctx->pc = 0x3562F8u;
            goto label_3562f8;
        }
    }
    ctx->pc = 0x35629Cu;
    // 0x35629c: 0x0  nop
    ctx->pc = 0x35629cu;
    // NOP
label_3562a0:
    // 0x3562a0: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x3562a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3562a4: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x3562a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3562a8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x3562a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562ac: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x3562acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562b0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3562b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3562b4: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3562b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3562b8: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x3562b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3562bc: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x3562bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3562c0: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x3562c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562c4: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x3562c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562c8: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3562c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3562cc: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x3562ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3562d0: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x3562d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3562d4: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x3562d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562d8: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x3562d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562dc: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x3562dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x3562e0: 0x69020077  ldl         $v0, 0x77($t0)
    ctx->pc = 0x3562e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 119); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x3562e4: 0x6d020070  ldr         $v0, 0x70($t0)
    ctx->pc = 0x3562e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 112); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x3562e8: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x3562e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562ec: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x3562ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x3562f0: 0x14a0ffeb  bnez        $a1, . + 4 + (-0x15 << 2)
    ctx->pc = 0x3562F0u;
    {
        const bool branch_taken_0x3562f0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3562F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3562F0u;
        // 0x3562f4: 0x671821  addu        $v1, $v1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3562f0) {
            ctx->pc = 0x3562A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3562a0;
        }
    }
    ctx->pc = 0x3562F8u;
label_3562f8:
    // 0x3562f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3562f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3562fc:
    // 0x3562fc: 0x3e00008  jr          $ra
    ctx->pc = 0x3562FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x356300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3562FCu;
        // 0x356300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3562FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x356304u;
    // 0x356304: 0x0  nop
    ctx->pc = 0x356304u;
    // NOP
    ctx->pc = 0x356308u;
}
