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

// Function: sub_003FAED8
// Address: 0x3faed8 - 0x3fb098
void sub_003FAED8_0x3faed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003FAED8_0x3faed8");
#endif

    switch (ctx->pc) {
        case 0x3faf60u: goto label_3faf60;
        case 0x3faf6cu: goto label_3faf6c;
        case 0x3faf74u: goto label_3faf74;
        case 0x3faf80u: goto label_3faf80;
        case 0x3faf8cu: goto label_3faf8c;
        case 0x3faf94u: goto label_3faf94;
        case 0x3fafa0u: goto label_3fafa0;
        case 0x3fafacu: goto label_3fafac;
        case 0x3fafb4u: goto label_3fafb4;
        case 0x3fafc0u: goto label_3fafc0;
        case 0x3fafccu: goto label_3fafcc;
        case 0x3fafd4u: goto label_3fafd4;
        case 0x3fafe0u: goto label_3fafe0;
        case 0x3fafecu: goto label_3fafec;
        case 0x3faff4u: goto label_3faff4;
        case 0x3fb000u: goto label_3fb000;
        case 0x3fb00cu: goto label_3fb00c;
        case 0x3fb014u: goto label_3fb014;
        case 0x3fb020u: goto label_3fb020;
        case 0x3fb02cu: goto label_3fb02c;
        case 0x3fb034u: goto label_3fb034;
        case 0x3fb040u: goto label_3fb040;
        case 0x3fb04cu: goto label_3fb04c;
        case 0x3fb054u: goto label_3fb054;
        default: break;
    }

    ctx->pc = 0x3faed8u;

    // 0x3faed8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3faed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3faedc: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3faedcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3faee0: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3faee0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3faee4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3faee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faee8: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3faee8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3faeec: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x3faeecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faef0: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3faef0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3faef4: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x3faef4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faef8: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3faef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3faefc: 0x120a02d  daddu       $s4, $t1, $zero
    ctx->pc = 0x3faefcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faf00: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3faf00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3faf04: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x3faf04u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faf08: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3faf08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3faf0c: 0x160b02d  daddu       $s6, $t3, $zero
    ctx->pc = 0x3faf0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faf10: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3faf10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3faf14: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3faf14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3faf18: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3faf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3faf1c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x3faf1cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3faf20: 0x10800051  beqz        $a0, . + 4 + (0x51 << 2)
    ctx->pc = 0x3FAF20u;
    {
        const bool branch_taken_0x3faf20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF20u;
        // 0x3faf24: 0xdfbe00a8  ld          $fp, 0xA8($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 168)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faf20) {
            ctx->pc = 0x3FB068u;
            goto label_3fb068;
        }
    }
    ctx->pc = 0x3FAF28u;
    // 0x3faf28: 0x12200050  beqz        $s1, . + 4 + (0x50 << 2)
    ctx->pc = 0x3FAF28u;
    {
        const bool branch_taken_0x3faf28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3FAF2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FAF28u;
        // 0x3faf2c: 0x7bb00090  lq          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3faf28) {
            ctx->pc = 0x3FB06Cu;
            goto label_3fb06c;
        }
    }
    ctx->pc = 0x3FAF30u;
    // 0x3faf30: 0xfe320158  sd          $s2, 0x158($s1)
    ctx->pc = 0x3faf30u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 344), GPR_U64(ctx, 18));
    // 0x3faf34: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3faf34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faf38: 0xfe330160  sd          $s3, 0x160($s1)
    ctx->pc = 0x3faf38u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 352), GPR_U64(ctx, 19));
    // 0x3faf3c: 0xfe340168  sd          $s4, 0x168($s1)
    ctx->pc = 0x3faf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 360), GPR_U64(ctx, 20));
    // 0x3faf40: 0xfe350170  sd          $s5, 0x170($s1)
    ctx->pc = 0x3faf40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 368), GPR_U64(ctx, 21));
    // 0x3faf44: 0xfe360178  sd          $s6, 0x178($s1)
    ctx->pc = 0x3faf44u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 376), GPR_U64(ctx, 22));
    // 0x3faf48: 0xfe370180  sd          $s7, 0x180($s1)
    ctx->pc = 0x3faf48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 384), GPR_U64(ctx, 23));
    // 0x3faf4c: 0xfe3e0188  sd          $fp, 0x188($s1)
    ctx->pc = 0x3faf4cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 392), GPR_U64(ctx, 30));
    // 0x3faf50: 0x3c010060  lui         $at, 0x60
    ctx->pc = 0x3faf50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)96 << 16));
    // 0x3faf54: 0xdc30f958  ld          $s0, -0x6A8($at)
    ctx->pc = 0x3faf54u;
    SET_GPR_U64(ctx, 16, FAST_READ64(0x5FF958u));
    // 0x3faf58: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FAF58u;
    SET_GPR_U32(ctx, 31, 0x3FAF60u);
    ctx->pc = 0x3FAF5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF58u;
    // 0x3faf5c: 0xfe260150  sd          $a2, 0x150($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FAF58u, 0x3FAF60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF60u;
label_3faf60:
    // 0x3faf60: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3faf60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faf64: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FAF64u;
    SET_GPR_U32(ctx, 31, 0x3FAF6Cu);
    ctx->pc = 0x3FAF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF64u;
    // 0x3faf68: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FAF64u, 0x3FAF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF6Cu;
label_3faf6c:
    // 0x3faf6c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FAF6Cu;
    SET_GPR_U32(ctx, 31, 0x3FAF74u);
    ctx->pc = 0x3FAF70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF6Cu;
    // 0x3faf70: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FAF6Cu, 0x3FAF74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF74u;
label_3faf74:
    // 0x3faf74: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x3faf74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
    // 0x3faf78: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FAF78u;
    SET_GPR_U32(ctx, 31, 0x3FAF80u);
    ctx->pc = 0x3FAF7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF78u;
    // 0x3faf7c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FAF78u, 0x3FAF80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF80u;
label_3faf80:
    // 0x3faf80: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3faf80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3faf84: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FAF84u;
    SET_GPR_U32(ctx, 31, 0x3FAF8Cu);
    ctx->pc = 0x3FAF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF84u;
    // 0x3faf88: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FAF84u, 0x3FAF8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF8Cu;
label_3faf8c:
    // 0x3faf8c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FAF8Cu;
    SET_GPR_U32(ctx, 31, 0x3FAF94u);
    ctx->pc = 0x3FAF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF8Cu;
    // 0x3faf90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FAF8Cu, 0x3FAF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAF94u;
label_3faf94:
    // 0x3faf94: 0xe62000ac  swc1        $f0, 0xAC($s1)
    ctx->pc = 0x3faf94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 172), bits); }
    // 0x3faf98: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FAF98u;
    SET_GPR_U32(ctx, 31, 0x3FAFA0u);
    ctx->pc = 0x3FAF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAF98u;
    // 0x3faf9c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FAF98u, 0x3FAFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFA0u;
label_3fafa0:
    // 0x3fafa0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fafa0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fafa4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FAFA4u;
    SET_GPR_U32(ctx, 31, 0x3FAFACu);
    ctx->pc = 0x3FAFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFA4u;
    // 0x3fafa8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FAFA4u, 0x3FAFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFACu;
label_3fafac:
    // 0x3fafac: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FAFACu;
    SET_GPR_U32(ctx, 31, 0x3FAFB4u);
    ctx->pc = 0x3FAFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFACu;
    // 0x3fafb0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FAFACu, 0x3FAFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFB4u;
label_3fafb4:
    // 0x3fafb4: 0xe62000b0  swc1        $f0, 0xB0($s1)
    ctx->pc = 0x3fafb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 176), bits); }
    // 0x3fafb8: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FAFB8u;
    SET_GPR_U32(ctx, 31, 0x3FAFC0u);
    ctx->pc = 0x3FAFBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFB8u;
    // 0x3fafbc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FAFB8u, 0x3FAFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFC0u;
label_3fafc0:
    // 0x3fafc0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fafc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fafc4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FAFC4u;
    SET_GPR_U32(ctx, 31, 0x3FAFCCu);
    ctx->pc = 0x3FAFC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFC4u;
    // 0x3fafc8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FAFC4u, 0x3FAFCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFCCu;
label_3fafcc:
    // 0x3fafcc: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FAFCCu;
    SET_GPR_U32(ctx, 31, 0x3FAFD4u);
    ctx->pc = 0x3FAFD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFCCu;
    // 0x3fafd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FAFCCu, 0x3FAFD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFD4u;
label_3fafd4:
    // 0x3fafd4: 0xe62000b4  swc1        $f0, 0xB4($s1)
    ctx->pc = 0x3fafd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 180), bits); }
    // 0x3fafd8: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FAFD8u;
    SET_GPR_U32(ctx, 31, 0x3FAFE0u);
    ctx->pc = 0x3FAFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFD8u;
    // 0x3fafdc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FAFD8u, 0x3FAFE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFE0u;
label_3fafe0:
    // 0x3fafe0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fafe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fafe4: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FAFE4u;
    SET_GPR_U32(ctx, 31, 0x3FAFECu);
    ctx->pc = 0x3FAFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFE4u;
    // 0x3fafe8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FAFE4u, 0x3FAFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFECu;
label_3fafec:
    // 0x3fafec: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FAFECu;
    SET_GPR_U32(ctx, 31, 0x3FAFF4u);
    ctx->pc = 0x3FAFF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFECu;
    // 0x3faff0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FAFECu, 0x3FAFF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FAFF4u;
label_3faff4:
    // 0x3faff4: 0xe62000b8  swc1        $f0, 0xB8($s1)
    ctx->pc = 0x3faff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 184), bits); }
    // 0x3faff8: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FAFF8u;
    SET_GPR_U32(ctx, 31, 0x3FB000u);
    ctx->pc = 0x3FAFFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FAFF8u;
    // 0x3faffc: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FAFF8u, 0x3FB000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB000u;
label_3fb000:
    // 0x3fb000: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fb000u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb004: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FB004u;
    SET_GPR_U32(ctx, 31, 0x3FB00Cu);
    ctx->pc = 0x3FB008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB004u;
    // 0x3fb008: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FB004u, 0x3FB00Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB00Cu;
label_3fb00c:
    // 0x3fb00c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FB00Cu;
    SET_GPR_U32(ctx, 31, 0x3FB014u);
    ctx->pc = 0x3FB010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB00Cu;
    // 0x3fb010: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FB00Cu, 0x3FB014u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB014u;
label_3fb014:
    // 0x3fb014: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x3fb014u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb018: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FB018u;
    SET_GPR_U32(ctx, 31, 0x3FB020u);
    ctx->pc = 0x3FB01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB018u;
    // 0x3fb01c: 0xe62000bc  swc1        $f0, 0xBC($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 188), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FB018u, 0x3FB020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB020u;
label_3fb020:
    // 0x3fb020: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3fb020u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb024: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FB024u;
    SET_GPR_U32(ctx, 31, 0x3FB02Cu);
    ctx->pc = 0x3FB028u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB024u;
    // 0x3fb028: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FB024u, 0x3FB02Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB02Cu;
label_3fb02c:
    // 0x3fb02c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FB02Cu;
    SET_GPR_U32(ctx, 31, 0x3FB034u);
    ctx->pc = 0x3FB030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB02Cu;
    // 0x3fb030: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FB02Cu, 0x3FB034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB034u;
label_3fb034:
    // 0x3fb034: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x3fb034u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb038: 0xc0beada  jal         func_2FAB68
    ctx->pc = 0x3FB038u;
    SET_GPR_U32(ctx, 31, 0x3FB040u);
    ctx->pc = 0x3FB03Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB038u;
    // 0x3fb03c: 0xe62000c0  swc1        $f0, 0xC0($s1) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 192), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FAB68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB68u, 0x3FB038u, 0x3FB040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB040u;
label_3fb040:
    // 0x3fb040: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3fb040u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3fb044: 0xc0bed9c  jal         func_2FB670
    ctx->pc = 0x3FB044u;
    SET_GPR_U32(ctx, 31, 0x3FB04Cu);
    ctx->pc = 0x3FB048u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB044u;
    // 0x3fb048: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FB670u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FB670u, 0x3FB044u, 0x3FB04Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB04Cu;
label_3fb04c:
    // 0x3fb04c: 0xc0bef4c  jal         func_2FBD30
    ctx->pc = 0x3FB04Cu;
    SET_GPR_U32(ctx, 31, 0x3FB054u);
    ctx->pc = 0x3FB050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3FB04Cu;
    // 0x3fb050: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FBD30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FBD30u, 0x3FB04Cu, 0x3FB054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3FB054u;
label_3fb054:
    // 0x3fb054: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x3fb054u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3fb058: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3fb058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3fb05c: 0xe62000c4  swc1        $f0, 0xC4($s1)
    ctx->pc = 0x3fb05cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 196), bits); }
    // 0x3fb060: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3fb060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3fb064: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x3fb064u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_3fb068:
    // 0x3fb068: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3fb068u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3fb06c:
    // 0x3fb06c: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3fb06cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3fb070: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3fb070u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3fb074: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3fb074u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3fb078: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3fb078u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3fb07c: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3fb07cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3fb080: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3fb080u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3fb084: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3fb084u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3fb088: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3fb088u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3fb08c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3fb08cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3fb090: 0x3e00008  jr          $ra
    ctx->pc = 0x3FB090u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3FB094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3FB090u;
        // 0x3fb094: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3FB090u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3FB098u;
}
