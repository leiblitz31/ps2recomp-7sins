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

// Function: sub_005DF700
// Address: 0x5df700 - 0x5dfb60
void sub_005DF700_0x5df700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005DF700_0x5df700");
#endif

    switch (ctx->pc) {
        case 0x5df708u: goto label_5df708;
        case 0x5df750u: goto label_5df750;
        case 0x5df7b4u: goto label_5df7b4;
        case 0x5df7bcu: goto label_5df7bc;
        case 0x5df80cu: goto label_5df80c;
        case 0x5df8c8u: goto label_5df8c8;
        case 0x5df8e0u: goto label_5df8e0;
        case 0x5df930u: goto label_5df930;
        case 0x5df948u: goto label_5df948;
        case 0x5df950u: goto label_5df950;
        case 0x5df9fcu: goto label_5df9fc;
        case 0x5dfa8cu: goto label_5dfa8c;
        case 0x5dfaa8u: goto label_5dfaa8;
        case 0x5dfad0u: goto label_5dfad0;
        case 0x5dfb10u: goto label_5dfb10;
        default: break;
    }

    ctx->pc = 0x5df700u;

    // 0x5df700: 0x526f6228  beql        $s3, $t7, . + 4 + (0x6228 << 2)
    ctx->pc = 0x5DF700u;
    {
        const bool branch_taken_0x5df700 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        if (branch_taken_0x5df700) {
            ctx->pc = 0x5DF704u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF700u;
            // 0x5df704: 0x4d646165  .word       0x4D646165                   # INVALID     $t3, $a0, 0x6165 # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF704 raw=0x4D646165");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F7FA4u;
            return;
        }
    }
    ctx->pc = 0x5DF708u;
label_5df708:
    // 0x5df708: 0x2065646f  addi        $a1, $v1, 0x646F
    ctx->pc = 0x5df708u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5df70c: 0x62202626  daddi       $zero, $s1, 0x2626
    ctx->pc = 0x5df70cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)9766; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5df710: 0x6972576f  ldl         $s2, 0x576F($t3)
    ctx->pc = 0x5df710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 22383); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem << shift)); }
    // 0x5df714: 0x6f4d6574  ldr         $t5, 0x6574($k0)
    ctx->pc = 0x5df714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 25972); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x5df718: 0x20296564  addi        $t1, $at, 0x6564
    ctx->pc = 0x5df718u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)25956, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5df71c: 0x54203d21  bnel        $at, $zero, . + 4 + (0x3D21 << 2)
    ctx->pc = 0x5DF71Cu;
    {
        const bool branch_taken_0x5df71c = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x5df71c) {
            ctx->pc = 0x5DF720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF71Cu;
            // 0x5df720: 0x455552  .word       0x00455552                   # mflo        $t2 # 00450540 <InstrIdType: CPU_SPECIAL> (Delay Slot)
            SET_GPR_U64(ctx, 10, ctx->lo);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EEBA4u;
            return;
        }
    }
    ctx->pc = 0x5DF724u;
    // 0x5df724: 0x0  nop
    ctx->pc = 0x5df724u;
    // NOP
    // 0x5df728: 0x0  nop
    ctx->pc = 0x5df728u;
    // NOP
    // 0x5df72c: 0x0  nop
    ctx->pc = 0x5df72cu;
    // NOP
    // 0x5df730: 0x46637464  .word       0x46637464                   # INVALID     $s3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df730u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x24 at 0x5DF730 raw=0x46637464");
    // 0x5df734: 0x3a656c69  xori        $a1, $s3, 0x6C69
    ctx->pc = 0x5df734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)27753);
    // 0x5df738: 0x65704f3a  daddiu      $s0, $t3, 0x4F3A
    ctx->pc = 0x5df738u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)20282);
    // 0x5df73c: 0x203a206e  addi        $k0, $at, 0x206E
    ctx->pc = 0x5df73cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)8302, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5df740: 0x74537752  .word       0x74537752                   # INVALID     $v0, $s3, 0x7752 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df740u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF740 raw=0x74537752");
    // 0x5df744: 0x6d616572  ldr         $at, 0x6572($t3)
    ctx->pc = 0x5df744u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5df748: 0x65706f20  daddiu      $s0, $t3, 0x6F20
    ctx->pc = 0x5df748u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28448);
    // 0x5df74c: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x5df74cu;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
label_5df750:
    // 0x5df750: 0x646f6d20  daddiu      $t7, $v1, 0x6D20
    ctx->pc = 0x5df750u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)27936);
    // 0x5df754: 0x61207365  daddi       $zero, $t1, 0x7365
    ctx->pc = 0x5df754u;
    { int64_t src = (int64_t)GPR_S64(ctx, 9); int64_t imm = (int64_t)(int32_t)29541; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5df758: 0x6d206572  ldr         $zero, 0x6572($t1)
    ctx->pc = 0x5df758u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 25970); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5df75c: 0x61757475  daddi       $s5, $t3, 0x7475
    ctx->pc = 0x5df75cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29813; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 21, res); }
    // 0x5df760: 0x20796c6c  addi        $t9, $v1, 0x6C6C
    ctx->pc = 0x5df760u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27756, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 25, (int32_t)tmp); }
    // 0x5df764: 0x6c637865  ldr         $v1, 0x7865($v1)
    ctx->pc = 0x5df764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 30821); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x5df768: 0x76697375  .word       0x76697375                   # INVALID     $s3, $t1, 0x7375 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df768u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF768 raw=0x76697375");
    // 0x5df76c: 0xa212065  j           func_8848194
    ctx->pc = 0x5DF76Cu;
    ctx->pc = 0x8848194u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8848194u, 0x5DF76Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DF774u;
    // 0x5df774: 0x0  nop
    ctx->pc = 0x5df774u;
    // NOP
    // 0x5df778: 0x0  nop
    ctx->pc = 0x5df778u;
    // NOP
    // 0x5df77c: 0x0  nop
    ctx->pc = 0x5df77cu;
    // NOP
    // 0x5df780: 0x53637464  beql        $k1, $v1, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DF780u;
    {
        const bool branch_taken_0x5df780 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 3));
        if (branch_taken_0x5df780) {
            ctx->pc = 0x5DF784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF780u;
            // 0x5df784: 0x61657274  daddi       $a1, $t3, 0x7274 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FC914u;
            return;
        }
    }
    ctx->pc = 0x5DF788u;
    // 0x5df788: 0x6e69426d  ldr         $t1, 0x426D($s3)
    ctx->pc = 0x5df788u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 17005); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df78c: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df78cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF78C raw=0x7070632E");
    // 0x5df790: 0x0  nop
    ctx->pc = 0x5df790u;
    // NOP
    // 0x5df794: 0x0  nop
    ctx->pc = 0x5df794u;
    // NOP
    // 0x5df798: 0x0  nop
    ctx->pc = 0x5df798u;
    // NOP
    // 0x5df79c: 0x0  nop
    ctx->pc = 0x5df79cu;
    // NOP
    // 0x5df7a0: 0x42705f6d  .word       0x42705F6D                   # INVALID     $s3, $s0, 0x5F6D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5df7a0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x13 at 0x5DF7A0 raw=0x42705F6D");
    // 0x5df7a4: 0x65666675  daddiu      $a2, $t3, 0x6675
    ctx->pc = 0x5df7a4u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26229);
    // 0x5df7a8: 0x3d212072  .word       0x3D212072                   # lui         $at, 0x2072 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df7a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8306 << 16));
    // 0x5df7ac: 0x4c554e20  .word       0x4C554E20                   # INVALID     $v0, $s5, 0x4E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df7acu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF7AC raw=0x4C554E20");
    // 0x5df7b0: 0x4c  syscall     1
    ctx->pc = 0x5df7b0u;
    ctx->pc = 0x5DF7B4u;
runtime->handleSyscall(rdram, ctx, 0x1u);
label_5df7b4:
    // 0x5df7b4: 0x0  nop
    ctx->pc = 0x5df7b4u;
    // NOP
    // 0x5df7b8: 0x0  nop
    ctx->pc = 0x5df7b8u;
    // NOP
label_5df7bc:
    // 0x5df7bc: 0x0  nop
    ctx->pc = 0x5df7bcu;
    // NOP
    // 0x5df7c0: 0x64616552  daddiu      $at, $v1, 0x6552
    ctx->pc = 0x5df7c0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25938);
    // 0x5df7c4: 0x62203a20  daddi       $zero, $s1, 0x3A20
    ctx->pc = 0x5df7c4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)14880; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5df7c8: 0x65666675  daddiu      $a2, $t3, 0x6675
    ctx->pc = 0x5df7c8u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26229);
    // 0x5df7cc: 0x756d2072  .word       0x756D2072                   # INVALID     $t3, $t5, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df7ccu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF7CC raw=0x756D2072");
    // 0x5df7d0: 0x68207473  ldl         $zero, 0x7473($at)
    ctx->pc = 0x5df7d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5df7d4: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x5df7d4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5df7d8: 0x6e656562  ldr         $a1, 0x6562($s3)
    ctx->pc = 0x5df7d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5df7dc: 0x696e6920  ldl         $t6, 0x6920($t3)
    ctx->pc = 0x5df7dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5df7e0: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5df7e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5df7e4: 0x64657a69  daddiu      $a1, $v1, 0x7A69
    ctx->pc = 0x5df7e4u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)31337);
    // 0x5df7e8: 0x0  nop
    ctx->pc = 0x5df7e8u;
    // NOP
    // 0x5df7ec: 0x0  nop
    ctx->pc = 0x5df7ecu;
    // NOP
    // 0x5df7f0: 0x657a6953  daddiu      $k0, $t3, 0x6953
    ctx->pc = 0x5df7f0u;
    SET_GPR_S64(ctx, 26, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26963);
    // 0x5df7f4: 0x65526f54  daddiu      $s2, $t2, 0x6F54
    ctx->pc = 0x5df7f4u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)28500);
    // 0x5df7f8: 0x3e206461  .word       0x3E206461                   # lui         $zero, 0x6461 # 02200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df7f8u;
    SET_GPR_S32(ctx, 0, (int32_t)((uint32_t)25697 << 16));
    // 0x5df7fc: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x5df7fcu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x5df800: 0x73696854  .word       0x73696854                   # INVALID     $k1, $t1, 0x6854 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df800u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x14 at 0x5DF800 raw=0x73696854");
    // 0x5df804: 0x6f687320  ldr         $t0, 0x7320($k1)
    ctx->pc = 0x5df804u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29472); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x5df808: 0x6e646c75  ldr         $a0, 0x6C75($s3)
    ctx->pc = 0x5df808u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27765); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_5df80c:
    // 0x5df80c: 0x68207427  ldl         $zero, 0x7427($at)
    ctx->pc = 0x5df80cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29735); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5df810: 0x65707061  daddiu      $s0, $t3, 0x7061
    ctx->pc = 0x5df810u;
    SET_GPR_S64(ctx, 16, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28769);
    // 0x5df814: 0x6e69206e  ldr         $t1, 0x206E($s3)
    ctx->pc = 0x5df814u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 8302); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df818: 0x6c657220  ldr         $a1, 0x7220($v1)
    ctx->pc = 0x5df818u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5df81c: 0x65736165  daddiu      $s3, $t3, 0x6165
    ctx->pc = 0x5df81cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24933);
    // 0x5df820: 0x2e2e2e  .word       0x002E2E2E                   # dsub        $a1, $at, $t6 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df820u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 14); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, r); }
    // 0x5df824: 0x0  nop
    ctx->pc = 0x5df824u;
    // NOP
    // 0x5df828: 0x0  nop
    ctx->pc = 0x5df828u;
    // NOP
    // 0x5df82c: 0x0  nop
    ctx->pc = 0x5df82cu;
    // NOP
    // 0x5df830: 0x6b656553  ldl         $a1, 0x6553($k1)
    ctx->pc = 0x5df830u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 25939); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x5df834: 0x62203a20  daddi       $zero, $s1, 0x3A20
    ctx->pc = 0x5df834u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)14880; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5df838: 0x65666675  daddiu      $a2, $t3, 0x6675
    ctx->pc = 0x5df838u;
    SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26229);
    // 0x5df83c: 0x756d2072  .word       0x756D2072                   # INVALID     $t3, $t5, 0x2072 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df83cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF83C raw=0x756D2072");
    // 0x5df840: 0x68207473  ldl         $zero, 0x7473($at)
    ctx->pc = 0x5df840u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 29811); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5df844: 0x20657661  addi        $a1, $v1, 0x7661
    ctx->pc = 0x5df844u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30305, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5df848: 0x6e656562  ldr         $a1, 0x6562($s3)
    ctx->pc = 0x5df848u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25954); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5df84c: 0x696e6920  ldl         $t6, 0x6920($t3)
    ctx->pc = 0x5df84cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26912); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem << shift)); }
    // 0x5df850: 0x6c616974  ldr         $at, 0x6974($v1)
    ctx->pc = 0x5df850u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 26996); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5df854: 0x64657a69  daddiu      $a1, $v1, 0x7A69
    ctx->pc = 0x5df854u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)31337);
    // 0x5df858: 0x0  nop
    ctx->pc = 0x5df858u;
    // NOP
    // 0x5df85c: 0x0  nop
    ctx->pc = 0x5df85cu;
    // NOP
    // 0x5df860: 0x4f77654e  .word       0x4F77654E                   # INVALID     $k1, $s7, 0x654E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df860u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF860 raw=0x4F77654E");
    // 0x5df864: 0x65736666  daddiu      $s3, $t3, 0x6666
    ctx->pc = 0x5df864u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26214);
    // 0x5df868: 0x3d3e2074  .word       0x3D3E2074                   # lui         $fp, 0x2074 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df868u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8308 << 16));
    // 0x5df86c: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x5df86cu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x5df870: 0x69646e65  ldl         $a0, 0x6E65($t3)
    ctx->pc = 0x5df870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x5df874: 0x6f20676e  ldr         $zero, 0x676E($t9)
    ctx->pc = 0x5df874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 26478); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5df878: 0x65736666  daddiu      $s3, $t3, 0x6666
    ctx->pc = 0x5df878u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26214);
    // 0x5df87c: 0x756d2074  .word       0x756D2074                   # INVALID     $t3, $t5, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df87cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF87C raw=0x756D2074");
    // 0x5df880: 0x62207473  daddi       $zero, $s1, 0x7473
    ctx->pc = 0x5df880u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)29811; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5df884: 0x3d3e2065  .word       0x3D3E2065                   # lui         $fp, 0x2065 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df884u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)8293 << 16));
    // 0x5df888: 0x3020  add         $a2, $zero, $zero
    ctx->pc = 0x5df888u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 0);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 6, (int32_t)result);     } }
    // 0x5df88c: 0x0  nop
    ctx->pc = 0x5df88cu;
    // NOP
    // 0x5df890: 0x4f77654e  .word       0x4F77654E                   # INVALID     $k1, $s7, 0x654E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df890u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF890 raw=0x4F77654E");
    // 0x5df894: 0x65736666  daddiu      $s3, $t3, 0x6666
    ctx->pc = 0x5df894u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26214);
    // 0x5df898: 0x3d3c2074  .word       0x3D3C2074                   # lui         $gp, 0x2074 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df898u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)8308 << 16));
    // 0x5df89c: 0x6f6c2820  ldr         $t4, 0x2820($k1)
    ctx->pc = 0x5df89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 10272); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5df8a0: 0x6d29676e  ldr         $t1, 0x676E($t1)
    ctx->pc = 0x5df8a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 26478); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df8a4: 0x78614d5f  lq          $at, 0x4D5F($v1)
    ctx->pc = 0x5df8a4u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 3), 19807)));
    // 0x5df8a8: 0x7366664f  .word       0x7366664F                   # INVALID     $k1, $a2, 0x664F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df8a8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xF at 0x5DF8A8 raw=0x7366664F");
    // 0x5df8ac: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df8acu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5df8b0: 0x69646e65  ldl         $a0, 0x6E65($t3)
    ctx->pc = 0x5df8b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28261); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x5df8b4: 0x6f20676e  ldr         $zero, 0x676E($t9)
    ctx->pc = 0x5df8b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 26478); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5df8b8: 0x65736666  daddiu      $s3, $t3, 0x6666
    ctx->pc = 0x5df8b8u;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26214);
    // 0x5df8bc: 0x756d2074  .word       0x756D2074                   # INVALID     $t3, $t5, 0x2074 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df8bcu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF8BC raw=0x756D2074");
    // 0x5df8c0: 0x62207473  daddi       $zero, $s1, 0x7473
    ctx->pc = 0x5df8c0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)29811; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5df8c4: 0x3d3c2065  .word       0x3D3C2065                   # lui         $gp, 0x2065 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df8c4u;
    SET_GPR_S32(ctx, 28, (int32_t)((uint32_t)8293 << 16));
label_5df8c8:
    // 0x5df8c8: 0x78614d20  lq          $at, 0x4D20($v1)
    ctx->pc = 0x5df8c8u;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 3), 19744)));
    // 0x5df8cc: 0x7366664f  .word       0x7366664F                   # INVALID     $k1, $a2, 0x664F # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df8ccu;
    throw std::runtime_error("Unhandled MMI instruction: function 0xF at 0x5DF8CC raw=0x7366664F");
    // 0x5df8d0: 0x7465  .word       0x00007465                   # move        $t6, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df8d0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5df8d4: 0x0  nop
    ctx->pc = 0x5df8d4u;
    // NOP
    // 0x5df8d8: 0x0  nop
    ctx->pc = 0x5df8d8u;
    // NOP
    // 0x5df8dc: 0x0  nop
    ctx->pc = 0x5df8dcu;
    // NOP
label_5df8e0:
    // 0x5df8e0: 0x53637464  beql        $k1, $v1, . + 4 + (0x7464 << 2)
    ctx->pc = 0x5DF8E0u;
    {
        const bool branch_taken_0x5df8e0 = (GPR_U64(ctx, 27) == GPR_U64(ctx, 3));
        if (branch_taken_0x5df8e0) {
            ctx->pc = 0x5DF8E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF8E0u;
            // 0x5df8e4: 0x61657274  daddi       $a1, $t3, 0x7274 (Delay Slot)
            { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FCA74u;
            return;
        }
    }
    ctx->pc = 0x5DF8E8u;
    // 0x5df8e8: 0x2e4f496d  sltiu       $t7, $s2, 0x496D
    ctx->pc = 0x5df8e8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)18797) ? 1 : 0);
    // 0x5df8ec: 0x707063  .word       0x00707063                   # subu        $t6, $v1, $s0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df8ecu;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x5df8f0: 0x49655f6d  .word       0x49655F6D                   # INVALID     $t3, $a1, 0x5F6D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df8f0u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x5DF8F0 raw=0x49655F6D");
    // 0x5df8f4: 0x646f4d4f  daddiu      $t7, $v1, 0x4D4F
    ctx->pc = 0x5df8f4u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)19791);
    // 0x5df8f8: 0x3d3d2065  .word       0x3D3D2065                   # lui         $sp, 0x2065 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df8f8u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8293 << 16));
    // 0x5df8fc: 0x495f4520  .word       0x495F4520                   # INVALID     $t2, $ra, 0x4520 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df8fcu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DF8FC raw=0x495F4520");
    // 0x5df900: 0x4f4e5f4f  .word       0x4F4E5F4F                   # INVALID     $k0, $t6, 0x5F4F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df900u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF900 raw=0x4F4E5F4F");
    // 0x5df904: 0x504f5f54  beql        $v0, $t7, . + 4 + (0x5F54 << 2)
    ctx->pc = 0x5DF904u;
    {
        const bool branch_taken_0x5df904 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x5df904) {
            ctx->pc = 0x5DF908u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF904u;
            // 0x5df908: 0x44454e45  .word       0x44454E45                   # cfc1        $a1, $9 # 00000645 <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F7658u;
            return;
        }
    }
    ctx->pc = 0x5DF90Cu;
    // 0x5df90c: 0x0  nop
    ctx->pc = 0x5df90cu;
    // NOP
    // 0x5df910: 0x65727473  daddiu      $s2, $t3, 0x7473
    ctx->pc = 0x5df910u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)29811);
    // 0x5df914: 0x69206d61  ldl         $zero, 0x6D61($t1)
    ctx->pc = 0x5df914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 28001); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem << shift)); }
    // 0x5df918: 0x74732073  .word       0x74732073                   # INVALID     $v1, $s3, 0x2073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df918u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF918 raw=0x74732073");
    // 0x5df91c: 0x206c6c69  addi        $t4, $v1, 0x6C69
    ctx->pc = 0x5df91cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27753, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5df920: 0x6e65706f  ldr         $a1, 0x706F($s3)
    ctx->pc = 0x5df920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28783); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x5df924: 0x6465  .word       0x00006465                   # move        $t4, $zero # 00000440 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df924u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5df928: 0x0  nop
    ctx->pc = 0x5df928u;
    // NOP
    // 0x5df92c: 0x0  nop
    ctx->pc = 0x5df92cu;
    // NOP
label_5df930:
    // 0x5df930: 0x49655f6d  .word       0x49655F6D                   # INVALID     $t3, $a1, 0x5F6D # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df930u;
    throw std::runtime_error("Unhandled COP2 format: 0xB at 0x5DF930 raw=0x49655F6D");
    // 0x5df934: 0x646f4d4f  daddiu      $t7, $v1, 0x4D4F
    ctx->pc = 0x5df934u;
    SET_GPR_S64(ctx, 15, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)19791);
    // 0x5df938: 0x3d212065  .word       0x3D212065                   # lui         $at, 0x2065 # 01200000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df938u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)8293 << 16));
    // 0x5df93c: 0x495f4520  .word       0x495F4520                   # INVALID     $t2, $ra, 0x4520 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df93cu;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DF93C raw=0x495F4520");
    // 0x5df940: 0x4f4e5f4f  .word       0x4F4E5F4F                   # INVALID     $k0, $t6, 0x5F4F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df940u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF940 raw=0x4F4E5F4F");
    // 0x5df944: 0x504f5f54  beql        $v0, $t7, . + 4 + (0x5F54 << 2)
label_5df948:
    if (ctx->pc == 0x5DF948u) {
        ctx->pc = 0x5DF948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5DF944u;
        // 0x5df948: 0x44454e45  .word       0x44454E45                   # cfc1        $a1, $9 # 00000645 <InstrIdType: R5900_COP1> (Delay Slot)
        SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR9
        ctx->in_delay_slot = false;
        ctx->pc = 0x5DF94Cu;
        goto label_fallthrough_0x5df944;
    }
    ctx->pc = 0x5DF944u;
    {
        const bool branch_taken_0x5df944 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x5df944) {
            ctx->pc = 0x5DF948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF944u;
            // 0x5df948: 0x44454e45  .word       0x44454E45                   # cfc1        $a1, $9 # 00000645 <InstrIdType: R5900_COP1> (Delay Slot)
            SET_GPR_U32(ctx, 5, 0); // Unimplemented FCR9
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F7698u;
            return;
        }
    }
label_fallthrough_0x5df944:
    ctx->pc = 0x5DF94Cu;
    // 0x5df94c: 0x0  nop
    ctx->pc = 0x5df94cu;
    // NOP
label_5df950:
    // 0x5df950: 0x73206f4e  .word       0x73206F4E                   # INVALID     $t9, $zero, 0x6F4E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df950u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xE at 0x5DF950 raw=0x73206F4E");
    // 0x5df954: 0x61657274  daddi       $a1, $t3, 0x7274
    ctx->pc = 0x5df954u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29300; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5df958: 0x706f206d  .word       0x706F206D                   # INVALID     $v1, $t7, 0x206D # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df958u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2D at 0x5DF958 raw=0x706F206D");
    // 0x5df95c: 0x64656e65  daddiu      $a1, $v1, 0x6E65
    ctx->pc = 0x5df95cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28261);
    // 0x5df960: 0x0  nop
    ctx->pc = 0x5df960u;
    // NOP
    // 0x5df964: 0x0  nop
    ctx->pc = 0x5df964u;
    // NOP
    // 0x5df968: 0x46637464  .word       0x46637464                   # INVALID     $s3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5df968u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x24 at 0x5DF968 raw=0x46637464");
    // 0x5df96c: 0x4c656c69  .word       0x4C656C69                   # INVALID     $v1, $a1, 0x6C69 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df96cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DF96C raw=0x4C656C69");
    // 0x5df970: 0x7070632e  .word       0x7070632E                   # INVALID     $v1, $s0, 0x632E # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df970u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DF970 raw=0x7070632E");
    // 0x5df974: 0x0  nop
    ctx->pc = 0x5df974u;
    // NOP
    // 0x5df978: 0x0  nop
    ctx->pc = 0x5df978u;
    // NOP
    // 0x5df97c: 0x0  nop
    ctx->pc = 0x5df97cu;
    // NOP
    // 0x5df980: 0x6f727245  ldr         $s2, 0x7245($k1)
    ctx->pc = 0x5df980u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 29253); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 18, (GPR_U64(ctx, 18) & keepMask) | (mem >> shift)); }
    // 0x5df984: 0x6f6c2072  ldr         $t4, 0x2072($k1)
    ctx->pc = 0x5df984u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8306); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
    // 0x5df988: 0x6e696461  ldr         $t1, 0x6461($s3)
    ctx->pc = 0x5df988u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 25697); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5df98c: 0x69662067  ldl         $a2, 0x2067($t3)
    ctx->pc = 0x5df98cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8295); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x5df990: 0x2720656c  addiu       $zero, $t9, 0x656C
    ctx->pc = 0x5df990u;
    // NOP (addiu $zero, ...)
    // 0x5df994: 0x277325  .word       0x00277325                   # or          $t6, $at, $a3 # 00000300 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5df994u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 1) | GPR_U64(ctx, 7));
    // 0x5df998: 0x0  nop
    ctx->pc = 0x5df998u;
    // NOP
    // 0x5df99c: 0x0  nop
    ctx->pc = 0x5df99cu;
    // NOP
    // 0x5df9a0: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5df9a0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5df9a4: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5df9a4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5df9a8: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5df9a8u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x5df9ac: 0x73252720  .word       0x73252720                   # madd1       $a0, $t9, $a1 # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df9acu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x5df9b0: 0x55202e27  bnel        $t1, $zero, . + 4 + (0x2E27 << 2)
    ctx->pc = 0x5DF9B0u;
    {
        const bool branch_taken_0x5df9b0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x5df9b0) {
            ctx->pc = 0x5DF9B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF9B0u;
            // 0x5df9b4: 0x6c62616e  ldr         $v0, 0x616E($v1) (Delay Slot)
            { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24942); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EB250u;
            return;
        }
    }
    ctx->pc = 0x5DF9B8u;
    // 0x5df9b8: 0x6f742065  ldr         $s4, 0x2065($k1)
    ctx->pc = 0x5df9b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 20, (GPR_U64(ctx, 20) & keepMask) | (mem >> shift)); }
    // 0x5df9bc: 0x61657220  daddi       $a1, $t3, 0x7220
    ctx->pc = 0x5df9bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)29216; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 5, res); }
    // 0x5df9c0: 0x69662064  ldl         $a2, 0x2064($t3)
    ctx->pc = 0x5df9c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 8292); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x5df9c4: 0x20747372  addi        $s4, $v1, 0x7372
    ctx->pc = 0x5df9c4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29554, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5df9c8: 0x64726f77  daddiu      $s2, $v1, 0x6F77
    ctx->pc = 0x5df9c8u;
    SET_GPR_S64(ctx, 18, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28535);
    // 0x5df9cc: 0x0  nop
    ctx->pc = 0x5df9ccu;
    // NOP
    // 0x5df9d0: 0x62616e55  daddi       $at, $s3, 0x6E55
    ctx->pc = 0x5df9d0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28245; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x5df9d4: 0x7420656c  .word       0x7420656C                   # INVALID     $at, $zero, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5df9d4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DF9D4 raw=0x7420656C");
    // 0x5df9d8: 0x6564206f  daddiu      $a0, $t3, 0x206F
    ctx->pc = 0x5df9d8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
    // 0x5df9dc: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x5df9dcu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
    // 0x5df9e0: 0x79656b20  lq          $a1, 0x6B20($t3)
    ctx->pc = 0x5df9e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 11), 27424)));
    // 0x5df9e4: 0x49462320  .word       0x49462320                   # INVALID     $t2, $a2, 0x2320 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5df9e4u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DF9E4 raw=0x49462320");
    // 0x5df9e8: 0x565f454c  bnel        $s2, $ra, . + 4 + (0x454C << 2)
    ctx->pc = 0x5DF9E8u;
    {
        const bool branch_taken_0x5df9e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 31));
        if (branch_taken_0x5df9e8) {
            ctx->pc = 0x5DF9ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DF9E8u;
            // 0x5df9ec: 0x49535245  .word       0x49535245                   # INVALID     $t2, $s3, 0x5245 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT> (Delay Slot)
            throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DF9EC raw=0x49535245");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0F1Cu;
            return;
        }
    }
    ctx->pc = 0x5DF9F0u;
    // 0x5df9f0: 0x202c4e4f  addi        $t4, $at, 0x4E4F
    ctx->pc = 0x5df9f0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)20047, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
    // 0x5df9f4: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5df9f4u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x5df9f8: 0x73252720  .word       0x73252720                   # madd1       $a0, $t9, $a1 # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5df9f8u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_5df9fc:
    // 0x5df9fc: 0x27  not         $zero, $zero
    ctx->pc = 0x5df9fcu;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
    // 0x5dfa00: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5dfa00u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5dfa04: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5dfa04u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5dfa08: 0x64616548  daddiu      $at, $v1, 0x6548
    ctx->pc = 0x5dfa08u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)25928);
    // 0x5dfa0c: 0x202e7265  addi        $t6, $at, 0x7265
    ctx->pc = 0x5dfa0cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29285, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5dfa10: 0x4c494623  .word       0x4C494623                   # INVALID     $v0, $t1, 0x4623 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfa10u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFA10 raw=0x4C494623");
    // 0x5dfa14: 0x45565f45  .word       0x45565F45                   # INVALID     $t2, $s6, 0x5F45 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dfa14u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x5 at 0x5DFA14 raw=0x45565F45");
    // 0x5dfa18: 0x4f495352  .word       0x4F495352                   # INVALID     $k0, $t1, 0x5352 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfa18u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFA18 raw=0x4F495352");
    // 0x5dfa1c: 0x6f6e204e  ldr         $t6, 0x204E($k1)
    ctx->pc = 0x5dfa1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8270); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x5dfa20: 0x6f662074  ldr         $a2, 0x2074($k1)
    ctx->pc = 0x5dfa20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x5dfa24: 0x20646e75  addi        $a0, $v1, 0x6E75
    ctx->pc = 0x5dfa24u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28277, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5dfa28: 0x74207461  .word       0x74207461                   # INVALID     $at, $zero, 0x7461 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfa28u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFA28 raw=0x74207461");
    // 0x5dfa2c: 0x62206568  daddi       $zero, $s1, 0x6568
    ctx->pc = 0x5dfa2cu;
    { int64_t src = (int64_t)GPR_S64(ctx, 17); int64_t imm = (int64_t)(int32_t)25960; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, res); }
    // 0x5dfa30: 0x6e696765  ldr         $t1, 0x6765($s3)
    ctx->pc = 0x5dfa30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 26469); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5dfa34: 0x676e696e  daddiu      $t6, $k1, 0x696E
    ctx->pc = 0x5dfa34u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26990);
    // 0x5dfa38: 0x20666f20  addi        $a2, $v1, 0x6F20
    ctx->pc = 0x5dfa38u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28448, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 6, (int32_t)tmp); }
    // 0x5dfa3c: 0x20656874  addi        $a1, $v1, 0x6874
    ctx->pc = 0x5dfa3cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26740, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dfa40: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5dfa40u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x5dfa44: 0x73252720  .word       0x73252720                   # madd1       $a0, $t9, $a1 # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfa44u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x5dfa48: 0x27  not         $zero, $zero
    ctx->pc = 0x5dfa48u;
    SET_GPR_U64(ctx, 0, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 0)));
    // 0x5dfa4c: 0x0  nop
    ctx->pc = 0x5dfa4cu;
    // NOP
    // 0x5dfa50: 0x61766e49  daddi       $s6, $t3, 0x6E49
    ctx->pc = 0x5dfa50u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)28233; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 22, res); }
    // 0x5dfa54: 0x2064696c  addi        $a0, $v1, 0x696C
    ctx->pc = 0x5dfa54u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26988, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x5dfa58: 0x656c6966  daddiu      $t4, $t3, 0x6966
    ctx->pc = 0x5dfa58u;
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26982);
    // 0x5dfa5c: 0x73252720  .word       0x73252720                   # madd1       $a0, $t9, $a1 # 00000700 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfa5cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 25) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x5dfa60: 0x55202e27  bnel        $t1, $zero, . + 4 + (0x2E27 << 2)
    ctx->pc = 0x5DFA60u;
    {
        const bool branch_taken_0x5dfa60 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        if (branch_taken_0x5dfa60) {
            ctx->pc = 0x5DFA64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFA60u;
            // 0x5dfa64: 0x7075736e  .word       0x7075736E                   # INVALID     $v1, $s5, 0x736E # 00000000 <InstrIdType: R5900_MMI> (Delay Slot)
            throw std::runtime_error("Unhandled MMI instruction: function 0x2E at 0x5DFA64 raw=0x7075736E");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5EB300u;
            return;
        }
    }
    ctx->pc = 0x5DFA68u;
    // 0x5dfa68: 0x74726f70  .word       0x74726F70                   # INVALID     $v1, $s2, 0x6F70 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfa68u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFA68 raw=0x74726F70");
    // 0x5dfa6c: 0x66206465  daddiu      $zero, $s1, 0x6465
    ctx->pc = 0x5dfa6cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)25701);
    // 0x5dfa70: 0x20656c69  addi        $a1, $v1, 0x6C69
    ctx->pc = 0x5dfa70u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)27753, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dfa74: 0x73726576  .word       0x73726576                   # psrlh       $t4, $s2, 21 # 03600000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfa74u;
    SET_GPR_VEC(ctx, 12, _mm_srli_epi16(GPR_VEC(ctx, 18), 21));
    // 0x5dfa78: 0x206e6f69  addi        $t6, $v1, 0x6F69
    ctx->pc = 0x5dfa78u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28521, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5dfa7c: 0x6425  .word       0x00006425                   # move        $t4, $zero # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfa7cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 0) | GPR_U64(ctx, 0));
    // 0x5dfa80: 0x46637464  .word       0x46637464                   # INVALID     $s3, $v1, 0x7464 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dfa80u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x24 at 0x5DFA80 raw=0x46637464");
    // 0x5dfa84: 0x55656c69  bnel        $t3, $a1, . + 4 + (0x6C69 << 2)
    ctx->pc = 0x5DFA84u;
    {
        const bool branch_taken_0x5dfa84 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 5));
        if (branch_taken_0x5dfa84) {
            ctx->pc = 0x5DFA88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFA84u;
            // 0x5dfa88: 0x2e6c6974  sltiu       $t4, $s3, 0x6974 (Delay Slot)
            SET_GPR_U64(ctx, 12, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)26996) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x5FAC2Cu;
            return;
        }
    }
    ctx->pc = 0x5DFA8Cu;
label_5dfa8c:
    // 0x5dfa8c: 0x68  .word       0x00000068                   # mfsa        $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x5dfa8cu;
    SET_GPR_U32(ctx, 0, ctx->sa);
    // 0x5dfa90: 0x64616f4c  daddiu      $at, $v1, 0x6F4C
    ctx->pc = 0x5dfa90u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)28492);
    // 0x5dfa94: 0x46747854  .word       0x46747854                   # INVALID     $s3, $s4, 0x7854 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dfa94u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x13, function 0x14 at 0x5DFA94 raw=0x46747854");
    // 0x5dfa98: 0x28656c69  slti        $a1, $v1, 0x6C69
    ctx->pc = 0x5dfa98u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)27753) ? 1 : 0);
    // 0x5dfa9c: 0x25203a29  addiu       $zero, $t1, 0x3A29
    ctx->pc = 0x5dfa9cu;
    // NOP (addiu $zero, ...)
    // 0x5dfaa0: 0x73692073  .word       0x73692073                   # INVALID     $k1, $t1, 0x2073 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfaa0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5DFAA0 raw=0x73692073");
    // 0x5dfaa4: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfaa4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFAA4 raw=0x746F6E20");
label_5dfaa8:
    // 0x5dfaa8: 0x206e6920  addi        $t6, $v1, 0x6920
    ctx->pc = 0x5dfaa8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)26912, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 14, (int32_t)tmp); }
    // 0x5dfaac: 0x45544e49  .word       0x45544E49                   # INVALID     $t2, $s4, 0x4E49 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dfaacu;
    throw std::runtime_error("Unhandled FPU instruction: format 0xA, function 0x9 at 0x5DFAAC raw=0x45544E49");
    // 0x5dfab0: 0x726f204c  .word       0x726F204C                   # INVALID     $s3, $t7, 0x204C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5dfab0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xC at 0x5DFAB0 raw=0x726F204C");
    // 0x5dfab4: 0x726564  .word       0x00726564                   # and         $t4, $v1, $s2 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfab4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
    // 0x5dfab8: 0x0  nop
    ctx->pc = 0x5dfab8u;
    // NOP
    // 0x5dfabc: 0x0  nop
    ctx->pc = 0x5dfabcu;
    // NOP
    // 0x5dfac0: 0x62616e55  daddi       $at, $s3, 0x6E55
    ctx->pc = 0x5dfac0u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28245; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x5dfac4: 0x7420656c  .word       0x7420656C                   # INVALID     $at, $zero, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfac4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFAC4 raw=0x7420656C");
    // 0x5dfac8: 0x6564206f  daddiu      $a0, $t3, 0x206F
    ctx->pc = 0x5dfac8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
    // 0x5dfacc: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x5dfaccu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
label_5dfad0:
    // 0x5dfad0: 0x79656b20  lq          $a1, 0x6B20($t3)
    ctx->pc = 0x5dfad0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 11), 27424)));
    // 0x5dfad4: 0x49462320  .word       0x49462320                   # INVALID     $t2, $a2, 0x2320 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5dfad4u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5DFAD4 raw=0x49462320");
    // 0x5dfad8: 0x5f444c45  .word       0x5F444C45                   # bgtzl       $k0, . + 4 + (0x4C45 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5DFAD8u;
    {
        const bool branch_taken_0x5dfad8 = (GPR_S32(ctx, 26) > 0);
        if (branch_taken_0x5dfad8) {
            ctx->pc = 0x5DFADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5DFAD8u;
            // 0x5dfadc: 0x202c4449  addi        $t4, $at, 0x4449 (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)17481, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 12, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F2BF0u;
            return;
        }
    }
    ctx->pc = 0x5DFAE0u;
    // 0x5dfae0: 0x28636966  slti        $v1, $v1, 0x6966
    ctx->pc = 0x5dfae0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)26982) ? 1 : 0);
    // 0x5dfae4: 0x20297325  addi        $t1, $at, 0x7325
    ctx->pc = 0x5dfae4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)29477, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x5dfae8: 0x656e696c  daddiu      $t6, $t3, 0x696C
    ctx->pc = 0x5dfae8u;
    SET_GPR_S64(ctx, 14, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26988);
    // 0x5dfaec: 0x29642528  slti        $a0, $t3, 0x2528
    ctx->pc = 0x5dfaecu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 11) < (int64_t)(int32_t)9512) ? 1 : 0);
    // 0x5dfaf0: 0x6569460a  daddiu      $t1, $t3, 0x460A
    ctx->pc = 0x5dfaf0u;
    SET_GPR_S64(ctx, 9, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)17930);
    // 0x5dfaf4: 0x6e20646c  ldr         $zero, 0x646C($s1)
    ctx->pc = 0x5dfaf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 25708); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5dfaf8: 0x20656d61  addi        $a1, $v1, 0x6D61
    ctx->pc = 0x5dfaf8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28001, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5dfafc: 0x20746f6e  addi        $s4, $v1, 0x6F6E
    ctx->pc = 0x5dfafcu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28526, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5dfb00: 0x6e756f66  ldr         $s5, 0x6F66($s3)
    ctx->pc = 0x5dfb00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28518); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 21, (GPR_U64(ctx, 21) & keepMask) | (mem >> shift)); }
    // 0x5dfb04: 0x64  .word       0x00000064                   # and         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfb04u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) & GPR_U64(ctx, 0));
    // 0x5dfb08: 0x0  nop
    ctx->pc = 0x5dfb08u;
    // NOP
    // 0x5dfb0c: 0x0  nop
    ctx->pc = 0x5dfb0cu;
    // NOP
label_5dfb10:
    // 0x5dfb10: 0x62616e55  daddi       $at, $s3, 0x6E55
    ctx->pc = 0x5dfb10u;
    { int64_t src = (int64_t)GPR_S64(ctx, 19); int64_t imm = (int64_t)(int32_t)28245; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 1, res); }
    // 0x5dfb14: 0x7420656c  .word       0x7420656C                   # INVALID     $at, $zero, 0x656C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfb14u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5DFB14 raw=0x7420656C");
    // 0x5dfb18: 0x6564206f  daddiu      $a0, $t3, 0x206F
    ctx->pc = 0x5dfb18u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)8303);
    // 0x5dfb1c: 0x65646f63  daddiu      $a0, $t3, 0x6F63
    ctx->pc = 0x5dfb1cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)28515);
    // 0x5dfb20: 0x79656b20  lq          $a1, 0x6B20($t3)
    ctx->pc = 0x5dfb20u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 11), 27424)));
    // 0x5dfb24: 0x4e492320  .word       0x4E492320                   # INVALID     $s2, $t1, 0x2320 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5dfb24u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5DFB24 raw=0x4E492320");
    // 0x5dfb28: 0x44554c43  .word       0x44554C43                   # cfc1        $s5, $9 # 00000443 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5dfb28u;
    SET_GPR_U32(ctx, 21, 0); // Unimplemented FCR9
    // 0x5dfb2c: 0x66202c45  daddiu      $zero, $s1, 0x2C45
    ctx->pc = 0x5dfb2cu;
    SET_GPR_S64(ctx, 0, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)11333);
    // 0x5dfb30: 0x25286369  addiu       $t0, $t1, 0x6369
    ctx->pc = 0x5dfb30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), 25449));
    // 0x5dfb34: 0x6c202973  ldr         $zero, 0x2973($at)
    ctx->pc = 0x5dfb34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 10611); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5dfb38: 0x28656e69  slti        $a1, $v1, 0x6E69
    ctx->pc = 0x5dfb38u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)28265) ? 1 : 0);
    // 0x5dfb3c: 0xa296425  j           func_8A59094
    ctx->pc = 0x5DFB3Cu;
    ctx->pc = 0x5DFB40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5DFB3Cu;
    // 0x5dfb40: 0x656c6946  daddiu      $t4, $t3, 0x6946 (Delay Slot)
    SET_GPR_S64(ctx, 12, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)26950);
    ctx->in_delay_slot = false;
    ctx->pc = 0x8A59094u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x8A59094u, 0x5DFB3Cu, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5DFB44u;
    // 0x5dfb44: 0x6d616e20  ldr         $at, 0x6E20($t3)
    ctx->pc = 0x5dfb44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28192); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x5dfb48: 0x6f6e2065  ldr         $t6, 0x2065($k1)
    ctx->pc = 0x5dfb48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8293); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
    // 0x5dfb4c: 0x6f662074  ldr         $a2, 0x2074($k1)
    ctx->pc = 0x5dfb4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x5dfb50: 0x646e75  .word       0x00646E75                   # INVALID     $v1, $a0, 0x6E75 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5dfb50u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x35 at 0x5DFB50 raw=0x00646E75");
    // 0x5dfb54: 0x0  nop
    ctx->pc = 0x5dfb54u;
    // NOP
    // 0x5dfb58: 0x0  nop
    ctx->pc = 0x5dfb58u;
    // NOP
    // 0x5dfb5c: 0x0  nop
    ctx->pc = 0x5dfb5cu;
    // NOP
    ctx->pc = 0x5dfb60u;
}
