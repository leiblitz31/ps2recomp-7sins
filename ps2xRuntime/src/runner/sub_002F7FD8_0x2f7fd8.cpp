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

// Function: sub_002F7FD8
// Address: 0x2f7fd8 - 0x2f8668
void sub_002F7FD8_0x2f7fd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F7FD8_0x2f7fd8");
#endif

    switch (ctx->pc) {
        case 0x2f8000u: goto label_2f8000;
        case 0x2f8008u: goto label_2f8008;
        case 0x2f809cu: goto label_2f809c;
        case 0x2f80f0u: goto label_2f80f0;
        case 0x2f8104u: goto label_2f8104;
        case 0x2f8120u: goto label_2f8120;
        case 0x2f8148u: goto label_2f8148;
        case 0x2f8150u: goto label_2f8150;
        case 0x2f81e4u: goto label_2f81e4;
        case 0x2f8218u: goto label_2f8218;
        case 0x2f8260u: goto label_2f8260;
        case 0x2f8274u: goto label_2f8274;
        case 0x2f8288u: goto label_2f8288;
        case 0x2f82d0u: goto label_2f82d0;
        case 0x2f82e4u: goto label_2f82e4;
        case 0x2f82f8u: goto label_2f82f8;
        case 0x2f8340u: goto label_2f8340;
        case 0x2f8354u: goto label_2f8354;
        case 0x2f8368u: goto label_2f8368;
        case 0x2f83c8u: goto label_2f83c8;
        case 0x2f83dcu: goto label_2f83dc;
        case 0x2f83f0u: goto label_2f83f0;
        case 0x2f8450u: goto label_2f8450;
        case 0x2f84a8u: goto label_2f84a8;
        case 0x2f84bcu: goto label_2f84bc;
        case 0x2f84f0u: goto label_2f84f0;
        case 0x2f8538u: goto label_2f8538;
        case 0x2f8574u: goto label_2f8574;
        case 0x2f85a8u: goto label_2f85a8;
        case 0x2f8600u: goto label_2f8600;
        case 0x2f8614u: goto label_2f8614;
        case 0x2f861cu: goto label_2f861c;
        case 0x2f863cu: goto label_2f863c;
        default: break;
    }

    ctx->pc = 0x2f7fd8u;

    // 0x2f7fd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2f7fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2f7fdc: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f7fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f7fe0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f7fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f7fe4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f7fe4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f7fe8: 0x3c110061  lui         $s1, 0x61
    ctx->pc = 0x2f7fe8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)97 << 16));
    // 0x2f7fec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f7fecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f7ff0: 0x2624ea40  addiu       $a0, $s1, -0x15C0
    ctx->pc = 0x2f7ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961728));
    // 0x2f7ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2f7ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2f7ff8: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x2F7FF8u;
    SET_GPR_U32(ctx, 31, 0x2F8000u);
    ctx->pc = 0x2F7FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F7FF8u;
    // 0x2f7ffc: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x2F7FF8u, 0x2F8000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8000u;
label_2f8000:
    // 0x2f8000: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F8000u;
    SET_GPR_U32(ctx, 31, 0x2F8008u);
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F8000u, 0x2F8008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8008u;
label_2f8008:
    // 0x2f8008: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f8008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x2f800c: 0x2626ea40  addiu       $a2, $s1, -0x15C0
    ctx->pc = 0x2f800cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961728));
    // 0x2f8010: 0x2465eac0  addiu       $a1, $v1, -0x1540
    ctx->pc = 0x2f8010u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961856));
    // 0x2f8014: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2f8014u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f8018: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2f8018u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f801c: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2f801cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f8020: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2f8020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f8024: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2f8024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8028: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2f8028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f802c: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x2f802cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8030: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x2f8030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8034: 0x68c20017  ldl         $v0, 0x17($a2)
    ctx->pc = 0x2f8034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f8038: 0x6cc20010  ldr         $v0, 0x10($a2)
    ctx->pc = 0x2f8038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f803c: 0x68c4001f  ldl         $a0, 0x1F($a2)
    ctx->pc = 0x2f803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f8040: 0x6cc40018  ldr         $a0, 0x18($a2)
    ctx->pc = 0x2f8040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f8044: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x2f8044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8048: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x2f8048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f804c: 0xb0a4001f  sdl         $a0, 0x1F($a1)
    ctx->pc = 0x2f804cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8050: 0xb4a40018  sdr         $a0, 0x18($a1)
    ctx->pc = 0x2f8050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8054: 0x68c20027  ldl         $v0, 0x27($a2)
    ctx->pc = 0x2f8054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f8058: 0x6cc20020  ldr         $v0, 0x20($a2)
    ctx->pc = 0x2f8058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f805c: 0x68c4002f  ldl         $a0, 0x2F($a2)
    ctx->pc = 0x2f805cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f8060: 0x6cc40028  ldr         $a0, 0x28($a2)
    ctx->pc = 0x2f8060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f8064: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x2f8064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8068: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x2f8068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f806c: 0xb0a4002f  sdl         $a0, 0x2F($a1)
    ctx->pc = 0x2f806cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8070: 0xb4a40028  sdr         $a0, 0x28($a1)
    ctx->pc = 0x2f8070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8074: 0x68c20037  ldl         $v0, 0x37($a2)
    ctx->pc = 0x2f8074u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f8078: 0x6cc20030  ldr         $v0, 0x30($a2)
    ctx->pc = 0x2f8078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f807c: 0x68c4003f  ldl         $a0, 0x3F($a2)
    ctx->pc = 0x2f807cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f8080: 0x6cc40038  ldr         $a0, 0x38($a2)
    ctx->pc = 0x2f8080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f8084: 0xb0a20037  sdl         $v0, 0x37($a1)
    ctx->pc = 0x2f8084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8088: 0xb4a20030  sdr         $v0, 0x30($a1)
    ctx->pc = 0x2f8088u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f808c: 0xb0a4003f  sdl         $a0, 0x3F($a1)
    ctx->pc = 0x2f808cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8090: 0xb4a40038  sdr         $a0, 0x38($a1)
    ctx->pc = 0x2f8090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8094: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2F8094u;
    SET_GPR_U32(ctx, 31, 0x2F809Cu);
    ctx->pc = 0x2F8098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8094u;
    // 0x2f8098: 0x2470eac0  addiu       $s0, $v1, -0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2F8094u, 0x2F809Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F809Cu;
label_2f809c:
    // 0x2f809c: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2f809cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2f80a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f80a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f80a4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2f80a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x2f80a8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2f80a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2f80ac: 0x14440016  bne         $v0, $a0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F80ACu;
    {
        const bool branch_taken_0x2f80ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2F80B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F80ACu;
        // 0x2f80b0: 0x2402fff4  addiu       $v0, $zero, -0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967284));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f80ac) {
            ctx->pc = 0x2F8108u;
            goto label_2f8108;
        }
    }
    ctx->pc = 0x2F80B4u;
    // 0x2f80b4: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f80b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f80b8: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f80b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f80bc: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f80bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f80c0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f80c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f80c4: 0xac52c740  sw          $s2, -0x38C0($v0)
    ctx->pc = 0x2f80c4u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 18)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f80c8: 0x2484c648  addiu       $a0, $a0, -0x39B8
    ctx->pc = 0x2f80c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x2f80cc: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f80d0: 0x34a51303  ori         $a1, $a1, 0x1303
    ctx->pc = 0x2f80d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4867);
    // 0x2f80d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f80d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f80d8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f80d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f80dc: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f80dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f80e0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f80e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f80e4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f80e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f80e8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F80E8u;
    SET_GPR_U32(ctx, 31, 0x2F80F0u);
    ctx->pc = 0x2F80ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F80E8u;
    // 0x2f80ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F80E8u, 0x2F80F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F80F0u;
label_2f80f0:
    // 0x2f80f0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F80F0u;
    {
        const bool branch_taken_0x2f80f0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f80f0) {
            ctx->pc = 0x2F80F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F80F0u;
            // 0x2f80f4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8108u;
            goto label_2f8108;
        }
    }
    ctx->pc = 0x2F80F8u;
    // 0x2f80f8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f80f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f80fc: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F80FCu;
    SET_GPR_U32(ctx, 31, 0x2F8104u);
    ctx->pc = 0x2F8100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F80FCu;
    // 0x2f8100: 0x24849d48  addiu       $a0, $a0, -0x62B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F80FCu, 0x2F8104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8104u;
label_2f8104:
    // 0x2f8104: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8104u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8108:
    // 0x2f8108: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2f8108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f810c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f810cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8110: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8110u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8114: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8114u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8118: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8118u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8118u;
        // 0x2f811c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8118u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8120u;
label_2f8120:
    // 0x2f8120: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f8120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f8124: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2f8124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2f8128: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f8128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f812c: 0x3c120061  lui         $s2, 0x61
    ctx->pc = 0x2f812cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)97 << 16));
    // 0x2f8130: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2f8130u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8134: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2f8134u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2f8138: 0x2644ea40  addiu       $a0, $s2, -0x15C0
    ctx->pc = 0x2f8138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961728));
    // 0x2f813c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f813cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f8140: 0xc0bf916  jal         func_2FE458
    ctx->pc = 0x2F8140u;
    SET_GPR_U32(ctx, 31, 0x2F8148u);
    ctx->pc = 0x2F8144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8140u;
    // 0x2f8144: 0x24850080  addiu       $a1, $a0, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FE458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FE458u, 0x2F8140u, 0x2F8148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8148u;
label_2f8148:
    // 0x2f8148: 0xc0c1f08  jal         func_307C20
    ctx->pc = 0x2F8148u;
    SET_GPR_U32(ctx, 31, 0x2F8150u);
    ctx->pc = 0x2F814Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8148u;
    // 0x2f814c: 0x108080  sll         $s0, $s0, 2 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C20u, 0x2F8148u, 0x2F8150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8150u;
label_2f8150:
    // 0x2f8150: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f8150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x2f8154: 0x2646ea40  addiu       $a2, $s2, -0x15C0
    ctx->pc = 0x2f8154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294961728));
    // 0x2f8158: 0x2465eac0  addiu       $a1, $v1, -0x1540
    ctx->pc = 0x2f8158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961856));
    // 0x2f815c: 0x68c20007  ldl         $v0, 0x7($a2)
    ctx->pc = 0x2f815cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f8160: 0x6cc20000  ldr         $v0, 0x0($a2)
    ctx->pc = 0x2f8160u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f8164: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x2f8164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f8168: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x2f8168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f816c: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2f816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8170: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2f8170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8174: 0xb0a4000f  sdl         $a0, 0xF($a1)
    ctx->pc = 0x2f8174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8178: 0xb4a40008  sdr         $a0, 0x8($a1)
    ctx->pc = 0x2f8178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f817c: 0x68c20017  ldl         $v0, 0x17($a2)
    ctx->pc = 0x2f817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f8180: 0x6cc20010  ldr         $v0, 0x10($a2)
    ctx->pc = 0x2f8180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f8184: 0x68c4001f  ldl         $a0, 0x1F($a2)
    ctx->pc = 0x2f8184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f8188: 0x6cc40018  ldr         $a0, 0x18($a2)
    ctx->pc = 0x2f8188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f818c: 0xb0a20017  sdl         $v0, 0x17($a1)
    ctx->pc = 0x2f818cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8190: 0xb4a20010  sdr         $v0, 0x10($a1)
    ctx->pc = 0x2f8190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8194: 0xb0a4001f  sdl         $a0, 0x1F($a1)
    ctx->pc = 0x2f8194u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f8198: 0xb4a40018  sdr         $a0, 0x18($a1)
    ctx->pc = 0x2f8198u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f819c: 0x68c20027  ldl         $v0, 0x27($a2)
    ctx->pc = 0x2f819cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f81a0: 0x6cc20020  ldr         $v0, 0x20($a2)
    ctx->pc = 0x2f81a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f81a4: 0x68c4002f  ldl         $a0, 0x2F($a2)
    ctx->pc = 0x2f81a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f81a8: 0x6cc40028  ldr         $a0, 0x28($a2)
    ctx->pc = 0x2f81a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f81ac: 0xb0a20027  sdl         $v0, 0x27($a1)
    ctx->pc = 0x2f81acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81b0: 0xb4a20020  sdr         $v0, 0x20($a1)
    ctx->pc = 0x2f81b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81b4: 0xb0a4002f  sdl         $a0, 0x2F($a1)
    ctx->pc = 0x2f81b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81b8: 0xb4a40028  sdr         $a0, 0x28($a1)
    ctx->pc = 0x2f81b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81bc: 0x68c20037  ldl         $v0, 0x37($a2)
    ctx->pc = 0x2f81bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2f81c0: 0x6cc20030  ldr         $v0, 0x30($a2)
    ctx->pc = 0x2f81c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2f81c4: 0x68c4003f  ldl         $a0, 0x3F($a2)
    ctx->pc = 0x2f81c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x2f81c8: 0x6cc40038  ldr         $a0, 0x38($a2)
    ctx->pc = 0x2f81c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x2f81cc: 0xb0a20037  sdl         $v0, 0x37($a1)
    ctx->pc = 0x2f81ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81d0: 0xb4a20030  sdr         $v0, 0x30($a1)
    ctx->pc = 0x2f81d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81d4: 0xb0a4003f  sdl         $a0, 0x3F($a1)
    ctx->pc = 0x2f81d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81d8: 0xb4a40038  sdr         $a0, 0x38($a1)
    ctx->pc = 0x2f81d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2f81dc: 0xc0c1f1c  jal         func_307C70
    ctx->pc = 0x2F81DCu;
    SET_GPR_U32(ctx, 31, 0x2F81E4u);
    ctx->pc = 0x2F81E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F81DCu;
    // 0x2f81e0: 0x2471eac0  addiu       $s1, $v1, -0x1540 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x307C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x307C70u, 0x2F81DCu, 0x2F81E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F81E4u;
label_2f81e4:
    // 0x2f81e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2f81e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f81e8: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x2f81e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x2f81ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2f81ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2f81f0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2f81f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f81f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f81f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f81f8: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x2f81f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
    // 0x2f81fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2f81fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8200: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2f8200u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8204: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x2f8204u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
    // 0x2f8208: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f8208u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f820c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F820Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F820Cu;
        // 0x2f8210: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F820Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8214u;
    // 0x2f8214: 0x0  nop
    ctx->pc = 0x2f8214u;
    // NOP
label_2f8218:
    // 0x2f8218: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f821c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f821cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f8220: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8224: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f8224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x2f8228: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f8228u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f822c: 0xac44c740  sw          $a0, -0x38C0($v0)
    ctx->pc = 0x2f822cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f8230: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f8230u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8234: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f8234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8238: 0x2464c648  addiu       $a0, $v1, -0x39B8
    ctx->pc = 0x2f8238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952520));
    // 0x2f823c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f823cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f8240: 0x34a51315  ori         $a1, $a1, 0x1315
    ctx->pc = 0x2f8240u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4885);
    // 0x2f8244: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8244u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8248: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f8248u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f824c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f824cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8250: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f8250u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8254: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f8254u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8258: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F8258u;
    SET_GPR_U32(ctx, 31, 0x2F8260u);
    ctx->pc = 0x2F825Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8258u;
    // 0x2f825c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F8258u, 0x2F8260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8260u;
label_2f8260:
    // 0x2f8260: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8260u;
    {
        const bool branch_taken_0x2f8260 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f8260) {
            ctx->pc = 0x2F8264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8260u;
            // 0x2f8264: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8278u;
            goto label_2f8278;
        }
    }
    ctx->pc = 0x2F8268u;
    // 0x2f8268: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f8268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f826c: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F826Cu;
    SET_GPR_U32(ctx, 31, 0x2F8274u);
    ctx->pc = 0x2F8270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F826Cu;
    // 0x2f8270: 0x24849d68  addiu       $a0, $a0, -0x6298 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F826Cu, 0x2F8274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8274u;
label_2f8274:
    // 0x2f8274: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8274u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8278:
    // 0x2f8278: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8278u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f827c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f827cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8280: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8280u;
        // 0x2f8284: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8288u;
label_2f8288:
    // 0x2f8288: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f828c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f828cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f8290: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8294: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f8294u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x2f8298: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f8298u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f829c: 0xac44c740  sw          $a0, -0x38C0($v0)
    ctx->pc = 0x2f829cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f82a0: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f82a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f82a4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f82a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f82a8: 0x2464c648  addiu       $a0, $v1, -0x39B8
    ctx->pc = 0x2f82a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952520));
    // 0x2f82ac: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f82acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f82b0: 0x34a51316  ori         $a1, $a1, 0x1316
    ctx->pc = 0x2f82b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4886);
    // 0x2f82b4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f82b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f82b8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f82b8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f82bc: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f82bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f82c0: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f82c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f82c4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f82c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f82c8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F82C8u;
    SET_GPR_U32(ctx, 31, 0x2F82D0u);
    ctx->pc = 0x2F82CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F82C8u;
    // 0x2f82cc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F82C8u, 0x2F82D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F82D0u;
label_2f82d0:
    // 0x2f82d0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F82D0u;
    {
        const bool branch_taken_0x2f82d0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f82d0) {
            ctx->pc = 0x2F82D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F82D0u;
            // 0x2f82d4: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F82E8u;
            goto label_2f82e8;
        }
    }
    ctx->pc = 0x2F82D8u;
    // 0x2f82d8: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f82d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f82dc: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F82DCu;
    SET_GPR_U32(ctx, 31, 0x2F82E4u);
    ctx->pc = 0x2F82E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F82DCu;
    // 0x2f82e0: 0x24849d88  addiu       $a0, $a0, -0x6278 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F82DCu, 0x2F82E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F82E4u;
label_2f82e4:
    // 0x2f82e4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f82e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f82e8:
    // 0x2f82e8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f82e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f82ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f82ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f82f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2F82F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F82F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F82F0u;
        // 0x2f82f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F82F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F82F8u;
label_2f82f8:
    // 0x2f82f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f82f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f82fc: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f82fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f8300: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8304: 0x3c030061  lui         $v1, 0x61
    ctx->pc = 0x2f8304u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)97 << 16));
    // 0x2f8308: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f8308u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f830c: 0xac44c740  sw          $a0, -0x38C0($v0)
    ctx->pc = 0x2f830cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f8310: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f8310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8314: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f8314u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8318: 0x2464c648  addiu       $a0, $v1, -0x39B8
    ctx->pc = 0x2f8318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952520));
    // 0x2f831c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f831cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f8320: 0x34a51317  ori         $a1, $a1, 0x1317
    ctx->pc = 0x2f8320u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4887);
    // 0x2f8324: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8324u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8328: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f8328u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f832c: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f832cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8330: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f8330u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8334: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f8334u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8338: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F8338u;
    SET_GPR_U32(ctx, 31, 0x2F8340u);
    ctx->pc = 0x2F833Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8338u;
    // 0x2f833c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F8338u, 0x2F8340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8340u;
label_2f8340:
    // 0x2f8340: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F8340u;
    {
        const bool branch_taken_0x2f8340 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f8340) {
            ctx->pc = 0x2F8344u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8340u;
            // 0x2f8344: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8358u;
            goto label_2f8358;
        }
    }
    ctx->pc = 0x2F8348u;
    // 0x2f8348: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f8348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f834c: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F834Cu;
    SET_GPR_U32(ctx, 31, 0x2F8354u);
    ctx->pc = 0x2F8350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F834Cu;
    // 0x2f8350: 0x24849da8  addiu       $a0, $a0, -0x6258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F834Cu, 0x2F8354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8354u;
label_2f8354:
    // 0x2f8354: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2f8354u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f8358:
    // 0x2f8358: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f8358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f835c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f835cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8360: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8360u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8360u;
        // 0x2f8364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8360u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8368u;
label_2f8368:
    // 0x2f8368: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2f8368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2f836c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x2f836cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
    // 0x2f8370: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f8374: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2f8374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2f8378: 0x2450c740  addiu       $s0, $v0, -0x38C0
    ctx->pc = 0x2f8378u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952768));
    // 0x2f837c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2f837cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2f8380: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x2f8380u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60C748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C748u, _value); } while (0);
    // 0x2f8384: 0x80502d  daddu       $t2, $a0, $zero
    ctx->pc = 0x2f8384u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8388: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x2f8388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
    // 0x2f838c: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f838cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8390: 0x8d420008  lw          $v0, 0x8($t2)
    ctx->pc = 0x2f8390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 8)));
    // 0x2f8394: 0x2484c648  addiu       $a0, $a0, -0x39B8
    ctx->pc = 0x2f8394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952520));
    // 0x2f8398: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8398u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f839c: 0x34a5131d  ori         $a1, $a1, 0x131D
    ctx->pc = 0x2f839cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4893);
    // 0x2f83a0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x2f83a0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60C750u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C750u, _value); } while (0);
    // 0x2f83a4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f83a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f83a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2f83a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f83ac: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f83acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f83b0: 0x8d42000c  lw          $v0, 0xC($t2)
    ctx->pc = 0x2f83b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 12)));
    // 0x2f83b4: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f83b4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f83b8: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f83b8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f83bc: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x2f83bcu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f83c0: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F83C0u;
    SET_GPR_U32(ctx, 31, 0x2F83C8u);
    ctx->pc = 0x2F83C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F83C0u;
    // 0x2f83c4: 0xae020014  sw          $v0, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F83C0u, 0x2F83C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83C8u;
label_2f83c8:
    // 0x2f83c8: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F83C8u;
    {
        const bool branch_taken_0x2f83c8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f83c8) {
            ctx->pc = 0x2F83CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F83C8u;
            // 0x2f83cc: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F83E0u;
            goto label_2f83e0;
        }
    }
    ctx->pc = 0x2F83D0u;
    // 0x2f83d0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f83d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f83d4: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F83D4u;
    SET_GPR_U32(ctx, 31, 0x2F83DCu);
    ctx->pc = 0x2F83D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F83D4u;
    // 0x2f83d8: 0x24849da8  addiu       $a0, $a0, -0x6258 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F83D4u, 0x2F83DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F83DCu;
label_2f83dc:
    // 0x2f83dc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f83dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f83e0:
    // 0x2f83e0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2f83e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f83e4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f83e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f83e8: 0x3e00008  jr          $ra
    ctx->pc = 0x2F83E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F83ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F83E8u;
        // 0x2f83ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F83E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F83F0u;
label_2f83f0:
    // 0x2f83f0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2f83f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x2f83f4: 0x3c0a0061  lui         $t2, 0x61
    ctx->pc = 0x2f83f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)97 << 16));
    // 0x2f83f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f83f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f83fc: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f83fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f8400: 0x2550c740  addiu       $s0, $t2, -0x38C0
    ctx->pc = 0x2f8400u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952768));
    // 0x2f8404: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f8404u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f8408: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2f8408u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f840c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f840cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8410: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2f8410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8414: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2f8414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x2f8418: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2f8418u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f841c: 0xad44c740  sw          $a0, -0x38C0($t2)
    ctx->pc = 0x2f841cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 4)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f8420: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x2f8420u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x60C744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C744u, _value); } while (0);
    // 0x2f8424: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f8424u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f8428: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2f8428u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60C748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C748u, _value); } while (0);
    // 0x2f842c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x2f842cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2f8430: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x2f8430u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x60C74Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C74Cu, _value); } while (0);
    // 0x2f8434: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f8434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f8438: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x2F8438u;
    {
        const bool branch_taken_0x2f8438 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F843Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8438u;
        // 0x2f843c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8438) {
            ctx->pc = 0x2F8478u;
            goto label_2f8478;
        }
    }
    ctx->pc = 0x2F8440u;
    // 0x2f8440: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x2f8440u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2f8444: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x2f8444u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
    // 0x2f8448: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x2f8448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x2f844c: 0x0  nop
    ctx->pc = 0x2f844cu;
    // NOP
label_2f8450:
    // 0x2f8450: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2f8450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f8454: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f8454u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f8458: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f8458u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f845c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f845cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8460: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2f8460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f8464: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f8464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8468: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8468u;
    {
        const bool branch_taken_0x2f8468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F846Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8468u;
        // 0x2f846c: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8468) {
            ctx->pc = 0x2F8450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f8450;
        }
    }
    ctx->pc = 0x2F8470u;
    // 0x2f8470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8470u;
    {
        const bool branch_taken_0x2f8470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8470u;
        // 0x2f8474: 0x2547c740  addiu       $a3, $t2, -0x38C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8470) {
            ctx->pc = 0x2F8480u;
            goto label_2f8480;
        }
    }
    ctx->pc = 0x2F8478u;
label_2f8478:
    // 0x2f8478: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x2f8478u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
    // 0x2f847c: 0x2547c740  addiu       $a3, $t2, -0x38C0
    ctx->pc = 0x2f847cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 10), 4294952768));
label_2f8480:
    // 0x2f8480: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f8480u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f8484: 0x2504c648  addiu       $a0, $t0, -0x39B8
    ctx->pc = 0x2f8484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952520));
    // 0x2f8488: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f8488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f848c: 0x34a51318  ori         $a1, $a1, 0x1318
    ctx->pc = 0x2f848cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4888);
    // 0x2f8490: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f8490u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8494: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f8494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f8498: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f8498u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f849c: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f849cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f84a0: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F84A0u;
    SET_GPR_U32(ctx, 31, 0x2F84A8u);
    ctx->pc = 0x2F84A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84A0u;
    // 0x2f84a4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F84A0u, 0x2F84A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84A8u;
label_2f84a8:
    // 0x2f84a8: 0x4430006  bgezl       $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2F84A8u;
    {
        const bool branch_taken_0x2f84a8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f84a8) {
            ctx->pc = 0x2F84ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F84A8u;
            // 0x2f84ac: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F84C4u;
            goto label_2f84c4;
        }
    }
    ctx->pc = 0x2F84B0u;
    // 0x2f84b0: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f84b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f84b4: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F84B4u;
    SET_GPR_U32(ctx, 31, 0x2F84BCu);
    ctx->pc = 0x2F84B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F84B4u;
    // 0x2f84b8: 0x24849dd0  addiu       $a0, $a0, -0x6230 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942160));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F84B4u, 0x2F84BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F84BCu;
label_2f84bc:
    // 0x2f84bc: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x2F84BCu;
    {
        const bool branch_taken_0x2f84bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F84C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84BCu;
        // 0x2f84c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84bc) {
            ctx->pc = 0x2F851Cu;
            goto label_2f851c;
        }
    }
    ctx->pc = 0x2F84C4u;
label_2f84c4:
    // 0x2f84c4: 0x4400016  bltz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x2F84C4u;
    {
        const bool branch_taken_0x2f84c4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2F84C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84C4u;
        // 0x2f84c8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84c4) {
            ctx->pc = 0x2F8520u;
            goto label_2f8520;
        }
    }
    ctx->pc = 0x2F84CCu;
    // 0x2f84cc: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2f84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x2f84d0: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2f84d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x2f84d4: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2f84d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f84d8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2f84d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
    // 0x2f84dc: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f84e0: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x2F84E0u;
    {
        const bool branch_taken_0x2f84e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F84E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F84E0u;
        // 0x2f84e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f84e0) {
            ctx->pc = 0x2F8518u;
            goto label_2f8518;
        }
    }
    ctx->pc = 0x2F84E8u;
    // 0x2f84e8: 0x26060090  addiu       $a2, $s0, 0x90
    ctx->pc = 0x2f84e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 144));
    // 0x2f84ec: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2f84ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2f84f0:
    // 0x2f84f0: 0x2652021  addu        $a0, $s3, $a1
    ctx->pc = 0x2f84f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x2f84f4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f84f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f84f8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f84f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f84fc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f84fcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f8500: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2f8500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2f8504: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f8504u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f8508: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F8508u;
    {
        const bool branch_taken_0x2f8508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F850Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8508u;
        // 0x2f850c: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8508) {
            ctx->pc = 0x2F84F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f84f0;
        }
    }
    ctx->pc = 0x2F8510u;
    // 0x2f8510: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2F8510u;
    {
        const bool branch_taken_0x2f8510 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8510u;
        // 0x2f8514: 0x8e020110  lw          $v0, 0x110($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8510) {
            ctx->pc = 0x2F851Cu;
            goto label_2f851c;
        }
    }
    ctx->pc = 0x2F8518u;
label_2f8518:
    // 0x2f8518: 0x8e020110  lw          $v0, 0x110($s0)
    ctx->pc = 0x2f8518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 272)));
label_2f851c:
    // 0x2f851c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2f851cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f8520:
    // 0x2f8520: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f8520u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8524: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8524u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8528: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8528u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f852c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f852cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f8530: 0x3e00008  jr          $ra
    ctx->pc = 0x2F8530u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8530u;
        // 0x2f8534: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F8530u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8538u;
label_2f8538:
    // 0x2f8538: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2f8538u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2f853c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2f853cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2f8540: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f8540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f8544: 0x3c150061  lui         $s5, 0x61
    ctx->pc = 0x2f8544u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)97 << 16));
    // 0x2f8548: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f8548u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f854c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2f854cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2f8550: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2f8550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2f8554: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2f8554u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8558: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2f8558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2f855c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2f855cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f8560: 0x8ea4eb00  lw          $a0, -0x1500($s5)
    ctx->pc = 0x2f8560u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x60EB00u));
    // 0x2f8564: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2f8564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2f8568: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2f8568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2f856c: 0xc0bf6e8  jal         func_2FDBA0
    ctx->pc = 0x2F856Cu;
    SET_GPR_U32(ctx, 31, 0x2F8574u);
    ctx->pc = 0x2F8570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F856Cu;
    // 0x2f8570: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDBA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDBA0u, 0x2F856Cu, 0x2F8574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8574u;
label_2f8574:
    // 0x2f8574: 0x3c070061  lui         $a3, 0x61
    ctx->pc = 0x2f8574u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)97 << 16));
    // 0x2f8578: 0xacf1c740  sw          $s1, -0x38C0($a3)
    ctx->pc = 0x2f8578u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 17)); ps2TraceGuestWrite(rdram, 0x60C740u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C740u, _value); } while (0);
    // 0x2f857c: 0x24f2c740  addiu       $s2, $a3, -0x38C0
    ctx->pc = 0x2f857cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952768));
    // 0x2f8580: 0xae500004  sw          $s0, 0x4($s2)
    ctx->pc = 0x2f8580u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 16)); ps2TraceGuestWrite(rdram, 0x60C744u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C744u, _value); } while (0);
    // 0x2f8584: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f8584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f8588: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2f8588u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x60C748u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x60C748u, _value); } while (0);
    // 0x2f858c: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x2f858cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f8590: 0x1860000f  blez        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x2F8590u;
    {
        const bool branch_taken_0x2f8590 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2F8594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F8590u;
        // 0x2f8594: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f8590) {
            ctx->pc = 0x2F85D0u;
            goto label_2f85d0;
        }
    }
    ctx->pc = 0x2F8598u;
    // 0x2f8598: 0x2646000c  addiu       $a2, $s2, 0xC
    ctx->pc = 0x2f8598u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
    // 0x2f859c: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x2f859cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
    // 0x2f85a0: 0x2851021  addu        $v0, $s4, $a1
    ctx->pc = 0x2f85a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
    // 0x2f85a4: 0x0  nop
    ctx->pc = 0x2f85a4u;
    // NOP
label_2f85a8:
    // 0x2f85a8: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x2f85a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x2f85ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2f85acu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2f85b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2f85b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2f85b4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2f85b4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x2f85b8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x2f85b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2f85bc: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f85bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2f85c0: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2F85C0u;
    {
        const bool branch_taken_0x2f85c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F85C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85C0u;
        // 0x2f85c4: 0x2851021  addu        $v0, $s4, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85c0) {
            ctx->pc = 0x2F85A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f85a8;
        }
    }
    ctx->pc = 0x2F85C8u;
    // 0x2f85c8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2F85C8u;
    {
        const bool branch_taken_0x2f85c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F85CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F85C8u;
        // 0x2f85cc: 0x24e7c740  addiu       $a3, $a3, -0x38C0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f85c8) {
            ctx->pc = 0x2F85D8u;
            goto label_2f85d8;
        }
    }
    ctx->pc = 0x2F85D0u;
label_2f85d0:
    // 0x2f85d0: 0x3c080061  lui         $t0, 0x61
    ctx->pc = 0x2f85d0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)97 << 16));
    // 0x2f85d4: 0x24e7c740  addiu       $a3, $a3, -0x38C0
    ctx->pc = 0x2f85d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294952768));
label_2f85d8:
    // 0x2f85d8: 0x3c058000  lui         $a1, 0x8000
    ctx->pc = 0x2f85d8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32768 << 16));
    // 0x2f85dc: 0x2504c648  addiu       $a0, $t0, -0x39B8
    ctx->pc = 0x2f85dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), 4294952520));
    // 0x2f85e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2f85e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2f85e4: 0x34a51319  ori         $a1, $a1, 0x1319
    ctx->pc = 0x2f85e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4889);
    // 0x2f85e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2f85e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85ec: 0x24080090  addiu       $t0, $zero, 0x90
    ctx->pc = 0x2f85ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f85f0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x2f85f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f85f4: 0x240a0090  addiu       $t2, $zero, 0x90
    ctx->pc = 0x2f85f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 144));
    // 0x2f85f8: 0xc0c06aa  jal         func_301AA8
    ctx->pc = 0x2F85F8u;
    SET_GPR_U32(ctx, 31, 0x2F8600u);
    ctx->pc = 0x2F85FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F85F8u;
    // 0x2f85fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AA8u, 0x2F85F8u, 0x2F8600u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8600u;
label_2f8600:
    // 0x2f8600: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2F8600u;
    {
        const bool branch_taken_0x2f8600 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2f8600) {
            ctx->pc = 0x2F8604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F8600u;
            // 0x2f8604: 0x8e42008c  lw          $v0, 0x8C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F8624u;
            goto label_2f8624;
        }
    }
    ctx->pc = 0x2F8608u;
    // 0x2f8608: 0x3c040060  lui         $a0, 0x60
    ctx->pc = 0x2f8608u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)96 << 16));
    // 0x2f860c: 0xc0be29c  jal         func_2F8A70
    ctx->pc = 0x2F860Cu;
    SET_GPR_U32(ctx, 31, 0x2F8614u);
    ctx->pc = 0x2F8610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F860Cu;
    // 0x2f8610: 0x24849df0  addiu       $a0, $a0, -0x6210 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F8A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8A70u, 0x2F860Cu, 0x2F8614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F8614u;
label_2f8614:
    // 0x2f8614: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F8614u;
    SET_GPR_U32(ctx, 31, 0x2F861Cu);
    ctx->pc = 0x2F8618u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8614u;
    // 0x2f8618: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F8614u, 0x2F861Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F861Cu;
label_2f861c:
    // 0x2f861c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2F861Cu;
    {
        const bool branch_taken_0x2f861c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F8620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F861Cu;
        // 0x2f8620: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f861c) {
            ctx->pc = 0x2F8640u;
            goto label_2f8640;
        }
    }
    ctx->pc = 0x2F8624u;
label_2f8624:
    // 0x2f8624: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F8624u;
    {
        const bool branch_taken_0x2f8624 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2f8624) {
            ctx->pc = 0x2F8634u;
            goto label_2f8634;
        }
    }
    ctx->pc = 0x2F862Cu;
    // 0x2f862c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2f862cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2f8630: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x2f8630u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_2f8634:
    // 0x2f8634: 0xc0bf6e0  jal         func_2FDB80
    ctx->pc = 0x2F8634u;
    SET_GPR_U32(ctx, 31, 0x2F863Cu);
    ctx->pc = 0x2F8638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F8634u;
    // 0x2f8638: 0x8ea4eb00  lw          $a0, -0x1500($s5) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4294961920)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FDB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FDB80u, 0x2F8634u, 0x2F863Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F863Cu;
label_2f863c:
    // 0x2f863c: 0x8e42008c  lw          $v0, 0x8C($s2)
    ctx->pc = 0x2f863cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2f8640:
    // 0x2f8640: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2f8640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2f8644: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2f8644u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2f8648: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2f8648u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2f864c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2f864cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2f8650: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2f8650u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f8654: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f8654u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f8658: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f8658u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f865c: 0x3e00008  jr          $ra
    ctx->pc = 0x2F865Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F8660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F865Cu;
        // 0x2f8660: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F865Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F8664u;
    // 0x2f8664: 0x0  nop
    ctx->pc = 0x2f8664u;
    // NOP
    ctx->pc = 0x2f8668u;
}
