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

// Function: sub_003838B8
// Address: 0x3838b8 - 0x383a08
void sub_003838B8_0x3838b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003838B8_0x3838b8");
#endif

    switch (ctx->pc) {
        case 0x3838b8u: goto label_3838b8;
        case 0x3838bcu: goto label_3838bc;
        case 0x3838c0u: goto label_3838c0;
        case 0x3838c4u: goto label_3838c4;
        case 0x3838c8u: goto label_3838c8;
        case 0x3838ccu: goto label_3838cc;
        case 0x3838d0u: goto label_3838d0;
        case 0x3838d4u: goto label_3838d4;
        case 0x3838d8u: goto label_3838d8;
        case 0x3838dcu: goto label_3838dc;
        case 0x3838e0u: goto label_3838e0;
        case 0x3838e4u: goto label_3838e4;
        case 0x3838e8u: goto label_3838e8;
        case 0x3838ecu: goto label_3838ec;
        case 0x3838f0u: goto label_3838f0;
        case 0x3838f4u: goto label_3838f4;
        case 0x3838f8u: goto label_3838f8;
        case 0x3838fcu: goto label_3838fc;
        case 0x383900u: goto label_383900;
        case 0x383904u: goto label_383904;
        case 0x383908u: goto label_383908;
        case 0x38390cu: goto label_38390c;
        case 0x383910u: goto label_383910;
        case 0x383914u: goto label_383914;
        case 0x383918u: goto label_383918;
        case 0x38391cu: goto label_38391c;
        case 0x383920u: goto label_383920;
        case 0x383924u: goto label_383924;
        case 0x383928u: goto label_383928;
        case 0x38392cu: goto label_38392c;
        case 0x383930u: goto label_383930;
        case 0x383934u: goto label_383934;
        case 0x383938u: goto label_383938;
        case 0x38393cu: goto label_38393c;
        case 0x383940u: goto label_383940;
        case 0x383944u: goto label_383944;
        case 0x383948u: goto label_383948;
        case 0x38394cu: goto label_38394c;
        case 0x383950u: goto label_383950;
        case 0x383954u: goto label_383954;
        case 0x383958u: goto label_383958;
        case 0x38395cu: goto label_38395c;
        case 0x383960u: goto label_383960;
        case 0x383964u: goto label_383964;
        case 0x383968u: goto label_383968;
        case 0x38396cu: goto label_38396c;
        case 0x383970u: goto label_383970;
        case 0x383974u: goto label_383974;
        case 0x383978u: goto label_383978;
        case 0x38397cu: goto label_38397c;
        case 0x383980u: goto label_383980;
        case 0x383984u: goto label_383984;
        case 0x383988u: goto label_383988;
        case 0x38398cu: goto label_38398c;
        case 0x383990u: goto label_383990;
        case 0x383994u: goto label_383994;
        case 0x383998u: goto label_383998;
        case 0x38399cu: goto label_38399c;
        case 0x3839a0u: goto label_3839a0;
        case 0x3839a4u: goto label_3839a4;
        case 0x3839a8u: goto label_3839a8;
        case 0x3839acu: goto label_3839ac;
        case 0x3839b0u: goto label_3839b0;
        case 0x3839b4u: goto label_3839b4;
        case 0x3839b8u: goto label_3839b8;
        case 0x3839bcu: goto label_3839bc;
        case 0x3839c0u: goto label_3839c0;
        case 0x3839c4u: goto label_3839c4;
        case 0x3839c8u: goto label_3839c8;
        case 0x3839ccu: goto label_3839cc;
        case 0x3839d0u: goto label_3839d0;
        case 0x3839d4u: goto label_3839d4;
        case 0x3839d8u: goto label_3839d8;
        case 0x3839dcu: goto label_3839dc;
        case 0x3839e0u: goto label_3839e0;
        case 0x3839e4u: goto label_3839e4;
        case 0x3839e8u: goto label_3839e8;
        case 0x3839ecu: goto label_3839ec;
        case 0x3839f0u: goto label_3839f0;
        case 0x3839f4u: goto label_3839f4;
        case 0x3839f8u: goto label_3839f8;
        case 0x3839fcu: goto label_3839fc;
        case 0x383a00u: goto label_383a00;
        case 0x383a04u: goto label_383a04;
        default: break;
    }

    ctx->pc = 0x3838b8u;

label_3838b8:
    // 0x3838b8: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3838b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_3838bc:
    // 0x3838bc: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3838bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
label_3838c0:
    // 0x3838c0: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3838c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_3838c4:
    // 0x3838c4: 0x80f02d  daddu       $fp, $a0, $zero
    ctx->pc = 0x3838c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3838c8:
    // 0x3838c8: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3838c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_3838cc:
    // 0x3838cc: 0x3c59821  addu        $s3, $fp, $a1
    ctx->pc = 0x3838ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 30), GPR_U32(ctx, 5)));
label_3838d0:
    // 0x3838d0: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3838d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_3838d4:
    // 0x3838d4: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3838d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_3838d8:
    // 0x3838d8: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3838d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3838dc:
    // 0x3838dc: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3838dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_3838e0:
    // 0x3838e0: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3838e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_3838e4:
    // 0x3838e4: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3838e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
label_3838e8:
    // 0x3838e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3838e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3838ec:
    // 0x3838ec: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3838ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_3838f0:
    // 0x3838f0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
label_3838f4:
    if (ctx->pc == 0x3838F4u) {
        ctx->pc = 0x3838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838F0u;
        // 0x3838f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3838F8u;
        goto label_3838f8;
    }
    ctx->pc = 0x3838F0u;
    {
        const bool branch_taken_0x3838f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3838F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838F0u;
        // 0x3838f4: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838f0) {
            ctx->pc = 0x3839CCu;
            goto label_3839cc;
        }
    }
    ctx->pc = 0x3838F8u;
label_3838f8:
    // 0x3838f8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3838f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3838fc:
    // 0x3838fc: 0x1840002f  blez        $v0, . + 4 + (0x2F << 2)
label_383900:
    if (ctx->pc == 0x383900u) {
        ctx->pc = 0x383900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838FCu;
        // 0x383900: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383904u;
        goto label_383904;
    }
    ctx->pc = 0x3838FCu;
    {
        const bool branch_taken_0x3838fc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3838FCu;
        // 0x383900: 0x3c170062  lui         $s7, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3838fc) {
            ctx->pc = 0x3839BCu;
            goto label_3839bc;
        }
    }
    ctx->pc = 0x383904u;
label_383904:
    // 0x383904: 0x26f6e880  addiu       $s6, $s7, -0x1780
    ctx->pc = 0x383904u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_383908:
    // 0x383908: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x383908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_38390c:
    // 0x38390c: 0x0  nop
    ctx->pc = 0x38390cu;
    // NOP
label_383910:
    // 0x383910: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x383910u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_383914:
    // 0x383914: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x383914u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_383918:
    // 0x383918: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x383918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_38391c:
    // 0x38391c: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_383920:
    if (ctx->pc == 0x383920u) {
        ctx->pc = 0x383920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38391Cu;
        // 0x383920: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383924u;
        goto label_383924;
    }
    ctx->pc = 0x38391Cu;
    {
        const bool branch_taken_0x38391c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x38391c) {
            ctx->pc = 0x383920u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x38391Cu;
            // 0x383920: 0x8e220004  lw          $v0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383938u;
            goto label_383938;
        }
    }
    ctx->pc = 0x383924u;
label_383924:
    // 0x383924: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x383924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_383928:
    // 0x383928: 0x40f809  jalr        $v0
label_38392c:
    if (ctx->pc == 0x38392Cu) {
        ctx->pc = 0x383930u;
        goto label_383930;
    }
    ctx->pc = 0x383928u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383930u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383928u, 0x383930u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383930u;
label_383930:
    // 0x383930: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x383930u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_383934:
    // 0x383934: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x383934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_383938:
    // 0x383938: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x383938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_38393c:
    // 0x38393c: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_383940:
    if (ctx->pc == 0x383940u) {
        ctx->pc = 0x383940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38393Cu;
        // 0x383940: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383944u;
        goto label_383944;
    }
    ctx->pc = 0x38393Cu;
    {
        const bool branch_taken_0x38393c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x383940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38393Cu;
        // 0x383940: 0x26150001  addiu       $s5, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38393c) {
            ctx->pc = 0x38398Cu;
            goto label_38398c;
        }
    }
    ctx->pc = 0x383944u;
label_383944:
    // 0x383944: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x383944u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_383948:
    // 0x383948: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x383948u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_38394c:
    // 0x38394c: 0x1840000f  blez        $v0, . + 4 + (0xF << 2)
label_383950:
    if (ctx->pc == 0x383950u) {
        ctx->pc = 0x383950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38394Cu;
        // 0x383950: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383954u;
        goto label_383954;
    }
    ctx->pc = 0x38394Cu;
    {
        const bool branch_taken_0x38394c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x383950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x38394Cu;
        // 0x383950: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38394c) {
            ctx->pc = 0x38398Cu;
            goto label_38398c;
        }
    }
    ctx->pc = 0x383954u;
label_383954:
    // 0x383954: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x383954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_383958:
    // 0x383958: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x383958u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_38395c:
    // 0x38395c: 0x2454e880  addiu       $s4, $v0, -0x1780
    ctx->pc = 0x38395cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_383960:
    // 0x383960: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x383960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_383964:
    // 0x383964: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_383968:
    if (ctx->pc == 0x383968u) {
        ctx->pc = 0x383968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383964u;
        // 0x383968: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38396Cu;
        goto label_38396c;
    }
    ctx->pc = 0x383964u;
    {
        const bool branch_taken_0x383964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383964) {
            ctx->pc = 0x383968u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383964u;
            // 0x383968: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x38397Cu;
            goto label_38397c;
        }
    }
    ctx->pc = 0x38396Cu;
label_38396c:
    // 0x38396c: 0x8e82010c  lw          $v0, 0x10C($s4)
    ctx->pc = 0x38396cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 268)));
label_383970:
    // 0x383970: 0x40f809  jalr        $v0
label_383974:
    if (ctx->pc == 0x383974u) {
        ctx->pc = 0x383978u;
        goto label_383978;
    }
    ctx->pc = 0x383970u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x383978u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383970u, 0x383978u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x383978u;
label_383978:
    // 0x383978: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x383978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_38397c:
    // 0x38397c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x38397cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_383980:
    // 0x383980: 0x242102a  slt         $v0, $s2, $v0
    ctx->pc = 0x383980u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_383984:
    // 0x383984: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_383988:
    if (ctx->pc == 0x383988u) {
        ctx->pc = 0x383988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383984u;
        // 0x383988: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x38398Cu;
        goto label_38398c;
    }
    ctx->pc = 0x383984u;
    {
        const bool branch_taken_0x383984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x383988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383984u;
        // 0x383988: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x383984) {
            ctx->pc = 0x383960u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383960;
        }
    }
    ctx->pc = 0x38398Cu;
label_38398c:
    // 0x38398c: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x38398cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_383990:
    // 0x383990: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_383994:
    if (ctx->pc == 0x383994u) {
        ctx->pc = 0x383994u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383990u;
        // 0x383994: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383998u;
        goto label_383998;
    }
    ctx->pc = 0x383990u;
    {
        const bool branch_taken_0x383990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x383990) {
            ctx->pc = 0x383994u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x383990u;
            // 0x383994: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3839ACu;
            goto label_3839ac;
        }
    }
    ctx->pc = 0x383998u;
label_383998:
    // 0x383998: 0x8ec2010c  lw          $v0, 0x10C($s6)
    ctx->pc = 0x383998u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 268)));
label_38399c:
    // 0x38399c: 0x40f809  jalr        $v0
label_3839a0:
    if (ctx->pc == 0x3839A0u) {
        ctx->pc = 0x3839A4u;
        goto label_3839a4;
    }
    ctx->pc = 0x38399Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3839A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x38399Cu, 0x3839A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3839A4u;
label_3839a4:
    // 0x3839a4: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x3839a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_3839a8:
    // 0x3839a8: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x3839a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3839ac:
    // 0x3839ac: 0x2a0802d  daddu       $s0, $s5, $zero
    ctx->pc = 0x3839acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3839b0:
    // 0x3839b0: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3839b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3839b4:
    // 0x3839b4: 0x5440ffd6  bnel        $v0, $zero, . + 4 + (-0x2A << 2)
label_3839b8:
    if (ctx->pc == 0x3839B8u) {
        ctx->pc = 0x3839B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839B4u;
        // 0x3839b8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3839BCu;
        goto label_3839bc;
    }
    ctx->pc = 0x3839B4u;
    {
        const bool branch_taken_0x3839b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3839b4) {
            ctx->pc = 0x3839B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3839B4u;
            // 0x3839b8: 0x8e630004  lw          $v1, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x383910u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_383910;
        }
    }
    ctx->pc = 0x3839BCu;
label_3839bc:
    // 0x3839bc: 0x26e3e880  addiu       $v1, $s7, -0x1780
    ctx->pc = 0x3839bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_3839c0:
    // 0x3839c0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3839c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3839c4:
    // 0x3839c4: 0x40f809  jalr        $v0
label_3839c8:
    if (ctx->pc == 0x3839C8u) {
        ctx->pc = 0x3839C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839C4u;
        // 0x3839c8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3839CCu;
        goto label_3839cc;
    }
    ctx->pc = 0x3839C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3839CCu);
        ctx->pc = 0x3839C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3839C4u;
        // 0x3839c8: 0x8e640004  lw          $a0, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3839C4u, 0x3839CCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3839CCu;
label_3839cc:
    // 0x3839cc: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x3839ccu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_3839d0:
    // 0x3839d0: 0x3c0102d  daddu       $v0, $fp, $zero
    ctx->pc = 0x3839d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_3839d4:
    // 0x3839d4: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x3839d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
label_3839d8:
    // 0x3839d8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3839d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3839dc:
    // 0x3839dc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3839dcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3839e0:
    // 0x3839e0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3839e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3839e4:
    // 0x3839e4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3839e4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3839e8:
    // 0x3839e8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3839e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3839ec:
    // 0x3839ec: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3839ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3839f0:
    // 0x3839f0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3839f0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3839f4:
    // 0x3839f4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3839f4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3839f8:
    // 0x3839f8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3839f8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3839fc:
    // 0x3839fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3839fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_383a00:
    // 0x383a00: 0x3e00008  jr          $ra
label_383a04:
    if (ctx->pc == 0x383A04u) {
        ctx->pc = 0x383A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A00u;
        // 0x383a04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x383A08u;
        goto label_fallthrough_0x383a00;
    }
    ctx->pc = 0x383A00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x383A04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x383A00u;
        // 0x383a04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x383A00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x383a00:
    ctx->pc = 0x383A08u;
}
