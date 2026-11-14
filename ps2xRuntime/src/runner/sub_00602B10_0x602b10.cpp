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

// Function: sub_00602B10
// Address: 0x602b10 - 0x602d30
void sub_00602B10_0x602b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00602B10_0x602b10");
#endif

    switch (ctx->pc) {
        case 0x602bc4u: goto label_602bc4;
        case 0x602c10u: goto label_602c10;
        case 0x602c14u: goto label_602c14;
        default: break;
    }

    ctx->pc = 0x602b10u;

    // 0x602b10: 0x8c852cad  lw          $a1, 0x2CAD($a0)
    ctx->pc = 0x602b10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 11437)));
    // 0x602b14: 0x479a64a1  .word       0x479A64A1                   # INVALID     $gp, $k0, 0x64A1 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602b14u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1C, function 0x21 at 0x602B14 raw=0x479A64A1");
    // 0x602b18: 0xbb5e45b4  swr         $fp, 0x45B4($k0)
    ctx->pc = 0x602b18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 17844); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 30); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x602b1c: 0x27cb576d  addiu       $t3, $fp, 0x576D
    ctx->pc = 0x602b1cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 30), 22381));
    // 0x602b20: 0xd977492f  lqc2        $vf23, 0x492F($t3)
    ctx->pc = 0x602b20u;
    ctx->vu0_vf[23] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 11), 18735)));
    // 0x602b24: 0x443388ac  .word       0x443388AC                   # dmfc1       $s3, $f17 # 000000AC <InstrIdType: R5900_COP1>
    ctx->pc = 0x602b24u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x2C at 0x602B24 raw=0x443388AC");
    // 0x602b28: 0x76bc74b8  .word       0x76BC74B8                   # INVALID     $s5, $gp, 0x74B8 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b28u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x602B28 raw=0x76BC74B8");
    // 0x602b2c: 0x21671ed6  addi        $a3, $t3, 0x1ED6
    ctx->pc = 0x602b2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 11), (int32_t)7894, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x602b30: 0x48745dc3  .word       0x48745DC3                   # INVALID     $v1, $s4, 0x5DC3 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x602b30u;
    throw std::runtime_error("Unhandled COP2 format: 0x3 at 0x602B30 raw=0x48745DC3");
    // 0x602b34: 0x4d52084d  .word       0x4D52084D                   # INVALID     $t2, $s2, 0x84D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b34u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602B34 raw=0x4D52084D");
    // 0x602b38: 0xa5aeb8a2  sh          $t6, -0x475E($t5)
    ctx->pc = 0x602b38u;
    WRITE16(ADD32(GPR_U32(ctx, 13), 4294949026), (uint16_t)GPR_U32(ctx, 14));
    // 0x602b3c: 0x3adb2eef  xori        $k1, $s6, 0x2EEF
    ctx->pc = 0x602b3cu;
    SET_GPR_U64(ctx, 27, GPR_U64(ctx, 22) ^ (uint64_t)(uint16_t)12015);
    // 0x602b40: 0x862c4bc4  lh          $t4, 0x4BC4($s1)
    ctx->pc = 0x602b40u;
    SET_GPR_S32(ctx, 12, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 19396)));
    // 0x602b44: 0x406a14b7  .word       0x406A14B7                   # INVALID     $v1, $t2, 0x14B7 # 00000000 <InstrIdType: R5900_COP0>
    ctx->pc = 0x602b44u;
    throw std::runtime_error("Unhandled COP0 instruction format: 0x3 at 0x602B44 raw=0x406A14B7");
    // 0x602b48: 0x97dc18a2  lhu         $gp, 0x18A2($fp)
    ctx->pc = 0x602b48u;
    SET_GPR_ZE32(ctx, 28, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 6306)));
    // 0x602b4c: 0x982712f6  lwr         $a3, 0x12F6($at)
    ctx->pc = 0x602b4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4854); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x602b50: 0xf28a8b56  scd         $t2, -0x74AA($s4)
    ctx->pc = 0x602b50u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x602B50 raw=0xF28A8B56");
    // 0x602b54: 0x4e258737  .word       0x4E258737                   # INVALID     $s1, $a1, -0x78C9 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b54u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602B54 raw=0x4E258737");
    // 0x602b58: 0x3ecadf84  .word       0x3ECADF84                   # lui         $t2, 0xDF84 # 02C00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b58u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)57220 << 16));
    // 0x602b5c: 0x7b62935d  lq          $v0, -0x6CA3($k1)
    ctx->pc = 0x602b5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 27), 4294939485)));
    // 0x602b60: 0x761c441c  .word       0x761C441C                   # INVALID     $s0, $gp, 0x441C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b60u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x602B60 raw=0x761C441C");
    // 0x602b64: 0x4ac71d76  .word       0x4AC71D76                   # INVALID     $s6, $a3, 0x1D76 # 00000000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x602b64u;
    throw std::runtime_error("Unhandled VU0 Special1 function: 0x36 at 0x602B64 raw=0x4AC71D76");
    // 0x602b68: 0x9ae169bb  lwr         $at, 0x69BB($s7)
    ctx->pc = 0x602b68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 27067); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 1) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 1) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 1, merged64); }
    // 0x602b6c: 0x5de78a24  .word       0x5DE78A24                   # bgtzl       $t7, . + 4 + (-0x75DC << 2) # 00070000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602B6Cu;
    {
        const bool branch_taken_0x602b6c = (GPR_S32(ctx, 15) > 0);
        if (branch_taken_0x602b6c) {
            ctx->pc = 0x602B70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602B6Cu;
            // 0x602b70: 0x59b3e5b6  .word       0x59B3E5B6                   # blezl       $t5, . + 4 + (-0x1A4A << 2) # 00130000 <InstrIdType: CPU_NORMAL> (Delay Slot)
            // Likely branch instruction at 0x602B70 - Handled by branch logic
            ctx->in_delay_slot = false;
            ctx->pc = 0x5E5400u;
            return;
        }
    }
    ctx->pc = 0x602B74u;
    // 0x602b74: 0x47fad217  .word       0x47FAD217                   # INVALID     $ra, $k0, -0x2DE9 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602b74u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1F, function 0x17 at 0x602B74 raw=0x47FAD217");
    // 0x602b78: 0xee9acd89  .word       0xEE9ACD89                   # INVALID     $s4, $k0, -0x3277 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b78u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x602B78 raw=0xEE9ACD89");
    // 0x602b7c: 0xceb921af  pref        0x19, 0x21AF($s5)
    ctx->pc = 0x602b7cu;
    // PREF instruction (ignored)
    // 0x602b80: 0x3eaa3e29  .word       0x3EAA3E29                   # lui         $t2, 0x3E29 # 02A00000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b80u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)15913 << 16));
    // 0x602b84: 0x4da5043d  .word       0x4DA5043D                   # INVALID     $t5, $a1, 0x43D # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b84u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602B84 raw=0x4DA5043D");
    // 0x602b88: 0xb4eed8ae  sdr         $t6, -0x2752($a3)
    ctx->pc = 0x602b88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294957230); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 14); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x602b8c: 0x4b2ce2e2  .word       0x4B2CE2E2                   # vaddi.xw    $vf11, $vf28, $I # 000C0000 <InstrIdType: R5900_COP2_SPECIAL1>
    ctx->pc = 0x602b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[28], _mm_set1_ps(ctx->vu0_i)); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x602b90: 0x37badcd3  ori         $k0, $sp, 0xDCD3
    ctx->pc = 0x602b90u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)56531);
    // 0x602b94: 0x4f95686e  .word       0x4F95686E                   # INVALID     $gp, $s5, 0x686E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602b94u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602B94 raw=0x4F95686E");
    // 0x602b98: 0x917df9b4  lbu         $sp, -0x64C($t3)
    ctx->pc = 0x602b98u;
    SET_GPR_ZE32(ctx, 29, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4294965684)));
    // 0x602b9c: 0x80bd00cc  lb          $sp, 0xCC($a1)
    ctx->pc = 0x602b9cu;
    SET_GPR_S32(ctx, 29, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 204)));
    // 0x602ba0: 0x7b342036  lq          $s4, 0x2036($t9)
    ctx->pc = 0x602ba0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 25), 8246)));
    // 0x602ba4: 0x4fa5070e  .word       0x4FA5070E                   # INVALID     $sp, $a1, 0x70E # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602ba4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602BA4 raw=0x4FA5070E");
    // 0x602ba8: 0xd4c5b598  ldc1        $f5, -0x4A68($a2)
    ctx->pc = 0x602ba8u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x602BA8 raw=0xD4C5B598");
    // 0x602bac: 0xc1c3650d  ll          $v1, 0x650D($t6)
    ctx->pc = 0x602bacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 25869); SET_GPR_S32(ctx, 3, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
    // 0x602bb0: 0xa36818e9  sb          $t0, 0x18E9($k1)
    ctx->pc = 0x602bb0u;
    WRITE8(ADD32(GPR_U32(ctx, 27), 6377), (uint8_t)GPR_U32(ctx, 8));
    // 0x602bb4: 0x4c12c1e1  .word       0x4C12C1E1                   # INVALID     $zero, $s2, -0x3E1F # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602bb4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602BB4 raw=0x4C12C1E1");
    // 0x602bb8: 0x3bb691b5  xori        $s6, $sp, 0x91B5
    ctx->pc = 0x602bb8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 29) ^ (uint64_t)(uint16_t)37301);
    // 0x602bbc: 0xfcaba24  jal         func_F2AE890
    ctx->pc = 0x602BBCu;
    SET_GPR_U32(ctx, 31, 0x602BC4u);
    ctx->pc = 0x602BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x602BBCu;
    // 0x602bc0: 0x4f03da53  .word       0x4F03DA53                   # INVALID     $t8, $v1, -0x25AD # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602BC0 raw=0x4F03DA53");
    ctx->in_delay_slot = false;
    ctx->pc = 0xF2AE890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF2AE890u, 0x602BBCu, 0x602BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x602BC4u;
label_602bc4:
    // 0x602bc4: 0x46447f08  .word       0x46447F08                   # INVALID     $s2, $a0, 0x7F08 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602bc4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x12, function 0x8 at 0x602BC4 raw=0x46447F08");
    // 0x602bc8: 0x2344e584  addi        $a0, $k0, -0x1A7C
    ctx->pc = 0x602bc8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 26), (int32_t)4294960516, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x602bcc: 0x1b2dceda  .word       0x1B2DCEDA                   # blez        $t9, . + 4 + (-0x3126 << 2) # 000D0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602BCCu;
    {
        const bool branch_taken_0x602bcc = (GPR_S32(ctx, 25) <= 0);
        ctx->pc = 0x602BD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x602BCCu;
        // 0x602bd0: 0x205a79bc  addi        $k0, $v0, 0x79BC (Delay Slot)
        { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)31164, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 26, (int32_t)tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x602bcc) {
            ctx->pc = 0x5F6738u;
            return;
        }
    }
    ctx->pc = 0x602BD4u;
    // 0x602bd4: 0x45731bea  .word       0x45731BEA                   # INVALID     $t3, $s3, 0x1BEA # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602bd4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0xB, function 0x2A at 0x602BD4 raw=0x45731BEA");
    // 0x602bd8: 0x8d68a3a8  lw          $t0, -0x5C58($t3)
    ctx->pc = 0x602bd8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 4294943656)));
    // 0x602bdc: 0x34533f7  .word       0x034533F7                   # INVALID     $k0, $a1, 0x33F7 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602bdcu;
    throw std::runtime_error("Unhandled SPECIAL instruction: 0x37 at 0x602BDC raw=0x034533F7");
    // 0x602be0: 0xd6c75799  ldc1        $f7, 0x5799($s6)
    ctx->pc = 0x602be0u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x602BE0 raw=0xD6C75799");
    // 0x602be4: 0x4d14880a  .word       0x4D14880A                   # INVALID     $t0, $s4, -0x77F6 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602be4u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602BE4 raw=0x4D14880A");
    // 0x602be8: 0xe5db5ab5  swc1        $f27, 0x5AB5($t6)
    ctx->pc = 0x602be8u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 23221), bits); }
    // 0x602bec: 0x8fac8b26  lw          $t4, -0x74DA($sp)
    ctx->pc = 0x602becu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4294937382)));
    // 0x602bf0: 0x31beed52  andi        $fp, $t5, 0xED52
    ctx->pc = 0x602bf0u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)60754);
    // 0x602bf4: 0x44edbe26  .word       0x44EDBE26                   # INVALID     $a3, $t5, -0x41DA # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602bf4u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x7, function 0x26 at 0x602BF4 raw=0x44EDBE26");
    // 0x602bf8: 0x1627183  .word       0x01627183                   # sra         $t6, $v0, 6 # 01600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602bf8u;
    SET_GPR_S32(ctx, 14, SRA32(GPR_S32(ctx, 2), 6));
    // 0x602bfc: 0x6ea602e7  ldr         $a2, 0x2E7($s5)
    ctx->pc = 0x602bfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 743); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x602c00: 0xf578249d  sdc1        $f24, 0x249D($t3)
    ctx->pc = 0x602c00u;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x602C00 raw=0xF578249D");
    // 0x602c04: 0x488cd7c8  .word       0x488CD7C8                   # INVALID     $a0, $t4, -0x2838 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x602c04u;
    throw std::runtime_error("Unhandled COP2 format: 0x4 at 0x602C04 raw=0x488CD7C8");
    // 0x602c08: 0x51bcb78a  beql        $t5, $gp, . + 4 + (-0x4876 << 2)
    ctx->pc = 0x602C08u;
    {
        const bool branch_taken_0x602c08 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 28));
        if (branch_taken_0x602c08) {
            ctx->pc = 0x602C0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602C08u;
            // 0x602c0c: 0xd30e40ac  lld         $t6, 0x40AC($t8) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x34 at 0x602C0C raw=0xD30E40AC");
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F0A34u;
            return;
        }
    }
    ctx->pc = 0x602C10u;
label_602c10:
    // 0x602c10: 0x31103d6c  andi        $s0, $t0, 0x3D6C
    ctx->pc = 0x602c10u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)15724);
label_602c14:
    // 0x602c14: 0x4f16684a  .word       0x4F16684A                   # INVALID     $t8, $s6, 0x684A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602c14u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x602C14 raw=0x4F16684A");
    // 0x602c18: 0x663dbc98  daddiu      $sp, $s1, -0x4368
    ctx->pc = 0x602c18u;
    SET_GPR_S64(ctx, 29, (int64_t)GPR_S64(ctx, 17) + (int64_t)(int32_t)4294950040);
    // 0x602c1c: 0xfa785852  sqc2        $vf24, 0x5852($s3)
    ctx->pc = 0x602c1cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 22610), _mm_castps_si128(ctx->vu0_vf[24]));
    // 0x602c20: 0x5f84d81f  .word       0x5F84D81F                   # bgtzl       $gp, . + 4 + (-0x27E1 << 2) # 00040000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602C20u;
    {
        const bool branch_taken_0x602c20 = (GPR_S32(ctx, 28) > 0);
        if (branch_taken_0x602c20) {
            ctx->pc = 0x602C24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602C20u;
            // 0x602c24: 0x4b3902ef  vmini.xw    $vf11, $vf0, $vf25 (Delay Slot)
            { __m128 res = _mm_min_ps(ctx->vu0_vf[0], ctx->vu0_vf[25]); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x5F8CA0u;
            return;
        }
    }
    ctx->pc = 0x602C28u;
    // 0x602c28: 0x9d7c3d92  lwu         $gp, 0x3D92($t3)
    ctx->pc = 0x602c28u;
    SET_GPR_ZE32(ctx, 28, READ32(ADD32(GPR_U32(ctx, 11), 15762)));
    // 0x602c2c: 0x2329b24e  addi        $t1, $t9, -0x4DB2
    ctx->pc = 0x602c2cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 25), (int32_t)4294947406, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 9, (int32_t)tmp); }
    // 0x602c30: 0x4ad7a4  .word       0x004AD7A4                   # and         $k0, $v0, $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c30u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x602c34: 0x4ad770  tge         $v0, $t2, 861
    ctx->pc = 0x602c34u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
    // 0x602c38: 0x4ad73c  .word       0x004AD73C                   # dsll32      $k0, $t2, 28 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c38u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 10) << (32 + 28));
    // 0x602c3c: 0x4ad7a4  .word       0x004AD7A4                   # and         $k0, $v0, $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c3cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x602c40: 0x4ad7a4  .word       0x004AD7A4                   # and         $k0, $v0, $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c40u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x602c44: 0x4ad7a4  .word       0x004AD7A4                   # and         $k0, $v0, $t2 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c44u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x602c48: 0xca5e5be6  lwc2        $30, 0x5BE6($s2)
    ctx->pc = 0x602c48u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x602C48 raw=0xCA5E5BE6");
    // 0x602c4c: 0x4739b366  .word       0x4739B366                   # INVALID     $t9, $t9, -0x4C9A # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x602c4cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x19, function 0x26 at 0x602C4C raw=0x4739B366");
    // 0x602c50: 0xc8f3a58f  lwc2        $19, -0x5A71($a3)
    ctx->pc = 0x602c50u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x602C50 raw=0xC8F3A58F");
    // 0x602c54: 0x29e5d5bb  slti        $a1, $t7, -0x2A45
    ctx->pc = 0x602c54u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 15) < (int64_t)(int32_t)4294956475) ? 1 : 0);
    // 0x602c58: 0x0  nop
    ctx->pc = 0x602c58u;
    // NOP
    // 0x602c5c: 0x0  nop
    ctx->pc = 0x602c5cu;
    // NOP
    // 0x602c60: 0x4ae9b4  teq         $v0, $t2, 934
    ctx->pc = 0x602c60u;
    if (GPR_U64(ctx, 2) == GPR_U64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
    // 0x602c64: 0x4ae9c4  .word       0x004AE9C4                   # sllv        $sp, $t2, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c64u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 2) & 0x1F));
    // 0x602c68: 0x4ae9d0  .word       0x004AE9D0                   # mfhi        $sp # 004A01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c68u;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x602c6c: 0x4ae9d0  .word       0x004AE9D0                   # mfhi        $sp # 004A01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c6cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x602c70: 0x4ae9d0  .word       0x004AE9D0                   # mfhi        $sp # 004A01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c70u;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x602c74: 0x4ae9d0  .word       0x004AE9D0                   # mfhi        $sp # 004A01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c74u;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x602c78: 0x4ae9f0  tge         $v0, $t2, 935
    ctx->pc = 0x602c78u;
    if (GPR_S64(ctx, 2) >= GPR_S64(ctx, 10)) { runtime->handleTrap(rdram, ctx); }
    // 0x602c7c: 0x4ae9d0  .word       0x004AE9D0                   # mfhi        $sp # 004A01C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602c7cu;
    SET_GPR_U64(ctx, 29, ctx->hi);
    // 0x602c80: 0x20204545  addi        $zero, $at, 0x4545
    ctx->pc = 0x602c80u;
    // NOP (addi to $zero)
    // 0x602c84: 0x52617752  beql        $s3, $at, . + 4 + (0x7752 << 2)
    ctx->pc = 0x602C84u;
    {
        const bool branch_taken_0x602c84 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 1));
        if (branch_taken_0x602c84) {
            ctx->pc = 0x602C88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602C84u;
            // 0x602c88: 0x72544350  .word       0x72544350                   # mfhi1       $t0 # 02540340 <InstrIdType: R5900_MMI> (Delay Slot)
            SET_GPR_U64(ctx, 8, ctx->hi1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x6209D0u;
            return;
        }
    }
    ctx->pc = 0x602C8Cu;
    // 0x602c8c: 0x66736e61  daddiu      $s3, $s3, 0x6E61
    ctx->pc = 0x602c8cu;
    SET_GPR_S64(ctx, 19, (int64_t)GPR_S64(ctx, 19) + (int64_t)(int32_t)28257);
    // 0x602c90: 0x3a207265  xori        $zero, $s1, 0x7265
    ctx->pc = 0x602c90u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 17) ^ (uint64_t)(uint16_t)29285);
    // 0x602c94: 0x52524520  beql        $s2, $s2, . + 4 + (0x4520 << 2)
    ctx->pc = 0x602C94u;
    {
        const bool branch_taken_0x602c94 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 18));
        if (branch_taken_0x602c94) {
            ctx->pc = 0x602C98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602C94u;
            // 0x602c98: 0x2021524f  addi        $at, $at, 0x524F (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)21071, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x614118u;
            return;
        }
    }
    ctx->pc = 0x602C9Cu;
    // 0x602c9c: 0x20414d44  addi        $at, $v0, 0x4D44
    ctx->pc = 0x602c9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 2), (int32_t)19780, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
    // 0x602ca0: 0x6d6d6f63  ldr         $t5, 0x6F63($t3)
    ctx->pc = 0x602ca0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 28515); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 13, (GPR_U64(ctx, 13) & keepMask) | (mem >> shift)); }
    // 0x602ca4: 0x20646e61  addi        $a0, $v1, 0x6E61
    ctx->pc = 0x602ca4u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)28257, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
    // 0x602ca8: 0x75657571  .word       0x75657571                   # INVALID     $t3, $a1, 0x7571 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x602ca8u;
    throw std::runtime_error("Unhandled opcode: 0x1D at 0x602CA8 raw=0x75657571");
    // 0x602cac: 0x55462065  bnel        $t2, $a2, . + 4 + (0x2065 << 2)
    ctx->pc = 0x602CACu;
    {
        const bool branch_taken_0x602cac = (GPR_U64(ctx, 10) != GPR_U64(ctx, 6));
        if (branch_taken_0x602cac) {
            ctx->pc = 0x602CB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x602CACu;
            // 0x602cb0: 0x20214c4c  addi        $at, $at, 0x4C4C (Delay Slot)
            { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 1), (int32_t)19532, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 1, (int32_t)tmp); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x60AE44u;
            return;
        }
    }
    ctx->pc = 0x602CB4u;
    // 0x602cb4: 0x63736944  daddi       $s3, $k1, 0x6944
    ctx->pc = 0x602cb4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26948; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 19, res); }
    // 0x602cb8: 0x69647261  ldl         $a0, 0x7261($t3)
    ctx->pc = 0x602cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 29281); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x602cbc: 0x6f20676e  ldr         $zero, 0x676E($t9)
    ctx->pc = 0x602cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 26478); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 0, (GPR_U64(ctx, 0) & keepMask) | (mem >> shift)); }
    // 0x602cc0: 0x7365646c  .word       0x7365646C                   # INVALID     $k1, $a1, 0x646C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x602cc0u;
    throw std::runtime_error("Unhandled MMI instruction: function 0x2C at 0x602CC0 raw=0x7365646C");
    // 0x602cc4: 0x6f632074  ldr         $v1, 0x2074($k1)
    ctx->pc = 0x602cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 8308); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x602cc8: 0x6e616d6d  ldr         $at, 0x6D6D($s3)
    ctx->pc = 0x602cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 28013); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 1, (GPR_U64(ctx, 1) & keepMask) | (mem >> shift)); }
    // 0x602ccc: 0xa2164  .word       0x000A2164                   # and         $a0, $zero, $t2 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & GPR_U64(ctx, 10));
    // 0x602cd0: 0x4aec14  .word       0x004AEC14                   # dsllv       $sp, $t2, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cd0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 10) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x602cd4: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cd4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602cd8: 0x4aec14  .word       0x004AEC14                   # dsllv       $sp, $t2, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cd8u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 10) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x602cdc: 0x4aec14  .word       0x004AEC14                   # dsllv       $sp, $t2, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cdcu;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 10) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x602ce0: 0x4aebb8  .word       0x004AEBB8                   # dsll        $sp, $t2, 14 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602ce0u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 10) << 14);
    // 0x602ce4: 0x4aebe0  .word       0x004AEBE0                   # add         $sp, $v0, $t2 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602ce4u;
    {     int32_t rs_val = GPR_S32(ctx, 2);     int32_t rt_val = GPR_S32(ctx, 10);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 29, (int32_t)result);     } }
    // 0x602ce8: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602ce8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602cec: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cecu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602cf0: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602cf4: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cf4u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602cf8: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602cfc: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602cfcu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d00: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d00u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d04: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d04u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d08: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d08u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d0c: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d0cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d10: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d10u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d14: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d14u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d18: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d18u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d1c: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d1cu;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d20: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d20u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d24: 0x4aec00  .word       0x004AEC00                   # sll         $sp, $t2, 16 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d24u;
    SET_GPR_S32(ctx, 29, (int32_t)SLL32(GPR_U32(ctx, 10), 16));
    // 0x602d28: 0x4aec14  .word       0x004AEC14                   # dsllv       $sp, $t2, $v0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x602d28u;
    SET_GPR_U64(ctx, 29, GPR_U64(ctx, 10) << (GPR_U32(ctx, 2) & 0x3F));
    // 0x602d2c: 0x0  nop
    ctx->pc = 0x602d2cu;
    // NOP
    ctx->pc = 0x602d30u;
}
