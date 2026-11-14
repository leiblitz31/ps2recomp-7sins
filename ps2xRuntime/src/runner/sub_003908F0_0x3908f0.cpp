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

// Function: sub_003908F0
// Address: 0x3908f0 - 0x390c88
void sub_003908F0_0x3908f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003908F0_0x3908f0");
#endif

    switch (ctx->pc) {
        case 0x3908f0u: goto label_3908f0;
        case 0x3908f4u: goto label_3908f4;
        case 0x3908f8u: goto label_3908f8;
        case 0x3908fcu: goto label_3908fc;
        case 0x390900u: goto label_390900;
        case 0x390904u: goto label_390904;
        case 0x390908u: goto label_390908;
        case 0x39090cu: goto label_39090c;
        case 0x390910u: goto label_390910;
        case 0x390914u: goto label_390914;
        case 0x390918u: goto label_390918;
        case 0x39091cu: goto label_39091c;
        case 0x390920u: goto label_390920;
        case 0x390924u: goto label_390924;
        case 0x390928u: goto label_390928;
        case 0x39092cu: goto label_39092c;
        case 0x390930u: goto label_390930;
        case 0x390934u: goto label_390934;
        case 0x390938u: goto label_390938;
        case 0x39093cu: goto label_39093c;
        case 0x390940u: goto label_390940;
        case 0x390944u: goto label_390944;
        case 0x390948u: goto label_390948;
        case 0x39094cu: goto label_39094c;
        case 0x390950u: goto label_390950;
        case 0x390954u: goto label_390954;
        case 0x390958u: goto label_390958;
        case 0x39095cu: goto label_39095c;
        case 0x390960u: goto label_390960;
        case 0x390964u: goto label_390964;
        case 0x390968u: goto label_390968;
        case 0x39096cu: goto label_39096c;
        case 0x390970u: goto label_390970;
        case 0x390974u: goto label_390974;
        case 0x390978u: goto label_390978;
        case 0x39097cu: goto label_39097c;
        case 0x390980u: goto label_390980;
        case 0x390984u: goto label_390984;
        case 0x390988u: goto label_390988;
        case 0x39098cu: goto label_39098c;
        case 0x390990u: goto label_390990;
        case 0x390994u: goto label_390994;
        case 0x390998u: goto label_390998;
        case 0x39099cu: goto label_39099c;
        case 0x3909a0u: goto label_3909a0;
        case 0x3909a4u: goto label_3909a4;
        case 0x3909a8u: goto label_3909a8;
        case 0x3909acu: goto label_3909ac;
        case 0x3909b0u: goto label_3909b0;
        case 0x3909b4u: goto label_3909b4;
        case 0x3909b8u: goto label_3909b8;
        case 0x3909bcu: goto label_3909bc;
        case 0x3909c0u: goto label_3909c0;
        case 0x3909c4u: goto label_3909c4;
        case 0x3909c8u: goto label_3909c8;
        case 0x3909ccu: goto label_3909cc;
        case 0x3909d0u: goto label_3909d0;
        case 0x3909d4u: goto label_3909d4;
        case 0x3909d8u: goto label_3909d8;
        case 0x3909dcu: goto label_3909dc;
        case 0x3909e0u: goto label_3909e0;
        case 0x3909e4u: goto label_3909e4;
        case 0x3909e8u: goto label_3909e8;
        case 0x3909ecu: goto label_3909ec;
        case 0x3909f0u: goto label_3909f0;
        case 0x3909f4u: goto label_3909f4;
        case 0x3909f8u: goto label_3909f8;
        case 0x3909fcu: goto label_3909fc;
        case 0x390a00u: goto label_390a00;
        case 0x390a04u: goto label_390a04;
        case 0x390a08u: goto label_390a08;
        case 0x390a0cu: goto label_390a0c;
        case 0x390a10u: goto label_390a10;
        case 0x390a14u: goto label_390a14;
        case 0x390a18u: goto label_390a18;
        case 0x390a1cu: goto label_390a1c;
        case 0x390a20u: goto label_390a20;
        case 0x390a24u: goto label_390a24;
        case 0x390a28u: goto label_390a28;
        case 0x390a2cu: goto label_390a2c;
        case 0x390a30u: goto label_390a30;
        case 0x390a34u: goto label_390a34;
        case 0x390a38u: goto label_390a38;
        case 0x390a3cu: goto label_390a3c;
        case 0x390a40u: goto label_390a40;
        case 0x390a44u: goto label_390a44;
        case 0x390a48u: goto label_390a48;
        case 0x390a4cu: goto label_390a4c;
        case 0x390a50u: goto label_390a50;
        case 0x390a54u: goto label_390a54;
        case 0x390a58u: goto label_390a58;
        case 0x390a5cu: goto label_390a5c;
        case 0x390a60u: goto label_390a60;
        case 0x390a64u: goto label_390a64;
        case 0x390a68u: goto label_390a68;
        case 0x390a6cu: goto label_390a6c;
        case 0x390a70u: goto label_390a70;
        case 0x390a74u: goto label_390a74;
        case 0x390a78u: goto label_390a78;
        case 0x390a7cu: goto label_390a7c;
        case 0x390a80u: goto label_390a80;
        case 0x390a84u: goto label_390a84;
        case 0x390a88u: goto label_390a88;
        case 0x390a8cu: goto label_390a8c;
        case 0x390a90u: goto label_390a90;
        case 0x390a94u: goto label_390a94;
        case 0x390a98u: goto label_390a98;
        case 0x390a9cu: goto label_390a9c;
        case 0x390aa0u: goto label_390aa0;
        case 0x390aa4u: goto label_390aa4;
        case 0x390aa8u: goto label_390aa8;
        case 0x390aacu: goto label_390aac;
        case 0x390ab0u: goto label_390ab0;
        case 0x390ab4u: goto label_390ab4;
        case 0x390ab8u: goto label_390ab8;
        case 0x390abcu: goto label_390abc;
        case 0x390ac0u: goto label_390ac0;
        case 0x390ac4u: goto label_390ac4;
        case 0x390ac8u: goto label_390ac8;
        case 0x390accu: goto label_390acc;
        case 0x390ad0u: goto label_390ad0;
        case 0x390ad4u: goto label_390ad4;
        case 0x390ad8u: goto label_390ad8;
        case 0x390adcu: goto label_390adc;
        case 0x390ae0u: goto label_390ae0;
        case 0x390ae4u: goto label_390ae4;
        case 0x390ae8u: goto label_390ae8;
        case 0x390aecu: goto label_390aec;
        case 0x390af0u: goto label_390af0;
        case 0x390af4u: goto label_390af4;
        case 0x390af8u: goto label_390af8;
        case 0x390afcu: goto label_390afc;
        case 0x390b00u: goto label_390b00;
        case 0x390b04u: goto label_390b04;
        case 0x390b08u: goto label_390b08;
        case 0x390b0cu: goto label_390b0c;
        case 0x390b10u: goto label_390b10;
        case 0x390b14u: goto label_390b14;
        case 0x390b18u: goto label_390b18;
        case 0x390b1cu: goto label_390b1c;
        case 0x390b20u: goto label_390b20;
        case 0x390b24u: goto label_390b24;
        case 0x390b28u: goto label_390b28;
        case 0x390b2cu: goto label_390b2c;
        case 0x390b30u: goto label_390b30;
        case 0x390b34u: goto label_390b34;
        case 0x390b38u: goto label_390b38;
        case 0x390b3cu: goto label_390b3c;
        case 0x390b40u: goto label_390b40;
        case 0x390b44u: goto label_390b44;
        case 0x390b48u: goto label_390b48;
        case 0x390b4cu: goto label_390b4c;
        case 0x390b50u: goto label_390b50;
        case 0x390b54u: goto label_390b54;
        case 0x390b58u: goto label_390b58;
        case 0x390b5cu: goto label_390b5c;
        case 0x390b60u: goto label_390b60;
        case 0x390b64u: goto label_390b64;
        case 0x390b68u: goto label_390b68;
        case 0x390b6cu: goto label_390b6c;
        case 0x390b70u: goto label_390b70;
        case 0x390b74u: goto label_390b74;
        case 0x390b78u: goto label_390b78;
        case 0x390b7cu: goto label_390b7c;
        case 0x390b80u: goto label_390b80;
        case 0x390b84u: goto label_390b84;
        case 0x390b88u: goto label_390b88;
        case 0x390b8cu: goto label_390b8c;
        case 0x390b90u: goto label_390b90;
        case 0x390b94u: goto label_390b94;
        case 0x390b98u: goto label_390b98;
        case 0x390b9cu: goto label_390b9c;
        case 0x390ba0u: goto label_390ba0;
        case 0x390ba4u: goto label_390ba4;
        case 0x390ba8u: goto label_390ba8;
        case 0x390bacu: goto label_390bac;
        case 0x390bb0u: goto label_390bb0;
        case 0x390bb4u: goto label_390bb4;
        case 0x390bb8u: goto label_390bb8;
        case 0x390bbcu: goto label_390bbc;
        case 0x390bc0u: goto label_390bc0;
        case 0x390bc4u: goto label_390bc4;
        case 0x390bc8u: goto label_390bc8;
        case 0x390bccu: goto label_390bcc;
        case 0x390bd0u: goto label_390bd0;
        case 0x390bd4u: goto label_390bd4;
        case 0x390bd8u: goto label_390bd8;
        case 0x390bdcu: goto label_390bdc;
        case 0x390be0u: goto label_390be0;
        case 0x390be4u: goto label_390be4;
        case 0x390be8u: goto label_390be8;
        case 0x390becu: goto label_390bec;
        case 0x390bf0u: goto label_390bf0;
        case 0x390bf4u: goto label_390bf4;
        case 0x390bf8u: goto label_390bf8;
        case 0x390bfcu: goto label_390bfc;
        case 0x390c00u: goto label_390c00;
        case 0x390c04u: goto label_390c04;
        case 0x390c08u: goto label_390c08;
        case 0x390c0cu: goto label_390c0c;
        case 0x390c10u: goto label_390c10;
        case 0x390c14u: goto label_390c14;
        case 0x390c18u: goto label_390c18;
        case 0x390c1cu: goto label_390c1c;
        case 0x390c20u: goto label_390c20;
        case 0x390c24u: goto label_390c24;
        case 0x390c28u: goto label_390c28;
        case 0x390c2cu: goto label_390c2c;
        case 0x390c30u: goto label_390c30;
        case 0x390c34u: goto label_390c34;
        case 0x390c38u: goto label_390c38;
        case 0x390c3cu: goto label_390c3c;
        case 0x390c40u: goto label_390c40;
        case 0x390c44u: goto label_390c44;
        case 0x390c48u: goto label_390c48;
        case 0x390c4cu: goto label_390c4c;
        case 0x390c50u: goto label_390c50;
        case 0x390c54u: goto label_390c54;
        case 0x390c58u: goto label_390c58;
        case 0x390c5cu: goto label_390c5c;
        case 0x390c60u: goto label_390c60;
        case 0x390c64u: goto label_390c64;
        case 0x390c68u: goto label_390c68;
        case 0x390c6cu: goto label_390c6c;
        case 0x390c70u: goto label_390c70;
        case 0x390c74u: goto label_390c74;
        case 0x390c78u: goto label_390c78;
        case 0x390c7cu: goto label_390c7c;
        case 0x390c80u: goto label_390c80;
        case 0x390c84u: goto label_390c84;
        default: break;
    }

    ctx->pc = 0x3908f0u;

label_3908f0:
    // 0x3908f0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x3908f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_3908f4:
    // 0x3908f4: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3908f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3908f8:
    // 0x3908f8: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x3908f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_3908fc:
    // 0x3908fc: 0x7fb000a0  sq          $s0, 0xA0($sp)
    ctx->pc = 0x3908fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 16));
label_390900:
    // 0x390900: 0x7fb20080  sq          $s2, 0x80($sp)
    ctx->pc = 0x390900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 18));
label_390904:
    // 0x390904: 0x2450e880  addiu       $s0, $v0, -0x1780
    ctx->pc = 0x390904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_390908:
    // 0x390908: 0x7fb30070  sq          $s3, 0x70($sp)
    ctx->pc = 0x390908u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 19));
label_39090c:
    // 0x39090c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x39090cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_390910:
    // 0x390910: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x390910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
label_390914:
    // 0x390914: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x390914u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_390918:
    // 0x390918: 0x7fb60040  sq          $s6, 0x40($sp)
    ctx->pc = 0x390918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 22));
label_39091c:
    // 0x39091c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x39091cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_390920:
    // 0x390920: 0x7fbe0020  sq          $fp, 0x20($sp)
    ctx->pc = 0x390920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 30));
label_390924:
    // 0x390924: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x390924u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390928:
    // 0x390928: 0x7fb10090  sq          $s1, 0x90($sp)
    ctx->pc = 0x390928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 17));
label_39092c:
    // 0x39092c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x39092cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_390930:
    // 0x390930: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x390930u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_390934:
    // 0x390934: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x390934u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_390938:
    // 0x390938: 0x7fb70030  sq          $s7, 0x30($sp)
    ctx->pc = 0x390938u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 23));
label_39093c:
    // 0x39093c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x39093cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_390940:
    // 0x390940: 0x8e020108  lw          $v0, 0x108($s0)
    ctx->pc = 0x390940u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
label_390944:
    // 0x390944: 0x40f809  jalr        $v0
label_390948:
    if (ctx->pc == 0x390948u) {
        ctx->pc = 0x390948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390944u;
        // 0x390948: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39094Cu;
        goto label_39094c;
    }
    ctx->pc = 0x390944u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x39094Cu);
        ctx->pc = 0x390948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390944u;
        // 0x390948: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390944u, 0x39094Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x39094Cu;
label_39094c:
    // 0x39094c: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x39094cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_390950:
    // 0x390950: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x390950u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_390954:
    // 0x390954: 0x24040024  addiu       $a0, $zero, 0x24
    ctx->pc = 0x390954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_390958:
    // 0x390958: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x390958u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_39095c:
    // 0x39095c: 0x34e70502  ori         $a3, $a3, 0x502
    ctx->pc = 0x39095cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
label_390960:
    // 0x390960: 0xc103fb2  jal         func_40FEC8
label_390964:
    if (ctx->pc == 0x390964u) {
        ctx->pc = 0x390964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390960u;
        // 0x390964: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390968u;
        goto label_390968;
    }
    ctx->pc = 0x390960u;
    SET_GPR_U32(ctx, 31, 0x390968u);
    ctx->pc = 0x390964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390960u;
    // 0x390964: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FEC8u, 0x390960u, 0x390968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x390968u;
label_390968:
    // 0x390968: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x390968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_39096c:
    // 0x39096c: 0x3c070003  lui         $a3, 0x3
    ctx->pc = 0x39096cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3 << 16));
label_390970:
    // 0x390970: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x390970u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_390974:
    // 0x390974: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x390974u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_390978:
    // 0x390978: 0x32842  srl         $a1, $v1, 1
    ctx->pc = 0x390978u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
label_39097c:
    // 0x39097c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x39097cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_390980:
    // 0x390980: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x390980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_390984:
    // 0x390984: 0xc103fb2  jal         func_40FEC8
label_390988:
    if (ctx->pc == 0x390988u) {
        ctx->pc = 0x390988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390984u;
        // 0x390988: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x39098Cu;
        goto label_39098c;
    }
    ctx->pc = 0x390984u;
    SET_GPR_U32(ctx, 31, 0x39098Cu);
    ctx->pc = 0x390988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x390984u;
    // 0x390988: 0x34e70502  ori         $a3, $a3, 0x502 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1282);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FEC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FEC8u, 0x390984u, 0x39098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39098Cu;
label_39098c:
    // 0x39098c: 0xaec20004  sw          $v0, 0x4($s6)
    ctx->pc = 0x39098cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 2));
label_390990:
    // 0x390990: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x390990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_390994:
    // 0x390994: 0x104000ae  beqz        $v0, . + 4 + (0xAE << 2)
label_390998:
    if (ctx->pc == 0x390998u) {
        ctx->pc = 0x390998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390994u;
        // 0x390998: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x39099Cu;
        goto label_39099c;
    }
    ctx->pc = 0x390994u;
    {
        const bool branch_taken_0x390994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x390998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390994u;
        // 0x390998: 0x200b82d  daddu       $s7, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390994) {
            ctx->pc = 0x390C50u;
            goto label_390c50;
        }
    }
    ctx->pc = 0x39099Cu;
label_39099c:
    // 0x39099c: 0x0  nop
    ctx->pc = 0x39099cu;
    // NOP
label_3909a0:
    // 0x3909a0: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x3909a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_3909a4:
    // 0x3909a4: 0x26430001  addiu       $v1, $s2, 0x1
    ctx->pc = 0x3909a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_3909a8:
    // 0x3909a8: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x3909a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_3909ac:
    // 0x3909ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3909acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3909b0:
    // 0x3909b0: 0x34a50502  ori         $a1, $a1, 0x502
    ctx->pc = 0x3909b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
label_3909b4:
    // 0x3909b4: 0x40f809  jalr        $v0
label_3909b8:
    if (ctx->pc == 0x3909B8u) {
        ctx->pc = 0x3909B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909B4u;
        // 0x3909b8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3909BCu;
        goto label_3909bc;
    }
    ctx->pc = 0x3909B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3909BCu);
        ctx->pc = 0x3909B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3909B4u;
        // 0x3909b8: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3909B4u, 0x3909BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3909BCu;
label_3909bc:
    // 0x3909bc: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x3909bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
label_3909c0:
    // 0x3909c0: 0x743021  addu        $a2, $v1, $s4
    ctx->pc = 0x3909c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_3909c4:
    // 0x3909c4: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x3909c4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3909c8:
    // 0x3909c8: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3909c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3909cc:
    // 0x3909cc: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x3909ccu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_3909d0:
    // 0x3909d0: 0x2431818  mult        $v1, $s2, $v1
    ctx->pc = 0x3909d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3909d4:
    // 0x3909d4: 0xa0400020  sb          $zero, 0x20($v0)
    ctx->pc = 0x3909d4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 32), (uint8_t)GPR_U32(ctx, 0));
label_3909d8:
    // 0x3909d8: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x3909d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_3909dc:
    // 0x3909dc: 0x8ec70004  lw          $a3, 0x4($s6)
    ctx->pc = 0x3909dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_3909e0:
    // 0x3909e0: 0x7e2021  addu        $a0, $v1, $fp
    ctx->pc = 0x3909e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_3909e4:
    // 0x3909e4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x3909e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3909e8:
    // 0x3909e8: 0x94910002  lhu         $s1, 0x2($a0)
    ctx->pc = 0x3909e8u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_3909ec:
    // 0x3909ec: 0xac600014  sw          $zero, 0x14($v1)
    ctx->pc = 0x3909ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 0));
label_3909f0:
    // 0x3909f0: 0xac720000  sw          $s2, 0x0($v1)
    ctx->pc = 0x3909f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 18));
label_3909f4:
    // 0x3909f4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3909f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_3909f8:
    // 0x3909f8: 0x94900000  lhu         $s0, 0x0($a0)
    ctx->pc = 0x3909f8u;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3909fc:
    // 0x3909fc: 0xac400010  sw          $zero, 0x10($v0)
    ctx->pc = 0x3909fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 0));
label_390a00:
    // 0x390a00: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x390a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390a04:
    // 0x390a04: 0x10a00018  beqz        $a1, . + 4 + (0x18 << 2)
label_390a08:
    if (ctx->pc == 0x390A08u) {
        ctx->pc = 0x390A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A04u;
        // 0x390a08: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A0Cu;
        goto label_390a0c;
    }
    ctx->pc = 0x390A04u;
    {
        const bool branch_taken_0x390a04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A04u;
        // 0x390a08: 0xac600018  sw          $zero, 0x18($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a04) {
            ctx->pc = 0x390A68u;
            goto label_390a68;
        }
    }
    ctx->pc = 0x390A0Cu;
label_390a0c:
    // 0x390a0c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x390a0cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_390a10:
    // 0x390a10: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_390a14:
    if (ctx->pc == 0x390A14u) {
        ctx->pc = 0x390A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A10u;
        // 0x390a14: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A18u;
        goto label_390a18;
    }
    ctx->pc = 0x390A10u;
    {
        const bool branch_taken_0x390a10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x390a10) {
            ctx->pc = 0x390A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390A10u;
            // 0x390a14: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390A60u;
            goto label_390a60;
        }
    }
    ctx->pc = 0x390A18u;
label_390a18:
    // 0x390a18: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x390a18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_390a1c:
    // 0x390a1c: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_390a20:
    if (ctx->pc == 0x390A20u) {
        ctx->pc = 0x390A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A1Cu;
        // 0x390a20: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A24u;
        goto label_390a24;
    }
    ctx->pc = 0x390A1Cu;
    {
        const bool branch_taken_0x390a1c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x390a1c) {
            ctx->pc = 0x390A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390A1Cu;
            // 0x390a20: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390A60u;
            goto label_390a60;
        }
    }
    ctx->pc = 0x390A24u;
label_390a24:
    // 0x390a24: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x390a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_390a28:
    // 0x390a28: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_390a2c:
    if (ctx->pc == 0x390A2Cu) {
        ctx->pc = 0x390A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A28u;
        // 0x390a2c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A30u;
        goto label_390a30;
    }
    ctx->pc = 0x390A28u;
    {
        const bool branch_taken_0x390a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390a28) {
            ctx->pc = 0x390A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390A28u;
            // 0x390a2c: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390A60u;
            goto label_390a60;
        }
    }
    ctx->pc = 0x390A30u;
label_390a30:
    // 0x390a30: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x390a30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_390a34:
    // 0x390a34: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x390a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390a38:
    // 0x390a38: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x390a38u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_390a3c:
    // 0x390a3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x390a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_390a40:
    // 0x390a40: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x390a40u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_390a44:
    // 0x390a44: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x390a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390a48:
    // 0x390a48: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x390a48u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_390a4c:
    // 0x390a4c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x390a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_390a50:
    // 0x390a50: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x390a50u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_390a54:
    // 0x390a54: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x390a54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390a58:
    // 0x390a58: 0x10000012  b           . + 4 + (0x12 << 2)
label_390a5c:
    if (ctx->pc == 0x390A5Cu) {
        ctx->pc = 0x390A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A58u;
        // 0x390a5c: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A60u;
        goto label_390a60;
    }
    ctx->pc = 0x390A58u;
    {
        const bool branch_taken_0x390a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A58u;
        // 0x390a5c: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390a58) {
            ctx->pc = 0x390AA4u;
            goto label_390aa4;
        }
    }
    ctx->pc = 0x390A60u;
label_390a60:
    // 0x390a60: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
label_390a64:
    if (ctx->pc == 0x390A64u) {
        ctx->pc = 0x390A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A60u;
        // 0x390a64: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A68u;
        goto label_390a68;
    }
    ctx->pc = 0x390A60u;
    {
        const bool branch_taken_0x390a60 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x390a60) {
            ctx->pc = 0x390A64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390A60u;
            // 0x390a64: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390A10u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390a10;
        }
    }
    ctx->pc = 0x390A68u;
label_390a68:
    // 0x390a68: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x390a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_390a6c:
    // 0x390a6c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x390a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_390a70:
    // 0x390a70: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x390a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_390a74:
    // 0x390a74: 0x40f809  jalr        $v0
label_390a78:
    if (ctx->pc == 0x390A78u) {
        ctx->pc = 0x390A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A74u;
        // 0x390a78: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390A7Cu;
        goto label_390a7c;
    }
    ctx->pc = 0x390A74u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390A7Cu);
        ctx->pc = 0x390A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390A74u;
        // 0x390a78: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390A74u, 0x390A7Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390A7Cu;
label_390a7c:
    // 0x390a7c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x390a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_390a80:
    // 0x390a80: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x390a80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_390a84:
    // 0x390a84: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x390a84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_390a88:
    // 0x390a88: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x390a88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390a8c:
    // 0x390a8c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x390a8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_390a90:
    // 0x390a90: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x390a90u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_390a94:
    // 0x390a94: 0xa4510002  sh          $s1, 0x2($v0)
    ctx->pc = 0x390a94u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
label_390a98:
    // 0x390a98: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x390a98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_390a9c:
    // 0x390a9c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x390a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_390aa0:
    // 0x390aa0: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x390aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_390aa4:
    // 0x390aa4: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x390aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_390aa8:
    // 0x390aa8: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x390aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_390aac:
    // 0x390aac: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x390aacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_390ab0:
    // 0x390ab0: 0x8ec80004  lw          $t0, 0x4($s6)
    ctx->pc = 0x390ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_390ab4:
    // 0x390ab4: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x390ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_390ab8:
    // 0x390ab8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x390ab8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390abc:
    // 0x390abc: 0x94710004  lhu         $s1, 0x4($v1)
    ctx->pc = 0x390abcu;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_390ac0:
    // 0x390ac0: 0xac470004  sw          $a3, 0x4($v0)
    ctx->pc = 0x390ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 7));
label_390ac4:
    // 0x390ac4: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x390ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_390ac8:
    // 0x390ac8: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_390acc:
    if (ctx->pc == 0x390ACCu) {
        ctx->pc = 0x390ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AC8u;
        // 0x390acc: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390AD0u;
        goto label_390ad0;
    }
    ctx->pc = 0x390AC8u;
    {
        const bool branch_taken_0x390ac8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x390ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AC8u;
        // 0x390acc: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390ac8) {
            ctx->pc = 0x390B30u;
            goto label_390b30;
        }
    }
    ctx->pc = 0x390AD0u;
label_390ad0:
    // 0x390ad0: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x390ad0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390ad4:
    // 0x390ad4: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x390ad4u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_390ad8:
    // 0x390ad8: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_390adc:
    if (ctx->pc == 0x390ADCu) {
        ctx->pc = 0x390ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AD8u;
        // 0x390adc: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390AE0u;
        goto label_390ae0;
    }
    ctx->pc = 0x390AD8u;
    {
        const bool branch_taken_0x390ad8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x390ad8) {
            ctx->pc = 0x390ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390AD8u;
            // 0x390adc: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390B28u;
            goto label_390b28;
        }
    }
    ctx->pc = 0x390AE0u;
label_390ae0:
    // 0x390ae0: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x390ae0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_390ae4:
    // 0x390ae4: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_390ae8:
    if (ctx->pc == 0x390AE8u) {
        ctx->pc = 0x390AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AE4u;
        // 0x390ae8: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390AECu;
        goto label_390aec;
    }
    ctx->pc = 0x390AE4u;
    {
        const bool branch_taken_0x390ae4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x390ae4) {
            ctx->pc = 0x390AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390AE4u;
            // 0x390ae8: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390B28u;
            goto label_390b28;
        }
    }
    ctx->pc = 0x390AECu;
label_390aec:
    // 0x390aec: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x390aecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_390af0:
    // 0x390af0: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_390af4:
    if (ctx->pc == 0x390AF4u) {
        ctx->pc = 0x390AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390AF0u;
        // 0x390af4: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390AF8u;
        goto label_390af8;
    }
    ctx->pc = 0x390AF0u;
    {
        const bool branch_taken_0x390af0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390af0) {
            ctx->pc = 0x390AF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390AF0u;
            // 0x390af4: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390B28u;
            goto label_390b28;
        }
    }
    ctx->pc = 0x390AF8u;
label_390af8:
    // 0x390af8: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x390af8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_390afc:
    // 0x390afc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x390afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390b00:
    // 0x390b00: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x390b00u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_390b04:
    // 0x390b04: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x390b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_390b08:
    // 0x390b08: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x390b08u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_390b0c:
    // 0x390b0c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x390b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390b10:
    // 0x390b10: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x390b10u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_390b14:
    // 0x390b14: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x390b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_390b18:
    // 0x390b18: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x390b18u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_390b1c:
    // 0x390b1c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x390b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390b20:
    // 0x390b20: 0x10000012  b           . + 4 + (0x12 << 2)
label_390b24:
    if (ctx->pc == 0x390B24u) {
        ctx->pc = 0x390B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B20u;
        // 0x390b24: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B28u;
        goto label_390b28;
    }
    ctx->pc = 0x390B20u;
    {
        const bool branch_taken_0x390b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B20u;
        // 0x390b24: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b20) {
            ctx->pc = 0x390B6Cu;
            goto label_390b6c;
        }
    }
    ctx->pc = 0x390B28u;
label_390b28:
    // 0x390b28: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
label_390b2c:
    if (ctx->pc == 0x390B2Cu) {
        ctx->pc = 0x390B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B28u;
        // 0x390b2c: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B30u;
        goto label_390b30;
    }
    ctx->pc = 0x390B28u;
    {
        const bool branch_taken_0x390b28 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x390b28) {
            ctx->pc = 0x390B2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390B28u;
            // 0x390b2c: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390AD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390ad8;
        }
    }
    ctx->pc = 0x390B30u;
label_390b30:
    // 0x390b30: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x390b30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_390b34:
    // 0x390b34: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x390b34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_390b38:
    // 0x390b38: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x390b38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_390b3c:
    // 0x390b3c: 0x40f809  jalr        $v0
label_390b40:
    if (ctx->pc == 0x390B40u) {
        ctx->pc = 0x390B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B3Cu;
        // 0x390b40: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B44u;
        goto label_390b44;
    }
    ctx->pc = 0x390B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390B44u);
        ctx->pc = 0x390B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B3Cu;
        // 0x390b40: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390B3Cu, 0x390B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390B44u;
label_390b44:
    // 0x390b44: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x390b44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_390b48:
    // 0x390b48: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x390b48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_390b4c:
    // 0x390b4c: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x390b4cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_390b50:
    // 0x390b50: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x390b50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390b54:
    // 0x390b54: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x390b54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_390b58:
    // 0x390b58: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x390b58u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_390b5c:
    // 0x390b5c: 0xa4510002  sh          $s1, 0x2($v0)
    ctx->pc = 0x390b5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
label_390b60:
    // 0x390b60: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x390b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_390b64:
    // 0x390b64: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x390b64u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_390b68:
    // 0x390b68: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x390b68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_390b6c:
    // 0x390b6c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x390b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_390b70:
    // 0x390b70: 0x2b42021  addu        $a0, $s5, $s4
    ctx->pc = 0x390b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_390b74:
    // 0x390b74: 0x2421018  mult        $v0, $s2, $v0
    ctx->pc = 0x390b74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 18) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_390b78:
    // 0x390b78: 0x8ec80004  lw          $t0, 0x4($s6)
    ctx->pc = 0x390b78u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_390b7c:
    // 0x390b7c: 0x5e1821  addu        $v1, $v0, $fp
    ctx->pc = 0x390b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
label_390b80:
    // 0x390b80: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x390b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_390b84:
    // 0x390b84: 0x94710000  lhu         $s1, 0x0($v1)
    ctx->pc = 0x390b84u;
    SET_GPR_ZE32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_390b88:
    // 0x390b88: 0xac470008  sw          $a3, 0x8($v0)
    ctx->pc = 0x390b88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 7));
label_390b8c:
    // 0x390b8c: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x390b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_390b90:
    // 0x390b90: 0x10a00019  beqz        $a1, . + 4 + (0x19 << 2)
label_390b94:
    if (ctx->pc == 0x390B94u) {
        ctx->pc = 0x390B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B90u;
        // 0x390b94: 0x94700004  lhu         $s0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390B98u;
        goto label_390b98;
    }
    ctx->pc = 0x390B90u;
    {
        const bool branch_taken_0x390b90 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x390B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390B90u;
        // 0x390b94: 0x94700004  lhu         $s0, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390b90) {
            ctx->pc = 0x390BF8u;
            goto label_390bf8;
        }
    }
    ctx->pc = 0x390B98u;
label_390b98:
    // 0x390b98: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x390b98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_390b9c:
    // 0x390b9c: 0x94a20002  lhu         $v0, 0x2($a1)
    ctx->pc = 0x390b9cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
label_390ba0:
    // 0x390ba0: 0x56020013  bnel        $s0, $v0, . + 4 + (0x13 << 2)
label_390ba4:
    if (ctx->pc == 0x390BA4u) {
        ctx->pc = 0x390BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BA0u;
        // 0x390ba4: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BA8u;
        goto label_390ba8;
    }
    ctx->pc = 0x390BA0u;
    {
        const bool branch_taken_0x390ba0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x390ba0) {
            ctx->pc = 0x390BA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390BA0u;
            // 0x390ba4: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390BF0u;
            goto label_390bf0;
        }
    }
    ctx->pc = 0x390BA8u;
label_390ba8:
    // 0x390ba8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x390ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
label_390bac:
    // 0x390bac: 0x56220010  bnel        $s1, $v0, . + 4 + (0x10 << 2)
label_390bb0:
    if (ctx->pc == 0x390BB0u) {
        ctx->pc = 0x390BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BACu;
        // 0x390bb0: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BB4u;
        goto label_390bb4;
    }
    ctx->pc = 0x390BACu;
    {
        const bool branch_taken_0x390bac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x390bac) {
            ctx->pc = 0x390BB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390BACu;
            // 0x390bb0: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390BF0u;
            goto label_390bf0;
        }
    }
    ctx->pc = 0x390BB4u;
label_390bb4:
    // 0x390bb4: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x390bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_390bb8:
    // 0x390bb8: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_390bbc:
    if (ctx->pc == 0x390BBCu) {
        ctx->pc = 0x390BBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BB8u;
        // 0x390bbc: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BC0u;
        goto label_390bc0;
    }
    ctx->pc = 0x390BB8u;
    {
        const bool branch_taken_0x390bb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x390bb8) {
            ctx->pc = 0x390BBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390BB8u;
            // 0x390bbc: 0x8ca5000c  lw          $a1, 0xC($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390BF0u;
            goto label_390bf0;
        }
    }
    ctx->pc = 0x390BC0u;
label_390bc0:
    // 0x390bc0: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x390bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_390bc4:
    // 0x390bc4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x390bc4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_390bc8:
    // 0x390bc8: 0x90620020  lbu         $v0, 0x20($v1)
    ctx->pc = 0x390bc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 32)));
label_390bcc:
    // 0x390bcc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x390bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_390bd0:
    // 0x390bd0: 0xa0620020  sb          $v0, 0x20($v1)
    ctx->pc = 0x390bd0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 32), (uint8_t)GPR_U32(ctx, 2));
label_390bd4:
    // 0x390bd4: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x390bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390bd8:
    // 0x390bd8: 0x90820020  lbu         $v0, 0x20($a0)
    ctx->pc = 0x390bd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 32)));
label_390bdc:
    // 0x390bdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x390bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_390be0:
    // 0x390be0: 0xa0820020  sb          $v0, 0x20($a0)
    ctx->pc = 0x390be0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 32), (uint8_t)GPR_U32(ctx, 2));
label_390be4:
    // 0x390be4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x390be4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_390be8:
    // 0x390be8: 0x10000012  b           . + 4 + (0x12 << 2)
label_390bec:
    if (ctx->pc == 0x390BECu) {
        ctx->pc = 0x390BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BE8u;
        // 0x390bec: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BF0u;
        goto label_390bf0;
    }
    ctx->pc = 0x390BE8u;
    {
        const bool branch_taken_0x390be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x390BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BE8u;
        // 0x390bec: 0xaca30008  sw          $v1, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390be8) {
            ctx->pc = 0x390C34u;
            goto label_390c34;
        }
    }
    ctx->pc = 0x390BF0u;
label_390bf0:
    // 0x390bf0: 0x54a0ffeb  bnel        $a1, $zero, . + 4 + (-0x15 << 2)
label_390bf4:
    if (ctx->pc == 0x390BF4u) {
        ctx->pc = 0x390BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390BF0u;
        // 0x390bf4: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390BF8u;
        goto label_390bf8;
    }
    ctx->pc = 0x390BF0u;
    {
        const bool branch_taken_0x390bf0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x390bf0) {
            ctx->pc = 0x390BF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x390BF0u;
            // 0x390bf4: 0x94a20002  lhu         $v0, 0x2($a1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x390BA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_390ba0;
        }
    }
    ctx->pc = 0x390BF8u;
label_390bf8:
    // 0x390bf8: 0x8ee20118  lw          $v0, 0x118($s7)
    ctx->pc = 0x390bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 280)));
label_390bfc:
    // 0x390bfc: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x390bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_390c00:
    // 0x390c00: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x390c00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_390c04:
    // 0x390c04: 0x40f809  jalr        $v0
label_390c08:
    if (ctx->pc == 0x390C08u) {
        ctx->pc = 0x390C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C04u;
        // 0x390c08: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C0Cu;
        goto label_390c0c;
    }
    ctx->pc = 0x390C04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x390C0Cu);
        ctx->pc = 0x390C08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C04u;
        // 0x390c08: 0x34a50502  ori         $a1, $a1, 0x502 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1282);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390C04u, 0x390C0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x390C0Cu;
label_390c0c:
    // 0x390c0c: 0x8e640000  lw          $a0, 0x0($s3)
    ctx->pc = 0x390c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_390c10:
    // 0x390c10: 0x2b41821  addu        $v1, $s5, $s4
    ctx->pc = 0x390c10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_390c14:
    // 0x390c14: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x390c14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_390c18:
    // 0x390c18: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x390c18u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_390c1c:
    // 0x390c1c: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x390c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
label_390c20:
    // 0x390c20: 0xa4500000  sh          $s0, 0x0($v0)
    ctx->pc = 0x390c20u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 16));
label_390c24:
    // 0x390c24: 0xa4510002  sh          $s1, 0x2($v0)
    ctx->pc = 0x390c24u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 17));
label_390c28:
    // 0x390c28: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x390c28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
label_390c2c:
    // 0x390c2c: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x390c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_390c30:
    // 0x390c30: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x390c30u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_390c34:
    // 0x390c34: 0x2b41021  addu        $v0, $s5, $s4
    ctx->pc = 0x390c34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 20)));
label_390c38:
    // 0x390c38: 0x8fb20004  lw          $s2, 0x4($sp)
    ctx->pc = 0x390c38u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_390c3c:
    // 0x390c3c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x390c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_390c40:
    // 0x390c40: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x390c40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_390c44:
    // 0x390c44: 0x242202b  sltu        $a0, $s2, $v0
    ctx->pc = 0x390c44u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_390c48:
    // 0x390c48: 0x1480ff55  bnez        $a0, . + 4 + (-0xAB << 2)
label_390c4c:
    if (ctx->pc == 0x390C4Cu) {
        ctx->pc = 0x390C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C48u;
        // 0x390c4c: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C50u;
        goto label_390c50;
    }
    ctx->pc = 0x390C48u;
    {
        const bool branch_taken_0x390c48 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x390C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C48u;
        // 0x390c4c: 0xac67000c  sw          $a3, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x390c48) {
            ctx->pc = 0x3909A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3909a0;
        }
    }
    ctx->pc = 0x390C50u;
label_390c50:
    // 0x390c50: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x390c50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_390c54:
    // 0x390c54: 0x7bb000a0  lq          $s0, 0xA0($sp)
    ctx->pc = 0x390c54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_390c58:
    // 0x390c58: 0x7bb10090  lq          $s1, 0x90($sp)
    ctx->pc = 0x390c58u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_390c5c:
    // 0x390c5c: 0x7bb20080  lq          $s2, 0x80($sp)
    ctx->pc = 0x390c5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_390c60:
    // 0x390c60: 0x7bb30070  lq          $s3, 0x70($sp)
    ctx->pc = 0x390c60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_390c64:
    // 0x390c64: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x390c64u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_390c68:
    // 0x390c68: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x390c68u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_390c6c:
    // 0x390c6c: 0x7bb60040  lq          $s6, 0x40($sp)
    ctx->pc = 0x390c6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_390c70:
    // 0x390c70: 0x7bb70030  lq          $s7, 0x30($sp)
    ctx->pc = 0x390c70u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_390c74:
    // 0x390c74: 0x7bbe0020  lq          $fp, 0x20($sp)
    ctx->pc = 0x390c74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_390c78:
    // 0x390c78: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x390c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_390c7c:
    // 0x390c7c: 0x3e00008  jr          $ra
label_390c80:
    if (ctx->pc == 0x390C80u) {
        ctx->pc = 0x390C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C7Cu;
        // 0x390c80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x390C84u;
        goto label_390c84;
    }
    ctx->pc = 0x390C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x390C80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x390C7Cu;
        // 0x390c80: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x390C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x390C84u;
label_390c84:
    // 0x390c84: 0x0  nop
    ctx->pc = 0x390c84u;
    // NOP
    ctx->pc = 0x390c88u;
}
