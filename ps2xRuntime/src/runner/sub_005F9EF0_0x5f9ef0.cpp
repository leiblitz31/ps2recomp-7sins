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

// Function: sub_005F9EF0
// Address: 0x5f9ef0 - 0x5fa4b8
void sub_005F9EF0_0x5f9ef0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_005F9EF0_0x5f9ef0");
#endif

    switch (ctx->pc) {
        case 0x5f9fccu: goto label_5f9fcc;
        case 0x5f9ffcu: goto label_5f9ffc;
        case 0x5fa354u: goto label_5fa354;
        default: break;
    }

    ctx->pc = 0x5f9ef0u;

    // 0x5f9ef0: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x5f9ef0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
    // 0x5f9ef4: 0x203a616d  addi        $k0, $at, 0x616D
    ctx->pc = 0x5f9ef4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)24941, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
    // 0x5f9ef8: 0x636e7973  daddi       $t6, $k1, 0x7973
    ctx->pc = 0x5f9ef8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)31091; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5f9efc: 0x6d697420  ldr         $t1, 0x7420($t3)
    ctx->pc = 0x5f9efcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29728); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x5f9f00: 0x74756f65  .word       0x74756F65                   # INVALID     $v1, $s5, 0x6F65 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5f9f00u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5F9F00 raw=0x74756F65");
    // 0x5f9f04: 0xa  movz        $zero, $zero, $zero
    ctx->pc = 0x5f9f04u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
    // 0x5f9f08: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f08u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F9F08 raw=0x00000001");
    // 0x5f9f0c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f0cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F9F0C raw=0x00000001");
    // 0x5f9f10: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f10u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F9F10 raw=0x00000001");
    // 0x5f9f14: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f14u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F9F14 raw=0x00000001");
    // 0x5f9f18: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f18u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F9F18 raw=0x00000001");
    // 0x5f9f1c: 0x0  nop
    ctx->pc = 0x5f9f1cu;
    // NOP
    // 0x5f9f20: 0x0  nop
    ctx->pc = 0x5f9f20u;
    // NOP
    // 0x5f9f24: 0x0  nop
    ctx->pc = 0x5f9f24u;
    // NOP
    // 0x5f9f28: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f28u;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F9F28 raw=0x00000001");
    // 0x5f9f2c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f2cu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x1 at 0x5F9F2C raw=0x00000001");
    // 0x5f9f30: 0x3000000  .word       0x03000000                   # sll         $zero, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f30u;
    // NOP
    // 0x5f9f34: 0x100  sll         $zero, $zero, 4
    ctx->pc = 0x5f9f34u;
    
    // 0x5f9f38: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x5f9f38u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
    // 0x5f9f3c: 0x0  nop
    ctx->pc = 0x5f9f3cu;
    // NOP
    // 0x5f9f40: 0x20100  sll         $zero, $v0, 4
    ctx->pc = 0x5f9f40u;
    
    // 0x5f9f44: 0x30000  sll         $zero, $v1, 0
    ctx->pc = 0x5f9f44u;
    
    // 0x5f9f48: 0x0  nop
    ctx->pc = 0x5f9f48u;
    // NOP
    // 0x5f9f4c: 0x0  nop
    ctx->pc = 0x5f9f4cu;
    // NOP
    // 0x5f9f50: 0x30200  sll         $zero, $v1, 8
    ctx->pc = 0x5f9f50u;
    
    // 0x5f9f54: 0x0  nop
    ctx->pc = 0x5f9f54u;
    // NOP
    // 0x5f9f58: 0x0  nop
    ctx->pc = 0x5f9f58u;
    // NOP
    // 0x5f9f5c: 0x0  nop
    ctx->pc = 0x5f9f5cu;
    // NOP
    // 0x5f9f60: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f60u;
    
    // 0x5f9f64: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5f9f64u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
    // 0x5f9f68: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f68u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5F9F68 raw=0x04040404");
    // 0x5f9f6c: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f6cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5F9F6C raw=0x04040404");
    // 0x5f9f70: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f70u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5F9F70 raw=0x05050505");
    // 0x5f9f74: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f74u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5F9F74 raw=0x05050505");
    // 0x5f9f78: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f78u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5F9F78 raw=0x05050505");
    // 0x5f9f7c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f7cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5F9F7C raw=0x05050505");
    // 0x5f9f80: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f80u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F80 raw=0x06060606");
    // 0x5f9f84: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f84u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F84 raw=0x06060606");
    // 0x5f9f88: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f88u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F88 raw=0x06060606");
    // 0x5f9f8c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f8cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F8C raw=0x06060606");
    // 0x5f9f90: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f90u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F90 raw=0x06060606");
    // 0x5f9f94: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f94u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F94 raw=0x06060606");
    // 0x5f9f98: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f98u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F98 raw=0x06060606");
    // 0x5f9f9c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9f9cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5F9F9C raw=0x06060606");
    // 0x5f9fa0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fa0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FA0 raw=0x07070707");
    // 0x5f9fa4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fa4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FA4 raw=0x07070707");
    // 0x5f9fa8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fa8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FA8 raw=0x07070707");
    // 0x5f9fac: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9facu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FAC raw=0x07070707");
    // 0x5f9fb0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fb0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FB0 raw=0x07070707");
    // 0x5f9fb4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fb4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FB4 raw=0x07070707");
    // 0x5f9fb8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fb8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FB8 raw=0x07070707");
    // 0x5f9fbc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fbcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FBC raw=0x07070707");
    // 0x5f9fc0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fc0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FC0 raw=0x07070707");
    // 0x5f9fc4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fc4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FC4 raw=0x07070707");
    // 0x5f9fc8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fc8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FC8 raw=0x07070707");
label_5f9fcc:
    // 0x5f9fcc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fccu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FCC raw=0x07070707");
    // 0x5f9fd0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fd0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FD0 raw=0x07070707");
    // 0x5f9fd4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fd4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FD4 raw=0x07070707");
    // 0x5f9fd8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fd8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FD8 raw=0x07070707");
    // 0x5f9fdc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5f9fdcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5F9FDC raw=0x07070707");
    // 0x5f9fe0: 0x8080808  j           func_202020
    ctx->pc = 0x5F9FE0u;
    ctx->pc = 0x5F9FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5F9FE0u;
    // 0x5f9fe4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5F9FE0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9FE8u;
    // 0x5f9fe8: 0x8080808  j           func_202020
    ctx->pc = 0x5F9FE8u;
    ctx->pc = 0x5F9FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5F9FE8u;
    // 0x5f9fec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5F9FE8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9FF0u;
    // 0x5f9ff0: 0x8080808  j           func_202020
    ctx->pc = 0x5F9FF0u;
    ctx->pc = 0x5F9FF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5F9FF0u;
    // 0x5f9ff4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5F9FF0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5F9FF8u;
    // 0x5f9ff8: 0x8080808  j           func_202020
label_5f9ffc:
    if (ctx->pc == 0x5F9FFCu) {
        ctx->pc = 0x5F9FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5F9FF8u;
        // 0x5f9ffc: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5FA000u;
        goto label_fallthrough_0x5f9ff8;
    }
    ctx->pc = 0x5F9FF8u;
    ctx->pc = 0x5F9FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5F9FF8u;
    // 0x5f9ffc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5F9FF8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x5f9ff8:
    ctx->pc = 0x5FA000u;
    // 0x5fa000: 0x8080808  j           func_202020
    ctx->pc = 0x5FA000u;
    ctx->pc = 0x5FA004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA000u;
    // 0x5fa004: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA000u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA008u;
    // 0x5fa008: 0x8080808  j           func_202020
    ctx->pc = 0x5FA008u;
    ctx->pc = 0x5FA00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA008u;
    // 0x5fa00c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA008u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA010u;
    // 0x5fa010: 0x8080808  j           func_202020
    ctx->pc = 0x5FA010u;
    ctx->pc = 0x5FA014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA010u;
    // 0x5fa014: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA010u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA018u;
    // 0x5fa018: 0x8080808  j           func_202020
    ctx->pc = 0x5FA018u;
    ctx->pc = 0x5FA01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA018u;
    // 0x5fa01c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA018u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA020u;
    // 0x5fa020: 0x8080808  j           func_202020
    ctx->pc = 0x5FA020u;
    ctx->pc = 0x5FA024u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA020u;
    // 0x5fa024: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA020u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA028u;
    // 0x5fa028: 0x8080808  j           func_202020
    ctx->pc = 0x5FA028u;
    ctx->pc = 0x5FA02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA028u;
    // 0x5fa02c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA028u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA030u;
    // 0x5fa030: 0x8080808  j           func_202020
    ctx->pc = 0x5FA030u;
    ctx->pc = 0x5FA034u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA030u;
    // 0x5fa034: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA030u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA038u;
    // 0x5fa038: 0x8080808  j           func_202020
    ctx->pc = 0x5FA038u;
    ctx->pc = 0x5FA03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA038u;
    // 0x5fa03c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA038u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA040u;
    // 0x5fa040: 0x8080808  j           func_202020
    ctx->pc = 0x5FA040u;
    ctx->pc = 0x5FA044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA040u;
    // 0x5fa044: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA040u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA048u;
    // 0x5fa048: 0x8080808  j           func_202020
    ctx->pc = 0x5FA048u;
    ctx->pc = 0x5FA04Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA048u;
    // 0x5fa04c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA048u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA050u;
    // 0x5fa050: 0x8080808  j           func_202020
    ctx->pc = 0x5FA050u;
    ctx->pc = 0x5FA054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA050u;
    // 0x5fa054: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA050u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA058u;
    // 0x5fa058: 0x8080808  j           func_202020
    ctx->pc = 0x5FA058u;
    ctx->pc = 0x5FA05Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA058u;
    // 0x5fa05c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA058u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA060u;
    // 0x5fa060: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa060u;
    
    // 0x5fa064: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa064u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
    // 0x5fa068: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa068u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5FA068 raw=0x04040404");
    // 0x5fa06c: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa06cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5FA06C raw=0x04040404");
    // 0x5fa070: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa070u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA070 raw=0x05050505");
    // 0x5fa074: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa074u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA074 raw=0x05050505");
    // 0x5fa078: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa078u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA078 raw=0x05050505");
    // 0x5fa07c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa07cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA07C raw=0x05050505");
    // 0x5fa080: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa080u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA080 raw=0x06060606");
    // 0x5fa084: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa084u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA084 raw=0x06060606");
    // 0x5fa088: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa088u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA088 raw=0x06060606");
    // 0x5fa08c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa08cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA08C raw=0x06060606");
    // 0x5fa090: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa090u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA090 raw=0x06060606");
    // 0x5fa094: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa094u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA094 raw=0x06060606");
    // 0x5fa098: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa098u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA098 raw=0x06060606");
    // 0x5fa09c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa09cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA09C raw=0x06060606");
    // 0x5fa0a0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0a0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0A0 raw=0x07070707");
    // 0x5fa0a4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0a4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0A4 raw=0x07070707");
    // 0x5fa0a8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0a8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0A8 raw=0x07070707");
    // 0x5fa0ac: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0acu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0AC raw=0x07070707");
    // 0x5fa0b0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0b0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0B0 raw=0x07070707");
    // 0x5fa0b4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0b4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0B4 raw=0x07070707");
    // 0x5fa0b8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0b8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0B8 raw=0x07070707");
    // 0x5fa0bc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0bcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0BC raw=0x07070707");
    // 0x5fa0c0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0c0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0C0 raw=0x07070707");
    // 0x5fa0c4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0c4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0C4 raw=0x07070707");
    // 0x5fa0c8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0c8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0C8 raw=0x07070707");
    // 0x5fa0cc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0ccu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0CC raw=0x07070707");
    // 0x5fa0d0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0d0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0D0 raw=0x07070707");
    // 0x5fa0d4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0d4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0D4 raw=0x07070707");
    // 0x5fa0d8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0d8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0D8 raw=0x07070707");
    // 0x5fa0dc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa0dcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA0DC raw=0x07070707");
    // 0x5fa0e0: 0x8080808  j           func_202020
    ctx->pc = 0x5FA0E0u;
    ctx->pc = 0x5FA0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA0E0u;
    // 0x5fa0e4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA0E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA0E8u;
    // 0x5fa0e8: 0x8080808  j           func_202020
    ctx->pc = 0x5FA0E8u;
    ctx->pc = 0x5FA0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA0E8u;
    // 0x5fa0ec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA0E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA0F0u;
    // 0x5fa0f0: 0x8080808  j           func_202020
    ctx->pc = 0x5FA0F0u;
    ctx->pc = 0x5FA0F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA0F0u;
    // 0x5fa0f4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA0F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA0F8u;
    // 0x5fa0f8: 0x8080808  j           func_202020
    ctx->pc = 0x5FA0F8u;
    ctx->pc = 0x5FA0FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA0F8u;
    // 0x5fa0fc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA0F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA100u;
    // 0x5fa100: 0x8080808  j           func_202020
    ctx->pc = 0x5FA100u;
    ctx->pc = 0x5FA104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA100u;
    // 0x5fa104: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA100u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA108u;
    // 0x5fa108: 0x8080808  j           func_202020
    ctx->pc = 0x5FA108u;
    ctx->pc = 0x5FA10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA108u;
    // 0x5fa10c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA108u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA110u;
    // 0x5fa110: 0x8080808  j           func_202020
    ctx->pc = 0x5FA110u;
    ctx->pc = 0x5FA114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA110u;
    // 0x5fa114: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA110u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA118u;
    // 0x5fa118: 0x8080808  j           func_202020
    ctx->pc = 0x5FA118u;
    ctx->pc = 0x5FA11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA118u;
    // 0x5fa11c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA118u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA120u;
    // 0x5fa120: 0x8080808  j           func_202020
    ctx->pc = 0x5FA120u;
    ctx->pc = 0x5FA124u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA120u;
    // 0x5fa124: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA120u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA128u;
    // 0x5fa128: 0x8080808  j           func_202020
    ctx->pc = 0x5FA128u;
    ctx->pc = 0x5FA12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA128u;
    // 0x5fa12c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA128u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA130u;
    // 0x5fa130: 0x8080808  j           func_202020
    ctx->pc = 0x5FA130u;
    ctx->pc = 0x5FA134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA130u;
    // 0x5fa134: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA130u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA138u;
    // 0x5fa138: 0x8080808  j           func_202020
    ctx->pc = 0x5FA138u;
    ctx->pc = 0x5FA13Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA138u;
    // 0x5fa13c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA138u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA140u;
    // 0x5fa140: 0x8080808  j           func_202020
    ctx->pc = 0x5FA140u;
    ctx->pc = 0x5FA144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA140u;
    // 0x5fa144: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA140u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA148u;
    // 0x5fa148: 0x8080808  j           func_202020
    ctx->pc = 0x5FA148u;
    ctx->pc = 0x5FA14Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA148u;
    // 0x5fa14c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA148u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA150u;
    // 0x5fa150: 0x8080808  j           func_202020
    ctx->pc = 0x5FA150u;
    ctx->pc = 0x5FA154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA150u;
    // 0x5fa154: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA150u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA158u;
    // 0x5fa158: 0x8080808  j           func_202020
    ctx->pc = 0x5FA158u;
    ctx->pc = 0x5FA15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA158u;
    // 0x5fa15c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA158u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA160u;
    // 0x5fa160: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa160u;
    
    // 0x5fa164: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa164u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
    // 0x5fa168: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa168u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5FA168 raw=0x04040404");
    // 0x5fa16c: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa16cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5FA16C raw=0x04040404");
    // 0x5fa170: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa170u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA170 raw=0x05050505");
    // 0x5fa174: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa174u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA174 raw=0x05050505");
    // 0x5fa178: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa178u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA178 raw=0x05050505");
    // 0x5fa17c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa17cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA17C raw=0x05050505");
    // 0x5fa180: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa180u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA180 raw=0x06060606");
    // 0x5fa184: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa184u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA184 raw=0x06060606");
    // 0x5fa188: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa188u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA188 raw=0x06060606");
    // 0x5fa18c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa18cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA18C raw=0x06060606");
    // 0x5fa190: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa190u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA190 raw=0x06060606");
    // 0x5fa194: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa194u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA194 raw=0x06060606");
    // 0x5fa198: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa198u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA198 raw=0x06060606");
    // 0x5fa19c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa19cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA19C raw=0x06060606");
    // 0x5fa1a0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1a0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1A0 raw=0x07070707");
    // 0x5fa1a4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1a4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1A4 raw=0x07070707");
    // 0x5fa1a8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1a8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1A8 raw=0x07070707");
    // 0x5fa1ac: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1acu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1AC raw=0x07070707");
    // 0x5fa1b0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1b0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1B0 raw=0x07070707");
    // 0x5fa1b4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1b4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1B4 raw=0x07070707");
    // 0x5fa1b8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1b8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1B8 raw=0x07070707");
    // 0x5fa1bc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1bcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1BC raw=0x07070707");
    // 0x5fa1c0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1c0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1C0 raw=0x07070707");
    // 0x5fa1c4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1c4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1C4 raw=0x07070707");
    // 0x5fa1c8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1c8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1C8 raw=0x07070707");
    // 0x5fa1cc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1ccu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1CC raw=0x07070707");
    // 0x5fa1d0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1d0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1D0 raw=0x07070707");
    // 0x5fa1d4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1d4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1D4 raw=0x07070707");
    // 0x5fa1d8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1d8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1D8 raw=0x07070707");
    // 0x5fa1dc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa1dcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA1DC raw=0x07070707");
    // 0x5fa1e0: 0x8080808  j           func_202020
    ctx->pc = 0x5FA1E0u;
    ctx->pc = 0x5FA1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA1E0u;
    // 0x5fa1e4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA1E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA1E8u;
    // 0x5fa1e8: 0x8080808  j           func_202020
    ctx->pc = 0x5FA1E8u;
    ctx->pc = 0x5FA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA1E8u;
    // 0x5fa1ec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA1E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA1F0u;
    // 0x5fa1f0: 0x8080808  j           func_202020
    ctx->pc = 0x5FA1F0u;
    ctx->pc = 0x5FA1F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA1F0u;
    // 0x5fa1f4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA1F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA1F8u;
    // 0x5fa1f8: 0x8080808  j           func_202020
    ctx->pc = 0x5FA1F8u;
    ctx->pc = 0x5FA1FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA1F8u;
    // 0x5fa1fc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA1F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA200u;
    // 0x5fa200: 0x8080808  j           func_202020
    ctx->pc = 0x5FA200u;
    ctx->pc = 0x5FA204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA200u;
    // 0x5fa204: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA200u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA208u;
    // 0x5fa208: 0x8080808  j           func_202020
    ctx->pc = 0x5FA208u;
    ctx->pc = 0x5FA20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA208u;
    // 0x5fa20c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA208u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA210u;
    // 0x5fa210: 0x8080808  j           func_202020
    ctx->pc = 0x5FA210u;
    ctx->pc = 0x5FA214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA210u;
    // 0x5fa214: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA210u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA218u;
    // 0x5fa218: 0x8080808  j           func_202020
    ctx->pc = 0x5FA218u;
    ctx->pc = 0x5FA21Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA218u;
    // 0x5fa21c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA218u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA220u;
    // 0x5fa220: 0x8080808  j           func_202020
    ctx->pc = 0x5FA220u;
    ctx->pc = 0x5FA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA220u;
    // 0x5fa224: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA220u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA228u;
    // 0x5fa228: 0x8080808  j           func_202020
    ctx->pc = 0x5FA228u;
    ctx->pc = 0x5FA22Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA228u;
    // 0x5fa22c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA228u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA230u;
    // 0x5fa230: 0x8080808  j           func_202020
    ctx->pc = 0x5FA230u;
    ctx->pc = 0x5FA234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA230u;
    // 0x5fa234: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA230u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA238u;
    // 0x5fa238: 0x8080808  j           func_202020
    ctx->pc = 0x5FA238u;
    ctx->pc = 0x5FA23Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA238u;
    // 0x5fa23c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA238u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA240u;
    // 0x5fa240: 0x8080808  j           func_202020
    ctx->pc = 0x5FA240u;
    ctx->pc = 0x5FA244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA240u;
    // 0x5fa244: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA240u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA248u;
    // 0x5fa248: 0x8080808  j           func_202020
    ctx->pc = 0x5FA248u;
    ctx->pc = 0x5FA24Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA248u;
    // 0x5fa24c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA248u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA250u;
    // 0x5fa250: 0x8080808  j           func_202020
    ctx->pc = 0x5FA250u;
    ctx->pc = 0x5FA254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA250u;
    // 0x5fa254: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA250u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA258u;
    // 0x5fa258: 0x8080808  j           func_202020
    ctx->pc = 0x5FA258u;
    ctx->pc = 0x5FA25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA258u;
    // 0x5fa25c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA258u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA260u;
    // 0x5fa260: 0x2020100  .word       0x02020100                   # sll         $zero, $v0, 4 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa260u;
    
    // 0x5fa264: 0x3030303  .word       0x03030303                   # sra         $zero, $v1, 12 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa264u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 3), 12));
    // 0x5fa268: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa268u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5FA268 raw=0x04040404");
    // 0x5fa26c: 0x4040404  .word       0x04040404                   # INVALID     $zero, $a0, 0x404 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa26cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x4 at 0x5FA26C raw=0x04040404");
    // 0x5fa270: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa270u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA270 raw=0x05050505");
    // 0x5fa274: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa274u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA274 raw=0x05050505");
    // 0x5fa278: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa278u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA278 raw=0x05050505");
    // 0x5fa27c: 0x5050505  .word       0x05050505                   # INVALID     $t0, $a1, 0x505 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa27cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x5 at 0x5FA27C raw=0x05050505");
    // 0x5fa280: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa280u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA280 raw=0x06060606");
    // 0x5fa284: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa284u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA284 raw=0x06060606");
    // 0x5fa288: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa288u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA288 raw=0x06060606");
    // 0x5fa28c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa28cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA28C raw=0x06060606");
    // 0x5fa290: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa290u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA290 raw=0x06060606");
    // 0x5fa294: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa294u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA294 raw=0x06060606");
    // 0x5fa298: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa298u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA298 raw=0x06060606");
    // 0x5fa29c: 0x6060606  .word       0x06060606                   # INVALID     $s0, $a2, 0x606 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa29cu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x6 at 0x5FA29C raw=0x06060606");
    // 0x5fa2a0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2a0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2A0 raw=0x07070707");
    // 0x5fa2a4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2a4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2A4 raw=0x07070707");
    // 0x5fa2a8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2a8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2A8 raw=0x07070707");
    // 0x5fa2ac: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2acu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2AC raw=0x07070707");
    // 0x5fa2b0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2b0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2B0 raw=0x07070707");
    // 0x5fa2b4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2b4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2B4 raw=0x07070707");
    // 0x5fa2b8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2b8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2B8 raw=0x07070707");
    // 0x5fa2bc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2bcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2BC raw=0x07070707");
    // 0x5fa2c0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2c0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2C0 raw=0x07070707");
    // 0x5fa2c4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2c4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2C4 raw=0x07070707");
    // 0x5fa2c8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2c8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2C8 raw=0x07070707");
    // 0x5fa2cc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2ccu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2CC raw=0x07070707");
    // 0x5fa2d0: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2d0u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2D0 raw=0x07070707");
    // 0x5fa2d4: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2d4u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2D4 raw=0x07070707");
    // 0x5fa2d8: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2d8u;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2D8 raw=0x07070707");
    // 0x5fa2dc: 0x7070707  .word       0x07070707                   # INVALID     $t8, $a3, 0x707 # 00000000 <InstrIdType: CPU_REGIMM>
    ctx->pc = 0x5fa2dcu;
    throw std::runtime_error("Unhandled REGIMM instruction: 0x7 at 0x5FA2DC raw=0x07070707");
    // 0x5fa2e0: 0x8080808  j           func_202020
    ctx->pc = 0x5FA2E0u;
    ctx->pc = 0x5FA2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA2E0u;
    // 0x5fa2e4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA2E0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA2E8u;
    // 0x5fa2e8: 0x8080808  j           func_202020
    ctx->pc = 0x5FA2E8u;
    ctx->pc = 0x5FA2ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA2E8u;
    // 0x5fa2ec: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA2E8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA2F0u;
    // 0x5fa2f0: 0x8080808  j           func_202020
    ctx->pc = 0x5FA2F0u;
    ctx->pc = 0x5FA2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA2F0u;
    // 0x5fa2f4: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA2F0u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA2F8u;
    // 0x5fa2f8: 0x8080808  j           func_202020
    ctx->pc = 0x5FA2F8u;
    ctx->pc = 0x5FA2FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA2F8u;
    // 0x5fa2fc: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA2F8u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA300u;
    // 0x5fa300: 0x8080808  j           func_202020
    ctx->pc = 0x5FA300u;
    ctx->pc = 0x5FA304u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA300u;
    // 0x5fa304: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA300u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA308u;
    // 0x5fa308: 0x8080808  j           func_202020
    ctx->pc = 0x5FA308u;
    ctx->pc = 0x5FA30Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA308u;
    // 0x5fa30c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA308u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA310u;
    // 0x5fa310: 0x8080808  j           func_202020
    ctx->pc = 0x5FA310u;
    ctx->pc = 0x5FA314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA310u;
    // 0x5fa314: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA310u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA318u;
    // 0x5fa318: 0x8080808  j           func_202020
    ctx->pc = 0x5FA318u;
    ctx->pc = 0x5FA31Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA318u;
    // 0x5fa31c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA318u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA320u;
    // 0x5fa320: 0x8080808  j           func_202020
    ctx->pc = 0x5FA320u;
    ctx->pc = 0x5FA324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA320u;
    // 0x5fa324: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA320u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA328u;
    // 0x5fa328: 0x8080808  j           func_202020
    ctx->pc = 0x5FA328u;
    ctx->pc = 0x5FA32Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA328u;
    // 0x5fa32c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA328u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA330u;
    // 0x5fa330: 0x8080808  j           func_202020
    ctx->pc = 0x5FA330u;
    ctx->pc = 0x5FA334u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA330u;
    // 0x5fa334: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA330u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA338u;
    // 0x5fa338: 0x8080808  j           func_202020
    ctx->pc = 0x5FA338u;
    ctx->pc = 0x5FA33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA338u;
    // 0x5fa33c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA338u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA340u;
    // 0x5fa340: 0x8080808  j           func_202020
    ctx->pc = 0x5FA340u;
    ctx->pc = 0x5FA344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA340u;
    // 0x5fa344: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA340u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA348u;
    // 0x5fa348: 0x8080808  j           func_202020
    ctx->pc = 0x5FA348u;
    ctx->pc = 0x5FA34Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA348u;
    // 0x5fa34c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA348u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA350u;
    // 0x5fa350: 0x8080808  j           func_202020
label_5fa354:
    if (ctx->pc == 0x5FA354u) {
        ctx->pc = 0x5FA354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x5FA350u;
        // 0x5fa354: 0x8080808  j           func_202020 (Delay Slot)
        // J 0x202020 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = 0x5FA358u;
        goto label_fallthrough_0x5fa350;
    }
    ctx->pc = 0x5FA350u;
    ctx->pc = 0x5FA354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA350u;
    // 0x5fa354: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA350u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
label_fallthrough_0x5fa350:
    ctx->pc = 0x5FA358u;
    // 0x5fa358: 0x8080808  j           func_202020
    ctx->pc = 0x5FA358u;
    ctx->pc = 0x5FA35Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x5FA358u;
    // 0x5fa35c: 0x8080808  j           func_202020 (Delay Slot)
    // J 0x202020 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x202020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202020u, 0x5FA358u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA360u;
    // 0x5fa360: 0x0  nop
    ctx->pc = 0x5fa360u;
    // NOP
    // 0x5fa364: 0x0  nop
    ctx->pc = 0x5fa364u;
    // NOP
    // 0x5fa368: 0x0  nop
    ctx->pc = 0x5fa368u;
    // NOP
    // 0x5fa36c: 0x0  nop
    ctx->pc = 0x5fa36cu;
    // NOP
    // 0x5fa370: 0x0  nop
    ctx->pc = 0x5fa370u;
    // NOP
    // 0x5fa374: 0x0  nop
    ctx->pc = 0x5fa374u;
    // NOP
    // 0x5fa378: 0x306d6f72  andi        $t5, $v1, 0x6F72
    ctx->pc = 0x5fa378u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)28530);
    // 0x5fa37c: 0x4d4f523a  .word       0x4D4F523A                   # INVALID     $t2, $t7, 0x523A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa37cu;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5FA37C raw=0x4D4F523A");
    // 0x5fa380: 0x524556  .word       0x00524556                   # dsrlv       $t0, $s2, $v0 # 00000540 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa380u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 18) >> (GPR_U32(ctx, 2) & 0x3F));
    // 0x5fa384: 0x0  nop
    ctx->pc = 0x5fa384u;
    // NOP
    // 0x5fa388: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5fa388u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x5FA388 raw=0x47656373");
    // 0x5fa38c: 0x66654473  daddiu      $a1, $s3, 0x4473
    ctx->pc = 0x5fa38cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)17523);
    // 0x5fa390: 0x70736944  .word       0x70736944                   # plzcw       $t5, $v1 # 00130140 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5fa390u;
    { uint64_t v = GPR_U64(ctx, 3); uint32_t lo = (uint32_t)(v & 0xFFFFFFFFu); uint32_t hi = (uint32_t)(v >> 32); uint64_t out = ((uint64_t)ps2_plzcw32(hi) << 32) | (uint64_t)ps2_plzcw32(lo); SET_GPR_U64(ctx, 13, out); }
    // 0x5fa394: 0x3a766e45  xori        $s6, $s3, 0x6E45
    ctx->pc = 0x5fa394u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28229);
    // 0x5fa398: 0x20746f4e  addi        $s4, $v1, 0x6F4E
    ctx->pc = 0x5fa398u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28494, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5fa39c: 0x70707573  .word       0x70707573                   # INVALID     $v1, $s0, 0x7573 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5fa39cu;
    throw std::runtime_error("Unhandled MMI instruction: function 0x33 at 0x5FA39C raw=0x70707573");
    // 0x5fa3a0: 0x2074726f  addi        $s4, $v1, 0x726F
    ctx->pc = 0x5fa3a0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)29295, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 20, (int32_t)tmp); }
    // 0x5fa3a4: 0x70736964  .word       0x70736964                   # INVALID     $v1, $s3, 0x6964 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5fa3a4u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5FA3A4 raw=0x70736964");
    // 0x5fa3a8: 0x6d79616c  ldr         $t9, 0x616C($t3)
    ctx->pc = 0x5fa3a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 24940); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x5fa3ac: 0x2065646f  addi        $a1, $v1, 0x646F
    ctx->pc = 0x5fa3acu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)25711, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
    // 0x5fa3b0: 0x20726f66  addi        $s2, $v1, 0x6F66
    ctx->pc = 0x5fa3b0u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28518, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 18, (int32_t)tmp); }
    // 0x5fa3b4: 0x78257830  lq          $a1, 0x7830($at)
    ctx->pc = 0x5fa3b4u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 1), 30768)));
    // 0x5fa3b8: 0xa2121  .word       0x000A2121                   # addu        $a0, $zero, $t2 # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), GPR_U32(ctx, 10)));
    // 0x5fa3bc: 0x0  nop
    ctx->pc = 0x5fa3bcu;
    // NOP
    // 0x5fa3c0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5fa3c0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x5FA3C0 raw=0x47656373");
    // 0x5fa3c4: 0x74755073  .word       0x74755073                   # INVALID     $v1, $s5, 0x5073 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa3c4u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5FA3C4 raw=0x74755073");
    // 0x5fa3c8: 0x77617244  .word       0x77617244                   # INVALID     $k1, $at, 0x7244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa3c8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5FA3C8 raw=0x77617244");
    // 0x5fa3cc: 0x3a766e45  xori        $s6, $s3, 0x6E45
    ctx->pc = 0x5fa3ccu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 19) ^ (uint64_t)(uint16_t)28229);
    // 0x5fa3d0: 0x414d4420  .word       0x414D4420                   # INVALID     $t2, $t5, 0x4420 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5fa3d0u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0xA at 0x5FA3D0 raw=0x414D4420");
    // 0x5fa3d4: 0x2e684320  sltiu       $t0, $s3, 0x4320
    ctx->pc = 0x5fa3d4u;
    SET_GPR_U64(ctx, 8, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)17184) ? 1 : 0);
    // 0x5fa3d8: 0x6f642032  ldr         $a0, 0x2032($k1)
    ctx->pc = 0x5fa3d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8242); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x5fa3dc: 0x6e207365  ldr         $zero, 0x7365($s1)
    ctx->pc = 0x5fa3dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 29541); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x5fa3e0: 0x7420746f  .word       0x7420746F                   # INVALID     $at, $zero, 0x746F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa3e0u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5FA3E0 raw=0x7420746F");
    // 0x5fa3e4: 0x696d7265  ldl         $t5, 0x7265($t3)
    ctx->pc = 0x5fa3e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem << shift)); }
    // 0x5fa3e8: 0x6574616e  daddiu      $s4, $t3, 0x616E
    ctx->pc = 0x5fa3e8u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 11) + (int64_t)(int32_t)24942);
    // 0x5fa3ec: 0xa0d  break       0, 40
    ctx->pc = 0x5fa3ecu;
    runtime->handleBreak(rdram, ctx);
    // 0x5fa3f0: 0x47656373  .word       0x47656373                   # INVALID     $k1, $a1, 0x6373 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5fa3f0u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1B, function 0x33 at 0x5FA3F0 raw=0x47656373");
    // 0x5fa3f4: 0x6e795373  ldr         $t9, 0x5373($s3)
    ctx->pc = 0x5fa3f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 21363); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 25, (GPR_U64(ctx, 25) & keepMask) | (mem >> shift)); }
    // 0x5fa3f8: 0x74615063  .word       0x74615063                   # INVALID     $v1, $at, 0x5063 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa3f8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5FA3F8 raw=0x74615063");
    // 0x5fa3fc: 0x44203a68  .word       0x44203A68                   # dmfc1       $zero, $f7 # 00000268 <InstrIdType: R5900_COP1>
    ctx->pc = 0x5fa3fcu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x28 at 0x5FA3FC raw=0x44203A68");
    // 0x5fa400: 0x4320414d  .word       0x4320414D                   # INVALID     $t9, $zero, 0x414D # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5fa400u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x19 at 0x5FA400 raw=0x4320414D");
    // 0x5fa404: 0x20312e68  addi        $s1, $at, 0x2E68
    ctx->pc = 0x5fa404u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)11880, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 17, (int32_t)tmp); }
    // 0x5fa408: 0x73656f64  .word       0x73656F64                   # INVALID     $k1, $a1, 0x6F64 # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5fa408u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x24 at 0x5FA408 raw=0x73656F64");
    // 0x5fa40c: 0x746f6e20  .word       0x746F6E20                   # INVALID     $v1, $t7, 0x6E20 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa40cu;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x5FA40C raw=0x746F6E20");
    // 0x5fa410: 0x72657420  .word       0x72657420                   # madd1       $t6, $s3, $a1 # 00000400 <InstrIdType: R5900_MMI>
    ctx->pc = 0x5fa410u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi1, ctx->lo1); int64_t prod = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 5); int64_t result = acc + prod; ctx->lo1 = Ps2SignExt32ToU64((uint32_t)result); ctx->hi1 = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 14, (int32_t)result); }
    // 0x5fa414: 0x616e696d  daddi       $t6, $t3, 0x696D
    ctx->pc = 0x5fa414u;
    { int64_t src = (int64_t)GPR_S64(ctx, 11); int64_t imm = (int64_t)(int32_t)26989; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 14, res); }
    // 0x5fa418: 0xa0d6574  j           func_83595D0
    ctx->pc = 0x5FA418u;
    ctx->pc = 0x83595D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x83595D0u, 0x5FA418u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x5FA420u;
    // 0x5fa420: 0x31443c09  andi        $a0, $t2, 0x3C09
    ctx->pc = 0x5fa420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)15369);
    // 0x5fa424: 0x4348435f  .word       0x4348435F                   # INVALID     $k0, $t0, 0x435F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5fa424u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5FA424 raw=0x4348435F");
    // 0x5fa428: 0x30253d52  andi        $a1, $at, 0x3D52
    ctx->pc = 0x5fa428u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15698);
    // 0x5fa42c: 0x3a7838  .word       0x003A7838                   # dsll        $t7, $k0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa42cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 26) << 0);
    // 0x5fa430: 0x545f3144  bnel        $v0, $ra, . + 4 + (0x3144 << 2)
    ctx->pc = 0x5FA430u;
    {
        const bool branch_taken_0x5fa430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x5fa430) {
            ctx->pc = 0x5FA434u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5FA430u;
            // 0x5fa434: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x606944u;
            return;
        }
    }
    ctx->pc = 0x5FA438u;
    // 0x5fa438: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x5fa438u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
    // 0x5fa43c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x5fa43cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
    // 0x5fa440: 0x4d5f3144  .word       0x4D5F3144                   # INVALID     $t2, $ra, 0x3144 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa440u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5FA440 raw=0x4D5F3144");
    // 0x5fa444: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa444u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
    // 0x5fa448: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x5fa448u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
    // 0x5fa44c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x5fa44cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
    // 0x5fa450: 0x515f3144  beql        $t2, $ra, . + 4 + (0x3144 << 2)
    ctx->pc = 0x5FA450u;
    {
        const bool branch_taken_0x5fa450 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 31));
        if (branch_taken_0x5fa450) {
            ctx->pc = 0x5FA454u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5FA450u;
            // 0x5fa454: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
            SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
            ctx->in_delay_slot = false;
            ctx->pc = 0x606964u;
            return;
        }
    }
    ctx->pc = 0x5FA458u;
    // 0x5fa458: 0x3e783830  .word       0x3E783830                   # lui         $t8, 0x3830 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa458u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)14384 << 16));
    // 0x5fa45c: 0xa0d  break       0, 40
    ctx->pc = 0x5fa45cu;
    runtime->handleBreak(rdram, ctx);
    // 0x5fa460: 0x32443c09  andi        $a0, $s2, 0x3C09
    ctx->pc = 0x5fa460u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)15369);
    // 0x5fa464: 0x4348435f  .word       0x4348435F                   # INVALID     $k0, $t0, 0x435F # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x5fa464u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x1A at 0x5FA464 raw=0x4348435F");
    // 0x5fa468: 0x30253d52  andi        $a1, $at, 0x3D52
    ctx->pc = 0x5fa468u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)15698);
    // 0x5fa46c: 0x3a7838  .word       0x003A7838                   # dsll        $t7, $k0, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x5fa46cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 26) << 0);
    // 0x5fa470: 0x545f3244  bnel        $v0, $ra, . + 4 + (0x3244 << 2)
    ctx->pc = 0x5FA470u;
    {
        const bool branch_taken_0x5fa470 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 31));
        if (branch_taken_0x5fa470) {
            ctx->pc = 0x5FA474u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5FA470u;
            // 0x5fa474: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x606D84u;
            return;
        }
    }
    ctx->pc = 0x5FA478u;
    // 0x5fa478: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x5fa478u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
    // 0x5fa47c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x5fa47cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
    // 0x5fa480: 0x4d5f3244  .word       0x4D5F3244                   # INVALID     $t2, $ra, 0x3244 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa480u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x5FA480 raw=0x4D5F3244");
    // 0x5fa484: 0x3d524441  .word       0x3D524441                   # lui         $s2, 0x4441 # 01400000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa484u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)17473 << 16));
    // 0x5fa488: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x5fa488u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
    // 0x5fa48c: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x5fa48cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
    // 0x5fa490: 0x515f3244  beql        $t2, $ra, . + 4 + (0x3244 << 2)
    ctx->pc = 0x5FA490u;
    {
        const bool branch_taken_0x5fa490 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 31));
        if (branch_taken_0x5fa490) {
            ctx->pc = 0x5FA494u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5FA490u;
            // 0x5fa494: 0x253d4357  addiu       $sp, $t1, 0x4357 (Delay Slot)
            SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 9), 17239));
            ctx->in_delay_slot = false;
            ctx->pc = 0x606DA4u;
            return;
        }
    }
    ctx->pc = 0x5FA498u;
    // 0x5fa498: 0x3e783830  .word       0x3E783830                   # lui         $t8, 0x3830 # 02600000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x5fa498u;
    SET_GPR_S32(ctx, 24, (int32_t)((uint32_t)14384 << 16));
    // 0x5fa49c: 0xa0d  break       0, 40
    ctx->pc = 0x5fa49cu;
    runtime->handleBreak(rdram, ctx);
    // 0x5fa4a0: 0x49563c09  .word       0x49563C09                   # INVALID     $t2, $s6, 0x3C09 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x5fa4a0u;
    throw std::runtime_error("Unhandled COP2 format: 0xA at 0x5FA4A0 raw=0x49563C09");
    // 0x5fa4a4: 0x535f3146  beql        $k0, $ra, . + 4 + (0x3146 << 2)
    ctx->pc = 0x5FA4A4u;
    {
        const bool branch_taken_0x5fa4a4 = (GPR_U64(ctx, 26) == GPR_U64(ctx, 31));
        if (branch_taken_0x5fa4a4) {
            ctx->pc = 0x5FA4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x5FA4A4u;
            // 0x5fa4a8: 0x3d544154  .word       0x3D544154                   # lui         $s4, 0x4154 # 01400000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)16724 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x6069C0u;
            return;
        }
    }
    ctx->pc = 0x5FA4ACu;
    // 0x5fa4ac: 0x78383025  lq          $t8, 0x3025($at)
    ctx->pc = 0x5fa4acu;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 1), 12325)));
    // 0x5fa4b0: 0x3a  dsrl        $zero, $zero, 0
    ctx->pc = 0x5fa4b0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> 0);
    // 0x5fa4b4: 0x0  nop
    ctx->pc = 0x5fa4b4u;
    // NOP
    ctx->pc = 0x5fa4b8u;
}
